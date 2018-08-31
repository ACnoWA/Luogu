/*************************************************************************
	> File Name: 1056.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月22日 星期三 11时32分14秒
 ************************************************************************/

#include <stdio.h>
#include<algorithm>
using namespace std;


int main(){
    int ka[1005] = {0};
    int la[1005] = {0};
    int ansk[1005] = {0};
    int ansl[1005] = {0}, temp[4];
    int m, n, k, l, d;
    scanf("%d %d %d %d %d", &m, &n, &k, &l, &d);
    for(int i = 0; i < d; i++){
        for(int j = 0; j < 4; j++) scanf("%d", &temp[j]);
        if(temp[0] == temp[2]){
            temp[1] > temp[3] ? la[temp[3]]++ : la[temp[1]]++;
        }else{
            temp[0] > temp[2] ? ka[temp[2]]++ : ka[temp[0]]++;
        }
    }
    for(int i = 0; i < k; i++){
        int max = 0, loc = 0;
        for(int j = 1; j <= m; j++){
            if(ka[j] > max){
                max = ka[j];
                loc = j;
            }
        }
        ansk[i] = loc;
        ka[loc] = 0;
    }

    for(int i = 0; i < l; i++){
        int max = 0, loc = 0;
        for(int j = 1; j <= n; j++){
            if(la[j] > max){
                max = la[j];
                loc = j;
            }
        }
        ansl[i] = loc;
        la[loc] = 0;
    }
    sort(ansk, ansk+k);
    sort(ansl, ansl+l);
    for(int i = 0; i < k; i++){
        if(i == k-1) printf("%d\n", ansk[i]);
        else printf("%d ", ansk[i]);
    }
   for(int i = 0; i < l; i++){
        if(i == l-1) printf("%d\n", ansl[i]);
        else printf("%d ", ansl[i]);
    }
    return 0;
}
