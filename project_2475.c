#include <stdio.h>
#include <math.h>

int main(){
    int num[5], sum = 0;

    for(int i = 0 ; i < 5 ; i++){
        scanf("%d", &num[i]);
        sum = sum + pow(num[i], 2);
    }
    printf("%d\n", sum%10);

    return 0;
}
