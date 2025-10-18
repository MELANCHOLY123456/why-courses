#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_lower_case(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char month[20], weekday[20];
    int day, year, hour, minute, second;

    if (scanf("%19s %d %d %19s %d %d %d", month, &day, &year, weekday, &hour, &minute, &second) != 7) {
        return 1;
    }

    const char* months[12] = { "january", "february", "march", "april", "may", "june",
                             "july", "august", "september", "october", "november", "december" };
    const char* abbr[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                           "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

    to_lower_case(month);

    const char* month_abbr = "Jan";
    for (int i = 0; i < 12; i++) {
        if (strcmp(month, months[i]) == 0) {
            month_abbr = abbr[i];
            break;
        }
    }

    const char* weekdays[7] = { "sunday", "monday", "tuesday", "wednesday",
                              "thursday", "friday", "saturday" };
    const char* week_abbr[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

    to_lower_case(weekday);

    const char* weekday_abbr = "Sun";
    for (int i = 0; i < 7; i++) {
        if (strcmp(weekday, weekdays[i]) == 0) {
            weekday_abbr = week_abbr[i];
            break;
        }
    }

    printf("%s %s %02d %02d:%02d:%02d %04d\n",
        weekday_abbr, month_abbr, day, hour, minute, second, year);

    return 0;
}