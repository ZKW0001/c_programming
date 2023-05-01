/*
C programming coursework

Kaiwen Zhao 11072741

The purpose of this project is:
1. to correctly read the ID, Charge and Energy data in dataset.txt and to correctly report an error if the reading process fails.
This part of the code was written between lines 87-138. Required status return was written between lines 76-84.
2. to calculate the mean, sample Sdev, max and min values of Charge and Energy. This part of the code was written between lines 142-149,
with declaration of the functions on the top between lines 35-74.
3. to print out the previously calculated data in the required format. This part of the code was written between lines 152-157.


Dynamic memory allocation are also being used to allocate memory more efficiently and to avoid memory overflow. The program will terminate
when memory allocation fails. 

Pointers are being used to store and access data in arrays during the process of reading the file and functuion calculations. This helps the 
the total program to be more efficient in terms of memory usage and speed. Array can now be accessed without having to make a copy of the
entire array.

Functions are being used to make the code more readable and easier to debug. The functions are declared on the top of the code.

Errors are being handled in various ways. For example, the program will report an error when reading the txt file failed printing out the 
error code and description. The program will also terminate when memory allocation fails or when the data in the file is not in the correct 
format.
*/

#include <stdio.h> // Include the standard library header for input and output
#include <stdlib.h> // Include the standard library header for malloc()
#include <errno.h>  // Include the errno header for error handling
#include <string.h> // Include the string header for strerror()
#include <math.h> // Include the math header for sqrt()
#include <stdlib.h> // Include the standard library header for exit()

//declare functions for calculation part
float calc_mean(float *arr, int size){  //calculate mean value using pointers
    float sum = 0;
    for (int i = 0; i < size; i++){
        sum += *(arr + i);  //using pointers to access data in arrays by varying the address of the pointer
    }
    float mean = sum / size;
    return mean;    //return the mean value
}

float calc_max(float *arr, int size){   //calculate max value using pointers
    float max = *arr;
    for (int i = 0; i < size; i++){
        float result = *(arr + i);  //using pointers to access data in arrays by varying the address of the pointer
        if (result > max)
        max = result;
    }
    return max;   //return the max value
}

float calc_min(float *arr, int size){   //calculate min value using pointers
    float min = *arr;
    for (int i = 0; i < size; i++){
        float result = *(arr + i);  //using pointers to access data in arrays by varying the address of the pointer
        if (result < min)
        min = result;
    }
    return min;  //return the min value
}

float calc_sdev(float *arr, int size, float mean){  //calculate sample standard deviation using pointers
    float sdsum = 0;
    for(int i = 0; i < size; i++){
        sdsum += (*(arr + i) - mean) * (*(arr + i) - mean);  //using pointers to access data in arrays by varying the address of the pointer
    }

    float sdev = sqrt(sdsum / (size - 1));  //calculate sample standard deviation

    return sdev;    //return the sample standard deviation
}

int check_status_function(int status){;  //declare function check_status_function
    if (status == 0) {
        return 0;   //return 0 if the file is read successfully
    }
    else{
        exit(1);
        }           //terminate the program if the file is not read successfully
}

int main(){

// 1. File reading and storing part

    FILE *file = fopen("dataset.txt","r"); //open file

    if (file == NULL){
        perror("Error opening file");   //error handling
        printf("Error code:%d\n",errno);  //print error code
        printf("Error description:%s\n",strerror(errno));   //print the error code and description

        return 1;   //terminate the program
    }

    
    // Although the coursework requires 100 lines to be read, I still want to make the number of lines to be read and the data to be stored 
    // a variable so that it can be more versatile and flexible to change. It is worth noting that I deliberately declare this variable before
    // reading the file, so that the number of lines in the txt file to be read will be the same as numbers stored in the arrays, in order to 
    // use the space more efficiently and improve the total reading and storing process.

    int num = 100;
    int i = 0;              //define i for while loop in line 35
    int id;                 //define id as integer that read from file
    float charge, energy;   //define variables as float that read from file
    char line[num];        //define line as a string with the length of num
    int status = 0;         //define status as 0, which means the file is read successfully

    int *array_id = (int *)malloc(num * sizeof(int));      //allocate dynamic memory for array_id, array_charge, array_energy
    float *array_charge = (float *)malloc(num * sizeof(float)); //float is used for charge and energy because they are float in the file
    float *array_energy = (float *)malloc(num * sizeof(float));
    
    if (array_id == NULL || array_charge == NULL || array_energy == NULL) {     //error if memory allocation failed
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    while(fgets(line,sizeof(line),file) != NULL && i < num){       //read file line by line and store data in arrays until the end of file or the number of lines required to read is reached

        if (sscanf(line, "%d,%f,%f", &id, &charge, &energy) == 3){  // read data from file and store in arrays only if the data is in the correct format
            
            *(array_id + i) = id;    //using Pointers to store id, charge and energy in arrays
            *(array_charge + i) = charge;
            *(array_energy + i) = energy;
            i++;    //i is used to count the number of lines read and the number of data stored in the arrays
            
        }else {
            printf("Status 1: Error processing line: %s", line);  //error if the data is not in the correct format
            status = 1;   //change status to 1, which means the file is not read successfully
            fclose(file);   //close file
            check_status_function(status);  //call function check_status_function to check the status of the file reading process
        }
    }
    check_status_function(status);  //call function check_status_function to check the status of the file reading process
    fclose(file);   //close file

// 2. Calculation part

    float charge_mean = calc_mean(array_charge, i);     // calculate mean, max, min and standard deviation of charge and energy using functions
    float energy_mean = calc_mean(array_energy, i);     // the reason I use "i" instead of "num" is that "i" is the exact number of data stored in the arrays, while "num" may exceed that. 
    float charge_max = calc_max(array_charge, i);
    float energy_max = calc_max(array_energy, i);
    float charge_min = calc_min(array_charge, i);
    float energy_min = calc_min(array_energy, i);
    float charge_sdev = calc_sdev(array_charge, i, charge_mean);
    float energy_sdev = calc_sdev(array_energy, i, energy_mean);
// 3. Printing part

    printf("| 2741|  Charge |  Energy |\n");
    printf("|-----|---------|---------|\n");
    printf("| Mean|   %5.2f |   %5.2f |\n", charge_mean, energy_mean);
    printf("| Sdev|   %5.2f |   %5.2f |\n", charge_sdev, energy_sdev);
    printf("| Min |   %5.2f |   %5.2f |\n", charge_min, energy_min);
    printf("| Max |   %5.2f |   %5.2f |\n", charge_max, energy_max);  //print out the outputs in a table

    return 0;   //terminate the program
}