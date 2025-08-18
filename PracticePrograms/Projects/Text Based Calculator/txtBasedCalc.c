#include <stdio.h>
#include <string.h>
#include <windows.h>

#define true 1
#define false 0

typedef char String[50];

int main() {

        int exitFlag = false;
        String calculation;
        String exit = "exit";

        while(exitFlag == false) {
                printf("\n------------ Text Based Calculator ------------\n");
                printf("enter calculation: ");
                fgets(calculation, sizeof(calculation), stdin);
                calculation[strcspn(calculation, "\n")] = 0;
                if(strcmp(exit, calculation) == 0) {
                        exitFlag = true;
                }
                else {
                        printf("%s", calculation);
                }
        }

        return 0;
}