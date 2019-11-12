#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a,int b,int c, int d);
int max_of_two (int a,int b);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a,int b,int c, int d)
{
    int f,s;
    f=max_of_two (a,b);
    s=max_of_two (c,d);
    return max_of_two (f,s);
}

int max_of_two (int a,int b){
    if (a>b){
        return a;
    }else {
        return b;
    }
}
