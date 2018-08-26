/*************************************************************************
	> File Name: 1003.cpp
	> Author: Liyi
> Mail: 294225027@qq.com
	> Created Time: 2018年08月20日 星期一 20时27分10秒
 ************************************************************************/

#include <stdio.h>

//该数组用来存每一个矩形的对角线的坐标
int mat[10005][4];

int main(){
    int n, xl, yl, x, y, flag = 0, ans;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d %d", &mat[i][0], &mat[i][1]);
        scanf("%d %d", &xl, &yl);
        mat[i][2] = mat[i][0] + xl;
        mat[i][3] = mat[i][1] + yl;
    }
    scanf("%d %d", &x, &y);
    //因为要查找最上层的地毯，所以从后往前找
    for(int i = n; i > 0; i--){
        if(x >= mat[i][0] && x <= mat[i][2] && y >= mat[i][1] && y <= mat[i][3]){
            flag = 1;
            ans = i;
            break;
        }
    }
        if(flag){
            printf("%d\n", ans);
        }else{
            printf("-1\n");
        }
    return 0;
}
