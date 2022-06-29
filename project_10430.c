#include <stdio.h>

int main(){
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);
    if(2<= a && a <= 10000 && 2<= b && b <= 10000 && 2<= c && c <= 10000){
        printf("%d\n",(a+b)%c);
        printf("%d\n",((a%c) + (b%c))%c);
        printf("%d\n",(a*b)%c);
        printf("%d\n",((a%c) * (b%c))%c);
    }
    else{
        printf("error\n");
    }
    return 0;
}
