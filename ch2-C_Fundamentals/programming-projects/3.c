/* Computes the volume of a sphere based on the input radius of the user*/

#include <stdio.h>

#define CONSTANT 4.0f / 3.0f
#define PI 3.14159f

int main(void) {
    float radius, volume;

    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);

    volume = CONSTANT * PI * (radius * radius * radius);
    printf("Volume of sphere with radius %.2f: %.2f\n", radius, volume);

    return 0;
}
