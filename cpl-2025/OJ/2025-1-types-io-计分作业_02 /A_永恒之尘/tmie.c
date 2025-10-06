#include <stdio.h>

void converDate(int month, int day, int year, int weekday, int hour, int minute, int second) {
    const char* months[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    const char* weekdays[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    printf("%s %s %02d %02d:%02d:%02d %04d\n", weekdays[weekday], months[month - 1], day, hour, minute, second, year);
}

int main(int argc, char const* argv[]) {
    int month, day, year, weekday, hour, minute, second;
    scanf("%d %d %d %d %d %d %d", &month, &day, &year, &weekday, &hour, &minute, &second);
    converDate(month, day, year, weekday, hour, minute, second);
    return 0;
}
