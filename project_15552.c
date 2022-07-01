#include <stdio.h>

int main(){
    int A, B, case_;
    if(case_ <= 10000000){
        scanf("%d", &case_);
        for(int i = 0 ; i < case_ ; i++){
            scanf("%d %d", &A, &B);
            printf("%d\n", A+B);
        }
    }
    return 0;
}
