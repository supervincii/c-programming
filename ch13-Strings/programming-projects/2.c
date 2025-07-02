/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* maximum reminder of reminders */
#define MSG_LEN 60    /* max length of reminder message */

int read_line(char str[], int n);

int main(void) {
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_time_str[9], msg_str[MSG_LEN+1];
    int day, hours, mins, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day, 24-hour time (hh:mm), and reminder: ");
        scanf("%2d", &day);
        if (day == 0) {
            break;            
        } else if (day < 0) {
            printf("Day cannot be a negative number.\n");
            // Clear the input buffer.
            while (getchar() != '\n') ;
            continue;
        } else if (day > 31) {
            printf("Day cannot be greater than 31.\n");
            while (getchar() != '\n');
            continue;
        }

        scanf("%2d:%2d", &hours, &mins);

        sprintf(day_time_str, "%2d %02d:%02d", day, hours, mins);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_time_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_time_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
