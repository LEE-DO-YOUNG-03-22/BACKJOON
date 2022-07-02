#include <stdio.h>
#define N 10000000

int main(){
    int amp;
    int array[N];

    int max = -N, min = N;
    scanf("%d", &amp);

    for(int i = 0 ; i < amp ; i++){
        scanf("%d",&array[i]);
        if(max < array[i]){
            max = array[i];
        }
        if(min > array[i]){
            min = array[i];
        }
    }
    printf("%d %d",min,max);

    return 0;
}
