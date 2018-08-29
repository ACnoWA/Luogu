/*************************************************************************
	> File Name: 1022.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月18日 星期六 21时32分31秒
 ************************************************************************/

#include <stdio.h>

//解此题的思想是把等式全部移到左边，然后常数项除以系数再乘-1即可
//再这里lr是一个关键的变量，当i移到等式右边之后，lr就要变成-1
//还有就是各种当系数为1时的特殊处理，主要就是等式两边开头

int main(){
    char str[100] = {0}, alpha;
    scanf("%s", str);
    int i = 0, temp = 0, n = 0, x = 0;
    int flag = 1, lr = 1;
    if(str[0] == '-') flag = -1;
    while(str[i] != '\0'){
        if(str[i] == '=') {
            lr = -1;
        }
         if(str[i] >= 'a' && str[i] <= 'z'){
            alpha = str[i];
            //题目所给测试数据，在等式两边开头的字母若系数为1则不写1
            if(str[i-1] == '-' || str[i-1] == '=' || i == 0) temp = 1;
            x = x + temp * flag;
            temp = 0;
            i++;
            continue;
         }
        //当遇到加减等于的时候就取temp的数
        if(str[i] == '-' || str[i] == '+' || str[i] == '='){
            n = n + temp * flag;
            temp = 0;
            if(str[i] == '-') flag = -1 * lr;
            else flag = 1 * lr;
            i++;
            continue;
        }
        while(str[i] >= '0' && str[i] <= '9'){
            temp = temp * 10 + (str[i] - '0');
            i++;
        }
    }
    //处理方程以数字结尾时，最终的temp无法获得的漏洞
    if(temp != 0) n += temp * flag;
    double ans = -1.0 * n / x; 
    printf("%c=%.3lf\n", alpha, ans);
    return 0;
}
