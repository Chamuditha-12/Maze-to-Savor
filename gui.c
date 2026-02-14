// gui.c
#include "gui.h"

// Function to print the game title
void printGameTitle(void) {
    printf("\n\t\t\t             --- MAZE RUNNER GAME - UCSC ---");
}

// Function to print the first floor map
void printFirstFloor(void) {
    printf("\n\n");
    printf("\n    -------------------------------------------------------------------------------------------------------\n");

    printf("\t\t\t\t             First Floor Map!\n\n");
    printf("\t0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24\n");
    
    for(int wid = 0; wid < 6; wid++) {
        printf("      %d", wid);
        printf(" ");
        for(int len = 0; len < 5; len++) {
            printf(".   .   .   .   .   ");
        }  
        printf("\n");
    }

    for(int wid = 6; wid < 10; wid++) {
        printf("      %d", wid);
        printf(" ");
        printf(".   .   .   .   .   .   .   .   ") && printf("#   #   #   #   #   #   #   #   #   ") && printf(".   .   .   .   .   .   .   .   \n");
    }
    
    printf("\n    -------------------------------------------------------------------------------------------------------\n");
}

// Function to print the second floor map
void printSecondFloor(void) {
    printf("\n\t\t\t\t             Second Floor Map!\n\n"); 
    printf("\t0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24\n");
    
    for(int wid = 0; wid < 6; wid++) {
        printf("      %d", wid);
        printf(" ");
        printf(".   .   .   .   .   .   .   .   ") && printf("#   #   #   #   #   #   #   #   #   ") && printf(".   .   .   .   .   .   .   .   \n");
    }
    
    for(int wid = 6; wid < 10; wid++) {
        printf("      %d", wid);
        printf(" ");
        for(int len = 0; len < 5; len++) {
            printf(".   .   .   .   .   ");
        }  
        printf("\n");
    }
    
    printf("\n");
    printf("\n    -------------------------------------------------------------------------------------------------------\n");
}

// Function to print the third floor map
void printThirdFloor(void) {
    printf("\n\t\t\t\t             Third Floor Map!\n\n"); 
    printf("\t0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24\n");
    
    for(int wid = 0; wid < 10; wid++) {
        printf("      %d", wid);
        printf(" ");
        printf(".   .   .   .   .   .   .   .   ") && printf("#   #   #   #   #   #   #   #   #   ") && printf(".   .   .   .   .   .   .   .   \n");
    }
    
    printf("\n");
    printf("\n    -------------------------------------------------------------------------------------------------------\n");
}

// Function to print the legend
void printLegend(void) {
    printf("\n\t\t\t                       # - Cannot enter !\n\n");
}
