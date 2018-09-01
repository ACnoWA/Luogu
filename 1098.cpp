/*************************************************************************
	> File Name: 1098.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月25日 星期六 22时24分37秒
 ************************************************************************/

#include <stdio.h>

int main(){
    int a, b, c, i = 0, m = 0;
    char str[102];
    scanf("%d %d %d", &a, &b, &c);
    scanf("%s", str);
    while(str[i] != '\0'){
        if(str[i] == '-'){
            if(str[i-1]+1 < str[i+1]){
                if(a == 1 || (str[i-1] >= '0' && str[i-1] <= '9' && a != 3)){
                    if (c == 2){
                        for(int k = str[i+1]-1; k > str[i-1]; k--)
                        for(int j = 0; j < b; j++){
                            printf("%c", k);
                        }
                    }else{
                        for(int k = str[i-1]+1; k < str[i+1]; k++)
                            for(int j = 0; j < b; j++){
                                printf("%c", k);
                            }
                    }
                }else if(a == 2){
                    if(c == 2){
                        for(int k = str[i+1]-33; k > str[i-1]-32; k--){
                            for(int j = 0; j < b; j++) printf("%c", k);
                        }
                    }else{
                    for(int k = str[i-1]-31; k < str[i+1]-32; k++)
                        for(int j = 0; j < b; j++){
                            printf("%c", k);
                        }
                    }
                }else{
                    for(int k = 0; k < str[i+1] - str[i-1] - 1; k++){
                        for(int j = 0; j < b; j++){
                            printf("*");
                        }
                    }
                }
            }else if(str[i-1]+1 == str[i+1]) ;  
            else printf("%c", str[i]);
        }else{
            printf("%c", str[i]);
        }
        i++;
    }
    return 0;
}
