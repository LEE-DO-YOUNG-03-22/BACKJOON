#include <stdio.h>  
#include <string.h>

int main(){
    char str[100];
    scanf("%s", str);
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 'a' + 'A';
        } //소문자를 대문자로 변환
        else{
            str[i] = str[i] - 'A' + 'a';
        } //대문자를 소문자로 변환
    }
    for(int i = 0 ; str[i] != '\0' ; i++){
        printf("%c", str[i]);
    }

    return 0;
}
