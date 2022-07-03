#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);

    if( b + c >= 60){
        a = (a + ((b + c) / 60)) % 24;
        b = (b + c) % 60;
        printf("%d %d\n", a, b);
    }
    else{
        printf("%d %d\n", a, b + c);
    }

    return 0;
}
