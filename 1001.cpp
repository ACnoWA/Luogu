/*************************************************************************
	> File Name: 1001.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月06日 星期一 13时10分08秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
#include <inttypes.h>
using namespace std;

int main(){
    int a, b;
    int64_t ans;
    scanf("%d %d", &a, &b);
    ans = a + b;
    printf("%" PRId64 "\n", ans);

    return 0;
}
