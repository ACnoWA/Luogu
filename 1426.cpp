/*************************************************************************
	> File Name: 1426.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月16日 星期四 16时59分02秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

//注意本题的数据要用float　不能用double　因为pow的返回类型和计算
//类型就是float，否则会造成误差

float  caclu(int n){
    return 7*(1 - pow(0.98, n)) / 0.02;
}

int main(){
    float s, x, start, end;
    scanf("%f %f", &s, &x);
    start = s - x;
    end = s + x;
    for(int i = 0; i <= 45; i++){
        if(caclu(i) >= start){
            if(caclu(i + 1) > end) printf("n\n");
            else printf("y\n");
            break;
        }
    }
    return 0;
}
