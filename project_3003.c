#include <stdio.h>

int main(){
    int white[6];
    int perfect[6] = {1,1,2,2,2,8};
    int result[6];

    for(int i = 0 ; i < 6 ; i++){
        scanf("%d", &white[i]);
        result[i] = perfect[i] - white[i];
    }
    for(int j = 0 ; j < 6 ; j++){
        printf("%d ", result[j]);
    }
    printf("\n");

    return 0;
}
