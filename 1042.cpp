/*************************************************************************
	> File Name: 1042.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月23日 星期四 21时39分54秒
 ************************************************************************/

#include <stdio.h>
#include<stdlib.h>
using namespace std;


int main(){
    char ch;
    int a = 0, b = 0, ans = 0, c = 0, d = 0;
    int flag1 = 0, flag2 = 0, num[2000][2], i=0;
    scanf("%c", &ch);
    while(ch != 'E'){
        if(ch == 'W') {a++; c++;}
        if(ch == 'L') {b++; d++;}
        if(ch != '\n') ans++;
        if(flag1 && abs(a - b) >= 2){
            printf("%d:%d\n", a, b);
            flag1 = 0;
            a = 0; b = 0;
        }
        if(flag2 && abs(c - d) >= 2){
            num[i][0] = c;
            num[i][1] = d;
            i++;
            flag2 = 0;
            c = 0; d = 0;
        }
        if(a == 11 || b == 11){
            if(abs(a - b) >= 2){
                printf("%d:%d\n", a, b);
                a = 0;
                b = 0;
            }else flag1 = 1;
        }
        if(c == 21 || d == 21){
            if(abs(c - d) >= 2){
                num[i][0]=c;
                num[i][1]=d;
                i++;
                c = 0;
                d = 0;
            }else flag2 = 1;
        }
        scanf("%c", &ch);
    }
    printf("%d:%d\n", a, b);
    printf("\n");
    num[i][0] = c;
    num[i][1] = d;
    for(int j = 0; j <= i; j++){
        printf("%d:%d\n", num[j][0], num[j][1]);
    }
    return 0;
}
