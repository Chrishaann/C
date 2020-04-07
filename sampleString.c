#include <stdio.h>

int main() {
    char stringVar[100] = "This is a string";
    char inputStringVar[100];
    char secondString[100];
    printf("Displaying stringVar using percent s: %s", stringVar);
    printf("\n-----\n");
    printf("Please input a string: ");
    fgets(secondString, 100, stdin);
    printf("Displaying inputStringVar, accepted using fgets: %s", secondString);
    printf("\n-----\n");
    printf("Please input a string: ");
    scanf("%s", &inputStringVar);
    printf("Displaying inputStringVar, accepted using percent s: %s", inputStringVar);
    
    getch();
    return 0;
}