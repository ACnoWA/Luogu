/*************************************************************************
	> File Name: 1307.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月19日 星期日 22时44分29秒
 ************************************************************************/

#include <stdio.h>

int flip_num(int n){
    int temp = 0, flag = 1;
    if(n < 0 ){
        n = -1 * n;
        flag = 0;
    }
    while(n){
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    if(!flag) temp = temp * -1;
    return temp;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", flip_num(n));
    return 0;
}
