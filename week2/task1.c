#include <stdio.h>


// a
// int main () {
//     double resistance = 0;
//     double resistivity =  9.71e-4;
//     double length = 5;
//     double area = 4;

//     resistance = (resistivity * length) / area;

//     printf("resistance = %5.3f Ohms\n", resistance);

//     return 0; 
// }

//b

int main(){
    double resistivity, electric_field = 10, current_density = 300;

    resistivity = electric_field / current_density;

    printf("resitivity = %.3f Ohm-metres", resistivity);

    return 0;



}