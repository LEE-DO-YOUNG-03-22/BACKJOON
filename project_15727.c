#include <stdio.h>

int main(){
    int L, n = 0;

    scanf("%d", &L);
    n = n + L/5;
    if(L%5 > 0){
        n +=1;
    }
    printf("%d\n", n);

    return 0;
}
