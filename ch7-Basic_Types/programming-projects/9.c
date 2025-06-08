#include <ctype.h>
#include <stdio.h>

int main(void) {
    int hr, min;
    char period;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hr, &min, &period);

    hr = (hr == 12 ? 0 : hr);
    if (toupper(period) == 'P') {
        hr += 12;
    }

    printf("Equivalent 24-hour time: %d:%d\n", hr, min);
    return 0;
}
