#include <stdio.h>

int main() {
    
    int a = 1101;
    int b = 1100;

    printf("\n\tOdd \t\t Even \n");

    for(a; a <= 1118; a+=2) {
        printf("\tBSIT %d \t BSIT %d\n",a,b+=2);
    }

    return 0;
}
