/*************************************************************************
	> File Name: 1028.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月15日 星期三 10时52分44秒
 ************************************************************************/

#include <stdio.h>
//记忆化搜索
int arr[1005] = {0};
int is_valid(int n);

int main(){
    int n;
    scanf("%d", &n);
    int sum = 1;
    sum = is_valid(n);
    printf("%d\n", sum);
    return 0;
}

int is_valid(int n){
    int num = 1;
    for(int i = 1; i <= n/2; i++){
        if (arr[i]) num += arr[i];
        else{
            arr[i] = is_valid(i);
            num += arr[i];
        }
    }
    return num;
}
