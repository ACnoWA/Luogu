/*************************************************************************
	> File Name: 1464.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月16日 星期四 19时58分58秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <string.h>

int64_t mat[25][25][25] = {0};

int64_t find(int64_t a, int64_t b, int64_t c){
    if( a <= 0 || b <= 0 || c <= 0 ) {
        return 1;
    }
    if(mat[a][b][c]) return mat[a][b][c];
    if( a > 20 || b > 20 || c > 20 ) {
        mat[a][b][c] = find(20, 20, 20);
    }else if( a < b && b < c ){
        mat[a][b][c] = find(a, b, c-1) + find(a, b-1, c-1) - find(a,b-1,c);
    }else{
        mat[a][b][c] = find(a-1, b, c) + find(a-1,b-1,c) + find(a-1, b, c-1) - find(a-1, b-1, c -1);
    }
    return mat[a][b][c];
}

int main(){
    memset(mat, 0, sizeof(mat));
    int64_t a, b, c;
    scanf("%" PRId64, &a);
    scanf("%" PRId64, &b);
    scanf("%" PRId64, &c);
    while(a != -1 || b != -1 || c != -1){
        printf("w(%" PRId64 ", %" PRId64 ", %" PRId64 ") = ", a, b, c);
        //这里将大于20的赋值21而不是20的原因是若三个数据中
        //只有一个数据大于20，这样赋值就会导致三个数据都小于等于20 
        //产生错误答案
        if(a > 20) a = 21;
        if(b > 20) b = 21;
        if(c > 20) c = 21;      
        printf("%" PRId64 "\n", find(a, b, c));
        scanf("%" PRId64, &a);
        scanf("%" PRId64, &b);
        scanf("%" PRId64, &c);
    }
    return 0;
}

