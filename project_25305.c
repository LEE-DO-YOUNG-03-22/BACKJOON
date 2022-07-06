#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, k, x[10001];
    int tmp = 0;

    scanf("%d %d", &N, &k);

    for(int i = 0 ; i < N ; i++){
        scanf("%d", &x[i]);
    }
    
    for (int i = N - 1 ; i >= 0 ; i--) {
        for (int j = 0 ; j <= N - 1 ; j++) {
            if (x[j] < x[j - 1]) {
                tmp = x[j];
                x[j] = x[j - 1];
                x[j - 1] = tmp;
            }
        }
    }

    for(int k = 0 ; k <= N - 1 ; k++){
        printf("%d ",x[k]);
    }
    printf("\n");

    printf("%d\n", x[N - k]);
    return 0;
}
