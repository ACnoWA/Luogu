/*************************************************************************
	> File Name: 1421.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月06日 星期一 13时19分43秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
    int num, a[2], ans = INT_MAX, cnt;
    scanf("%d", &num);
    for(int i = 0; i < 3; i++){
        scanf("%d %d", &a[0], &a[1]);
        cnt = ceil((double)num / a[0]);
        if(cnt * a[1] < ans) ans = cnt * a[1];
    }
    printf("%d\n", ans);
    return 0;
}
