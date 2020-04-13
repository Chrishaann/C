#include <stdio.h>

int main()
{
    int* pointerValue, varValue1, varValue2, varValue3;
    varValue1 = 5;
    pointerValue = &varValue1;
    printf("The pointer value is %d, the pointer address is %p.", *pointerValue, pointerValue);
    printf("\n");
    varValue2 = 10;
    pointerValue = &varValue2;
    printf("The pointer value is %d, the pointer address is %p.", *pointerValue, pointerValue);
    printf("\n");
    varValue3 = 15;
    pointerValue = &varValue3;
    printf("The pointer value is %d, the pointer address is %p.", *pointerValue, pointerValue);
    printf("\n");
    
    
    return 0;
}
