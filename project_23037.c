#include <stdio.h>
#include <math.h>

int main(){
    int num, sum = 0;
    scanf("%d", &num);
    sum = pow(num/10000,5) + pow((num%10000)/1000,5) + pow((num%1000)/100,5) + pow((num%100)/10,5) + pow((num%10)/1,5);

    printf("%d\n", sum);
    return 0;
}
