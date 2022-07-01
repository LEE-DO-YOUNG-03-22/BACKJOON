#include <stdio.h>

int main(){
    int A,B,T;
    scanf("%d",&T);
    for(int j = 0 ; j < T ; j++){
        scanf("%d %d",&A,&B);
        printf("Case #%d: %d + %d = %d\n", j + 1,A,B,A+B);
    }
    return 0;
}
