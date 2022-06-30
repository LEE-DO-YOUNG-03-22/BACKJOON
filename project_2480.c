#include <stdio.h>

int main(){
    int a,b,c,max = 0;

    scanf("%d %d %d", &a, &b, &c);
    if(a >= 1 && a <= 6 && b >= 1 && b <= 6 && c >= 1 && c <= 6){
        if(a == b && b == c){
            printf("%d\n",10000 + (a * 1000));
        }
        else if(a == b){
            printf("%d\n", 1000 + (a * 100));
        }
        else if(c == b){
            printf("%d\n", 1000 + (c * 100));
        }
        else if(a == c){
            printf("%d\n", 1000 + (c * 100));
        }
        else{
            if(a > max) max = a;
            if(b > max) max = b;
            if(c > max) max = c;
            printf("%d\n", max * 100);
        }
    }
}
