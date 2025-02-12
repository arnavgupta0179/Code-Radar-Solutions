#include <stdio.h>
int main() {
    int month, year;
    scanf("%d", &month);
    int days;
    switch (month) {
        case 1:  
        case 3:  
        case 5:  
        case 7:  
        case 8:  
        case 10: 
        case 12: 
            days = 31;
            break;
        case 4:  
        case 6:  
        case 9:  
        case 11: 
            days = 30;
            break;
        case 2:  
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;  // Leap year
            } else {
                days = 28;  // Non-leap year
            }
            break;
        default:
            printf("Invalid month\n");
            return 1;  
    }

    // Print the result
    printf("Number of days in month %d of year %d: %d\n", month, year, days);
    
    return 0;
}
