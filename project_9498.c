#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);
    if(0 <= score && score <= 100){
        if(score < 60){
            printf("F");
        }
        else if (score < 70)
        {
            printf("D");
        }
        else if (score < 80)
        {
            printf("C");
        }
        else if (score < 90)
        {
            printf("B");
        }
        else if (score <= 100)
        {
            printf("A");
        }
    }
}
