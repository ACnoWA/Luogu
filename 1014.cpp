/*************************************************************************
	> File Name: 1014.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月18日 星期六 20时55分43秒
 ************************************************************************/

#include <stdio.h>

//本题所说的z字形是沿斜线的z字形

int get_sum(int n){
    return (n + 1) * n / 2;
}

int main(){
    int n, loc, point, flag = 1, r = 1, c = 1;
    scanf("%d", &n);
    for(int i = 0; i < 5000 && flag; i++){
        if(get_sum(i) < n && get_sum(i + 1) >= n){
            flag = 0;
            loc = i + 1;
            point = get_sum(i + 1) - n;
            if(loc & 1){
                c = loc; r = 1;
                    for(int i = 0; i < point; i++){
                        r++; c--;
                    }
                printf("%d/%d\n", r, c);
            }else{
                r = loc; c = 1;
                for(int i = 0; i < point; i++){
                    r--; c++;
                }
                printf("%d/%d\n", r, c);
            }
        }
    }
    return 0;
}
