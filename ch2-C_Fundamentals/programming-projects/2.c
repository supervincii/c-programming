/* Computes the volume of a sphere */

#include <stdio.h>

#define CONSTANT 4.0f / 3.0f
#define PI 3.14159f

int main(void) {
    float radius = 10.0f, volume;

    volume = CONSTANT * PI * (radius * radius * radius);
    printf("Volume of sphere with radius %.2f: %.2f\n", radius, volume);

    return 0;
}
