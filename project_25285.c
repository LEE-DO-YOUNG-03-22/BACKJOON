#include <stdio.h>

void BMI();

int main(){
    int T;
    float cm[200], kg[200], BMI[200];
    scanf("%d", &T);
    for(int i = 0 ; i < T ; i++){
        scanf("%f %f", &cm[i], &kg[i]);
        BMI[i] = kg[i] / ((cm[i] * 0.01) * (cm[i] * 0.01));
    }
    for(int i = 0 ; i < T ; i++){
        if(cm[i] < 140.1){printf("6\n");}
        else if(cm[i] < 146){printf("5\n");}
        else if(cm[i] < 159){printf("4\n");}
        else if(cm[i] < 161){
            if(BMI[i] >= 16.0 && BMI[i] < 35.0){printf("3\n");}
            else{printf("4\n");}
        }
        else if(cm[i] < 204){
            if(BMI[i] >= 20.0 && BMI[i] < 25.0){printf("1\n");}
            else if((BMI[i] >= 18.5 && BMI[i] < 20.0)||(BMI[i] >= 25.0 && BMI[i] < 30.0)){printf("2\n");}
            else if((BMI[i] >= 16.0 && BMI[i] < 18.5)||(BMI[i] >= 30.0 && BMI[i] < 35.0)){printf("3\n");}
            else{printf("4\n");}
        }
        else{printf("4\n");}
    }

    return 0;
}
