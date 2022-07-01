#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    if(1 <= N && N <= 9){
        for(int i = 1 ; i < 10 ; i++){
            printf("%d * %d = %d\n", N, i, N*i);
        }
    }
}
