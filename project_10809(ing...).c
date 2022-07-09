#include <stdio.h>

int main(){
    char S[100];
    char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char (result[26]);
    scanf("%s", S);

    for(int i = 0 ; i < sizeof(S) ; i++){
        for(int j = 0 ; j < 26 ; j++){
            if((int)S[i] == (int)alpha[j]){
                result[j] = i;
            }
            else{
                result[j] = -1;
            }
        }
    }
    for(int k = 0 ; k < 26 ; k++){
        printf("%c", result[k]);
    }

    return 0;
}
