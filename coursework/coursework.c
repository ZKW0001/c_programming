#include <stdio.h>
#include <errno.h>  // Include the errno header for error handling
#include <string.h> // Include the string header for strerror()
#include <math.h>


int main(){

    FILE *file = fopen("dataset.txt","r");

    if (file == NULL){
        perror("Error opening file");
        printf("Error code:%d\n",errno);
        printf("Error description:%s\n",strerror(errno));

        return 1;
    }
    // else{
    //     printf("File read scuuessfully");

    // }
    char line[319];
    int i = 0;
    int id; 
    int array_id[319];
    float charge, energy;
    float array_charge[319], array_energy[319];

    // printf("id of the dataset\n");

    while(fgets(line,sizeof(line),file) != NULL){

        if (sscanf(line, "%d,%f,%f", &id, &charge, &energy) == 3){
            
            array_id[i] = id;
            array_charge[i] = charge;
            array_energy[i] = energy;
            i++;
            
        }else {
            printf("Error processing line: %s", line);
            fclose(file);
            return 1;
        }
    }


    fclose(file);

//calc
    float charge_mean, charge_max = array_charge[0], charge_min = array_charge[0], energy_mean, energy_max = array_energy[0], energy_min = array_energy[0];
    int j = 0;
    float charge_sum = 0, charge_result,  energy_sum = 0, energy_result;
    float charge_sum_dev = 0, energy_sum_dev = 0;
    int num = 100; /*sizeof(array_id) / sizeof(array_id[0]);*/
    
    while (j<num){


        //for charge
        charge_sum += array_charge[j];
        charge_result = array_charge[j];

        if (charge_result > charge_max)
        charge_max = charge_result;
        if (charge_result < charge_min)
        charge_min = charge_result;

        //for energy
        energy_sum += array_energy[j];
        energy_result = array_energy[j];

        if (energy_result > energy_max)
        energy_max = energy_result;
        if (energy_result < energy_min)
        energy_min = energy_result;


        j++;
    }

        //mean
        charge_mean = charge_sum / num;
        energy_mean = energy_sum / num;


    // sdev

    int k = 0;


    while (k<num){
        charge_sum_dev += (array_charge[k] - charge_mean) * (array_charge[k] - charge_mean);

        energy_sum_dev += (array_energy[k] - energy_mean) * (array_energy[k] - energy_mean);

        k++;
    }

    float charge_sdev; 
    charge_sdev = sqrt(charge_sum_dev / num);
    float energy_sdev; 
    energy_sdev = sqrt(energy_sum_dev / num);

   


    printf("| 2741|  Charge |  Energy |\n");
    printf("|-----|---------|---------|\n");
    printf("| Mean|  %5.2f  |  %5.2f  |\n", charge_mean, energy_mean);
    printf("| Sdev|  %5.2f  |  %5.2f  |\n", charge_sdev, energy_sdev);
    printf("| Min |  %5.2f  |  %5.2f  |\n", charge_min, energy_min);
    printf("| Max |  %5.2f  |  %5.2f  |\n", charge_max, energy_max);

    return 0;
}