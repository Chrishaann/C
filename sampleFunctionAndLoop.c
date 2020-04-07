#include <stdio.h>

void getBrands(int sizearray) {
    int i = 0, j = 0;
    char phoneBrands[sizearray][20];
    fgets(phoneBrands, 20, stdin);
        
    for(i; i<sizearray; i++) {
        printf("Please input brand for phone number %d: ", i+1);
        fgets(phoneBrands[i], 20, stdin);
    }
        
    for(j; j<sizearray; j++) {
        printf("Phone Brand %d: %s", j+1, phoneBrands[j]);
    }
}

void getLanguages(int sizearray) {
    int i = 0, j = 0;
    char progLanguage[sizearray][20];
    fgets(progLanguage, 20, stdin);
        
    for(i; i<sizearray; i++) {
        printf("Please input Programming Language number %d: ", i+1);
        fgets(progLanguage[i], 20, stdin);
    }
        
    for(j; j<sizearray; j++) {
        printf("Programming Language number %d: %s", j+1, progLanguage[j]);
    }
}

void getLaptop(int sizearray) {
    int i = 0, j = 0;
    char LaptopBrands[sizearray][20];
    fgets(LaptopBrands, 20, stdin);
        
    for(i; i<sizearray; i++) {
        printf("Please input Laptop Brands number %d: ", i+1);
        fgets(LaptopBrands[i], 20, stdin);
    }
        
    for(j; j<sizearray; j++) {
        printf("Programming Language number %d: %s", j+1, LaptopBrands[j]);
    }
}


int main() {
    int yourChoice;
    int arraysize, i = 0, j = 0;
    
    printf("Please select\n");
    printf("[1]Phone Brands\n");
    printf("[2]Programming Languages\n");
    printf("[3]Laptop Brands\n");
    printf("Your Choice: ");
    scanf("%d", &yourChoice);
    
    if(yourChoice == 1) {
        printf("How many Phone Brands do you want to input?\n");
        scanf("%d", &arraysize);
        getBrands(arraysize);
    }
    else if(yourChoice == 2) {
        printf("How many Programming Languages do you want to input?\n");
        scanf("%d", &arraysize);
        getLanguages(arraysize);
    }
    else if(yourChoice == 3) {
        printf("Display Laptop Brands");
        printf("How many Laptop Brands do you want to input?\n");
        scanf("%d", &arraysize);
        getLaptop(arraysize);
    }
    else {
        printf("%d is not in the choices!", yourChoice);
    }
}