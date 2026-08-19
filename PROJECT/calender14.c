
#include <stdio.h>

int getFirstDayOfTheYear(int year) {
    int day = (year * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
    return (day + 1) % 7;
}

void birthdayAgeCalculator() {
    struct Date { int day, month, year; } birth, today;
    int ageYear, ageMonth, ageDay;

    printf("\n===== HAPPY BIRTHDAY AGE CALCULATOR =====\n");
    printf("Enter your date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &birth.day, &birth.month, &birth.year);

    printf("Enter today's date (dd mm yyyy): ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((today.year % 4 == 0 && today.year % 100 != 0) || (today.year % 400 == 0))
        monthDays[1] = 29;

    if (today.day < birth.day) {
        today.day += monthDays[(today.month - 2 + 12) % 12];
        today.month--;
    }

    if (today.month < birth.month) {
        today.month += 12;
        today.year--;
    }

    ageDay = today.day - birth.day;
    ageMonth = today.month - birth.month;
    ageYear = today.year - birth.year;

    printf("\nYou are %d years, %d months, and %d days old.\n", ageYear, ageMonth, ageDay);

    if (ageMonth == 0 && ageDay == 0)
        printf("HAPPY BIRTHDAY!\n");
}

void showHolidays() {
    int choice, option;
    printf("\nDo you want to see holidays? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nSee holidays for (1 = Whole Year, 2 = Single Month): ");
        scanf("%d", &option);

        if (option == 1) {
            printf("\n========= BANGLADESH NATIONAL HOLIDAYS =========\n");
            printf("Internationaal mother language day,21 february\n");
            printf("Independence day,26 march\n");
            printf("Bangla new year,14 april\n");
            printf("Victory day,16 december\n");
        } else if (option == 2) {
            int m;
            printf("\nEnter month number (1-12): ");
            scanf("%d", &m);
            switch (m) {
                case 2:  printf("Internationaal mother language day,21 february\n"); break;
                case 3: printf("Independence day,26 March\n"); break;
                case 4: printf("Bangla new year,14 April\n"); break;
                case 12: printf("Victory day,16 December\n");; break;
                default: printf("\nNo national holiday this month.\n");
            }
        } else {
            printf("\nInvalid choice.\n");
        }
    } else {
        printf("\nOkay, have a great day!\n");
    }
}

int main() {
    char *months[] = {"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE",
                      "JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i, j, totalDays, weekDay, spaceCounter, year;

    printf("Enter your favorite year: ");
    scanf("%d", &year);

    printf("\n\n*************** WELCOME TO %d *********************\n\n", year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        daysInMonth[1] = 29;

    weekDay = getFirstDayOfTheYear(year);

    for (i = 0; i < 12; i++) {
        printf("\n\n-------------------- %s --------------------\n", months[i]);
        printf(" SUN  MON  TUE  WED  THU  FRI  SAT\n");

        for (spaceCounter = 0; spaceCounter < weekDay; spaceCounter++)
            printf("     ");

        totalDays = daysInMonth[i];
        for (j = 1; j <= totalDays; j++) {
            printf("%5d", j);
            weekDay++;
            if (weekDay > 6) {
                weekDay = 0;
                printf("\n");
            }
        }
    }

    int choice;
    printf("\n\nDo you want to know your age? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);
    if (choice == 1)
        birthdayAgeCalculator();
    else
        printf("\nOkay, skipping age calculation.\n");

    showHolidays();
    return 0;
}
