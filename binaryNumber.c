#include <stdio.h>


int main() {

    int binaryNumber = 0, decimalNumber = 0, i = 1;
    
    printf("Enter number");
    scanf("%d",&decimalNumber);

    while(decimalNumber != 0) {
        binaryNumber += (decimalNumber % 2) * i;
        i*=10;
        decimalNumber /= 2;
    }
    
        printf("%d", binaryNumber);
    
        return 0;
}
