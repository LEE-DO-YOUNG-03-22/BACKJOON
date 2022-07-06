#include <stdio.h>

int main(){
    int X, N, a[1000], b[10], sum = 0;
    scanf("%d",&X);
    scanf("%d",&N);
    for(int i = 0 ; i < N ; i++){
        scanf("%d %d",&a[i], &b[i]);
        sum = sum + a[i] * b[i];
    }
    if(X == sum){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
