/*************************************************************************
	> File Name: 1328.cpp
	> Author: Liyi
	> Mail: 294225027@qq.com
	> Created Time: 2018年08月22日 星期三 14时52分15秒
 ************************************************************************/

#include <stdio.h>
#include<stdlib.h>
using namespace std;

int k[205];
int l[205];
int mat[5][5] = {0};

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    int n, a, b, c,  ansa = 0, ansb = 0;
    scanf("%d %d %d", &n, &a, &b);
    for(int i = 0; i < a; i++) scanf("%d", &k[i]);
    for(int i = 0; i < b; i++) scanf("%d", &l[i]);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i != j){
                if(i == 0 && (j == 2 || j == 3)) {mat[i][j] = 1; continue;}
                if(i == 1 && (j == 0 || j == 3)) {mat[i][j] = 1; continue;}
                if(i == 2 && (j == 1 || j == 4)) {mat[i][j] = 1; continue;}
                if(i == 3 && (j == 2 || j == 4)) {mat[i][j] = 1; continue;}
                if(i == 4 && j < 2) {mat[i][j] = 1; continue;}
                mat[i][j] = -1;
            }
        }
    }
    int e = 0, f = 0;
    c = a * b / gcd(a, b);
    if(n <= c){
        for(int i = 0; i < n; i++){
            if(k[e] != l[f]){
               if( mat[k[e]][l[f]] == 1) ansa += 1;
                else ansb += 1;
            }
            e = (e + 1) % a;
            f = (f + 1) % b;
        }
    }else{
        int *arr = (int *)calloc(c, sizeof(int));
        int sa = 0, sb = 0;
        for(int i = 0; i < c; i++){
            if(l[f] != k[e]){
                if(mat[k[e]][l[f]] == 1) sa += 1;
                else sb += 1;
            }
            e = (e + 1) % a;
            f = (f + 1) % b;
        }
        ansa = n / c * sa;
        ansb = n / c * sb;
        e = 0; f = 0;
        for(int i = 0; i < n % c; i++){
            if(k[e] != l[f]){
               if( mat[k[e]][l[f]] == 1) ansa += 1;
                else ansb += 1;
            }
            e = (e + 1) % a;
            f = (f + 1) % b;
        }
    }
    printf("%d %d\n", ansa, ansb);
    return 0;
}
