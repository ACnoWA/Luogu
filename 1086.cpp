/*************************************************************************
	> File Name: 1086.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月24日 星期五 22时57分23秒
 ************************************************************************/

#include <stdio.h>
#include<algorithm>
#include <string.h>
using namespace std;
typedef struct node{
    int x;
    int y;
    int num;
}Node;

int cmp(const Node &a, const Node &b){
    return a.num > b.num;
}

int main(){
    int m, n, k, a = 0, ans = 0, end = 0;
    int len = 0, c, d;
    Node mat[405]; 
    memset(mat, 0, sizeof(mat));
    scanf("%d %d %d", &m, &n, &k);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            mat[a].x = i; mat[a].y = j;
            scanf("%d", &mat[a].num);
            if(mat[a].num != 0) end++;
            a++;
        }
    }
    sort(mat, mat+a, cmp);
    for(int i = 0; i < end; i++){
        if(len + 2*(mat[i].x+1) + 1 <= k && i == 0){
            len += mat[i].x + 2;
            ans += mat[i].num;
        }else if(len + 2*(mat[i].x+1) + 1 > k && i == 0) break;
        if(i != 0){
            c = abs(mat[i].x - mat[i-1].x);
            d = abs(mat[i].y - mat[i-1].y);
            if(len+2+c+d+mat[i].x <= k){
                len += (c + d + 1);
                ans += mat[i].num;                 
            }else break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
