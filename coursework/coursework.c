/*
C programming coursework

Kaiwen Zhao 11072741

The purpose of this project is:
1. to correctly read the ID, Charge and Energy data in dataset.txt and to correctly report an error if the reading process fails.
This part of the code was written between lines 67-109.
2. to calculate the mean, sample Sdev, max and min values of Charge and Energy. This part of the code was written between lines 119-126,
with declaration of the functions on the top between lines 25-63.
3. to print out the previously calculated data in the required format. This part of the code was written between lines 128-133.
   

*/

#include <stdio.h> // Include the standard library header for input and output
#include <stdlib.h> // Include the standard library header for malloc()
#include <errno.h>  // Include the errno header for error handling
#include <string.h> // Include the string header for strerror()
#include <math.h> // Include the math header for sqrt()

//declare functions
float calc_mean(float *arr, int size){
    float sum = 0;
    for (int i = 0; i < size; i++){
        sum += *(arr + i);
    }
    float mean = sum / size;
    return mean;
}

float calc_max(float *arr, int size){
    float max = *arr;
    for (int i = 0; i < size; i++){
        float result = *(arr + i);
        if (result > max)
        max = result;
    }
    return max;
}

float calc_min(float *arr, int size){
    float min = *arr;
    for (int i = 0; i < size; i++){
        float result = *(arr + i);
        if (result < min)
        min = result;
    }
    return min;
}

float calc_sdev(float *arr, int size, float mean){
    float sdsum = 0;
    for(int i = 0; i < size; i++){
        sdsum += (*(arr + i) - mean) * (*(arr + i) - mean); 
    }

    float sdev = sqrt(sdsum / (size - 1));

    return sdev;
}


int main(){

    FILE *file = fopen("dataset.txt","r"); //open file

    if (file == NULL){
        perror("Error opening file");   //error handling
        printf("Error code:%d\n",errno);  //print error code
        printf("Error description:%s\n",strerror(errno));   //print the error code and description

        return 1;   //terminate the program
    }

    int num = 100;
    int i = 0;              //define i for while loop in line 35
    int id;                 //define id as integer that read from file
    float charge, energy;   //define variables as float that read from file
    char line[num];        //define line

    int *array_id = (int *)malloc(num * sizeof(int));      //allocate dynamic memory for array_id, array_charge, array_energy
    float *array_charge = (float *)malloc(num * sizeof(float)); //float is used for charge and energy because they are float in the file
    float *array_energy = (float *)malloc(num * sizeof(float));
    
    if (array_id == NULL || array_charge == NULL || array_energy == NULL) {     //error if memory allocation failed
        printf("Memory allocation failed!\n");
        return 1;
    }

    while(fgets(line,sizeof(line),file) != NULL && i < num){       

        if (sscanf(line, "%d,%f,%f", &id, &charge, &energy) == 3){
            
            *(array_id + i) = id;
            *(array_charge + i) = charge;
            *(array_energy + i) = energy;
            i++;
            
        }else {
            printf("Error processing line: %s", line);
            fclose(file);
            return 1;
        }
    }
    printf("File read successfully\n");

    fclose(file);


    float charge_mean = calc_mean(array_charge, num);
    float energy_mean = calc_mean(array_energy, num);
    float charge_max = calc_max(array_charge, num);
    float energy_max = calc_max(array_energy, num);
    float charge_min = calc_min(array_charge, num);
    float energy_min = calc_min(array_energy, num);
    float charge_sdev = calc_sdev(array_charge, num, charge_mean);
    float energy_sdev = calc_sdev(array_energy, num, energy_mean);


    printf("| 2741|  Charge |  Energy |\n");
    printf("|-----|---------|---------|\n");
    printf("| Mean|   %5.2f |   %5.2f |\n", charge_mean, energy_mean);
    printf("| Sdev|   %5.2f |   %5.2f |\n", charge_sdev, energy_sdev);
    printf("| Min |   %5.2f |   %5.2f |\n", charge_min, energy_min);
    printf("| Max |   %5.2f |   %5.2f |\n", charge_max, energy_max);

    return 0;
}