/*************************************************************************
	> File Name: 1031.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月23日 星期四 20时30分16秒
 ************************************************************************/

#include <stdio.h>
#include<iostream>
using namespace std;


int main(){
    int n, sum = 0, ave, a[101], ans = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    ave = sum / n;
    for(int i = 0; i < n; i++){
        a[i] -= ave;
    }
    for(int i = 0; i < n; i++){
        if(a[i] == 0) continue;
        a[i + 1] += a[i];
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}
