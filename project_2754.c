#include <stdio.h>

int main(){
    char score[2];
    scanf("%s", score);
    if(score[0] == 'A'){
        if(score[1] == '+'){
            printf("4.3\n");
        }
        else if(score[1] == '0'){
            printf("4.0\n");
        }
        else if(score[1] == '-'){
            printf("3.7\n");
        }
    }
    else if(score[0] == 'B'){
        if(score[1] == '+'){
            printf("3.3\n");
        }
        else if(score[1] == '0'){
            printf("3.0\n");
        }
        else if(score[1] == '-'){
            printf("2.7\n");
        }
    }
    else if(score[0] == 'C'){
        if(score[1] == '+'){
            printf("2.3\n");
        }
        else if(score[1] == '0'){
            printf("2.0\n");
        }
        else if(score[1] == '-'){
            printf("1.7\n");
        }
    }
    else if(score[0] == 'D'){
        if(score[1] == '+'){
            printf("1.3\n");
        }
        else if(score[1] == '0'){
            printf("1.0\n");
        }
        else if(score[1] == '-'){
            printf("0.7\n");
        }
    }
    else if(score[0] == 'F'){
        printf("0.0\n");
        return 0;
    }
}
