#include <stdio.h>

int main() {
    int number = 1;
    float floatnumber = 20.10;
    double doublenumber = 20.20;
    string
    char charvar = 'a';
    int getIntInput;
    float getFloatInput;
    char getCharInput;
    //basic output int, float, char
    printf("The number is %d, the floatnumber is %f and the doublenumber is %lf", number, floatnumber, doublenumber);
    printf("\nThis is the value of charvar: %c", charvar);
    printf("\n-------------\n");
    //basic input and output int, float, char
    printf("Getting the user input and displaying the input\n");
    printf("Enter a char: ");
    scanf("%c", &getCharInput);
    printf("Enter a number int: ");
    scanf("%d", &getIntInput);
    printf("Enter a float: ");
    scanf("%f", &getFloatInput);
    printf("The input for int is %d, for float is %f, for char is %c", getIntInput, getFloatInput, getCharInput);
    getch();
    return 0;
}