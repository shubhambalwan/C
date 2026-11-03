#include <stdio.h>

int main() {
    double sum = 1, sumterm;
    int x;

    printf("enter the value of x: ");
    scanf("%d", &x);

    for(double i = 2, signterm = -1; i <= 10 ; i += 2){
        double powerterm = 1, factterm = 1;
        //power
        for(int j = 1; j <=i; j++){
            powerterm *= x;
        }
        //factorial
        for(int j = i; j >= 1; j--){
            factterm *= j;
        }
        sumterm = signterm*powerterm/factterm;
        sum += sumterm;
        signterm *= -1;
    }

    printf("sum is: %lf", sum);
    
    return 0;
}