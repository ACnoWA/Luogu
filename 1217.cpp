/*************************************************************************
	> File Name: 1217.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月15日 星期三 18时17分25秒
 ************************************************************************/

//这题筛选回文质数，若先筛选质数再筛回文数会TLE，因为质数比回文数多
//同时用线性筛时，得根据题意开一个一亿的数组，很耗时间和内存，所以可以先
//筛回文数, 在筛选回文数时，我们要知道偶数位回文数定是合数（可被11整除)
//所以本题的上界是一亿九位数，意味着８位数的都不用考虑

#include <stdio.h>
#include <math.h>

int is_valid(int n){
    int temp = n, ans = 0;
    while(n){
        ans = ans*10 + n%10;
        n /= 10;
    }
    return temp == ans;
}

int is_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int get_length(int n){
    return floor(log10(n)) + 1;
}

int main(){
    int start, end, i, j = 0;
    int num[100000];
    scanf("%d %d", &start, &end);
    if(end > 10000000) end = 10000000;
    for(int i = start; i <= end; i++){
        if(is_valid(i)) num[j++] = i;
    }
    for(int i = 0; i < j; i++ ){
        if(num[i] % 2 == 0) continue;
        if(is_prime(num[i])) printf("%d\n", num[i]);    
    }
    return 0;
}
