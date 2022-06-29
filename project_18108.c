#include <stdio.h>

int main(){
    int year = 0;

    scanf("%d", &year);

    if(1000 <= year || year <= 3000){
        printf("%d\n", year - 543);
    }
    else{
        printf("error\n");
    }
    return 0;
}
