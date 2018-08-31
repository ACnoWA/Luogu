/*************************************************************************
	> File Name: 1067.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月21日 星期二 09时10分43秒
 ************************************************************************/

#include <stdio.h>


int main(){
    int n, x, flag = 0;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        scanf("%d", &x);
        if(x == 0) continue;
        if(!flag){
            if(i == n)
            printf("%d", x);
            else if(i == n-1){
                if(x != 1)
                printf("%dx",x);
                else
                printf("x");
            }
            else{
                if(x < 0 && x != -1)
                printf("%dx^%d", x, n-i);
                else if(x > 0 && x != 1)
                printf("%dx^%d", x, n-i);
                else if(x == -1)
                printf("-x^%d", n-i);
                else printf("x^%d", n-i);
            }
            flag = 1;
            continue;
        }
        if(x > 0) {
            if( i == n )
            printf("+%d", x);
            else if(i != n-1){
                if(x != 1)
                printf("+%dx^%d", x, n-i);
                else
                printf("+x^%d", n-i);
            }else{
                if(x != 1)
                printf("+%dx", x);
                else
                printf("+x"); 
            }
        }else{
            if(i == n)
            printf("%d", x);
            else if(i != n-1){
                if(x != -1)
                printf("%dx^%d", x, n-i);
                else
                printf("-x^%d", n-i);
            }else{
                if(x != -1)
                printf("%dx", x);
                else
                printf("-x");
            } 
        }
    }
    printf("\n");
    return 0;
}
