/*************************************************************************
	> File Name: 1308.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月10日 星期五 09时10分11秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(){
    char word[10], ans[10];
    char arti[1000005];
    char blank;
    scanf("%s", word);
    scanf("%c", &blank);
    //scanf("%[^\n]", arti);
    gets(arti);
    printf("%s", arti);
    int i = 0, num = 0, start = INT_MAX, j = 0;
    while(arti[i] != '\0'){
        if(arti[i] == ' '){
            ans[j] = '\0';
           // printf("%s\n", ans);
            if(strcasecmp(ans, word) == 0) {
                num++;
                if(start > (i - strlen(ans))) 
                    start = i - strlen(ans);
            }
            j = 0;
            i++;
        }else{
        ans[j++] = arti[i++];
        }
    }
    ans[j] = '\0';
            if(strcasecmp(ans, word) == 0) {
                num++;
                if(start > (i - strlen(ans)))
                    start = i - strlen(ans);
            }
    printf("%s\n",ans);
    if(num)
    printf("%d %d\n", num, start);
    else
    printf("-1\n");
    return 0;
}
