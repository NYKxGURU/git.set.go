#include <stdio.h>


int main() {    

    int number1, number2, sum, sub, multi, div;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;    
    
     // calculating sub
    sub = number1 - number2; 

    // Multiply number 1 and number 2
    multi = number1 * number2;
        
     // Divide number 1 and number 2
    div = number1 / number2;   
    
    printf("%d + %d = %d", number1, number2, sum, sub, multi, div);
    return 0;
}
