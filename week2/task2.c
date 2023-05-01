#include <stdio.h>

int main(){

    double length, cross_section_area, electric_field, current_density, resistivity, resistance;
    printf("Enter a value for length:");
    scanf("%lf", &length);

    printf("Enter a value for cross-sectional area:");
    scanf("%lf", &cross_section_area);

    printf("Enter a value for electric field:");
    scanf("%lf", &electric_field);

    printf("Enter a value for current density:");
    scanf("%lf", &current_density);

    resistivity = electric_field / current_density;

    resistance =  (resistivity * length) / cross_section_area;

    printf("resitivity = %8f Ohm-metres\n", resistivity);
    printf("resistance = %.3f Ohms\n", resistance);






    return 0;
}