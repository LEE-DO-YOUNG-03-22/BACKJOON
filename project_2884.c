#include <stdio.h>

int main(){
    int h,m;
    scanf("%d %d", &h, &m);
    if(0 <= m && m < 45 && 1 <= h && h <= 23){
        h = h - 1;
        m = 60 + (m - 45);
        printf("%d %d\n",h ,m);
    }
    else if(0 <= m && m < 45 && h == 0){
        h = 23;
        m = 60 + (m - 45);
        printf("%d %d\n",h ,m);
    }
    else if(m >= 45 && m <= 59 && 1 <= h && h <= 23){
        m = m - 45;
        printf("%d %d\n",h ,m);
    }
    else if(m >= 45 && m <= 59 && h == 0){
        m = m - 45;
        printf("%d %d\n",h ,m);
    }
    else{
        printf("error");
    }
    return 0;
}
