/*************************************************************************
	> File Name: 1067-2.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月21日 星期二 23时07分39秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

//强逻辑的题解
int main(){
    int n, a;
    scanf("%d", &n);
    for(int i = n; i >= 0; i--){
        scanf("%d", &a);
        if(a){
            if(a > 0 && i != n) printf("+");
            if(abs(a) > 1 || i == 0) printf("%d", a);
            if(a == -1 && i != 0) printf("-");
            if(i != 1) printf("x^%d", i);
            if(i == 1) printf("x");
        }
    }
    return 0;
}
