/*************************************************************************
	> File Name: 1036.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月15日 星期三 11时13分54秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 50000000

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {0};

void init(){
    is_prime[0] = is_prime[1] = 1;
    for(int i = 2; i <= MAX_N; i++){
        if(!prime[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] >= MAX_N) break;
            is_prime[i * prime[j]] = 1;
            prime[i * prime[j]] = 1;
            if( i % prime[j] == 0) break;
        }
    }
}

int num[21], ans = 0;

void find(int k, int start, int end, int sum){
    if( k == 0 ){
        if(is_prime[sum] == 0) ans++;
        return;
    }
    for(int i = start; i < end; i++){
        find(k-1, i+1, end+1, sum+num[i]);
    }
}

int main(){
    init();
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    find(k, 0, n-k+1, 0);
    printf("%d ", ans);
    return 0;
}

