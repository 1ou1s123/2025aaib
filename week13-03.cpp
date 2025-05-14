///week13-3.cpp
///ノ 劣锣埃猭 (т程そ计)
#include <stdio.h>
int gcd(int a, int b)
{
    printf("ρa: %d ρb: %d\n", a, b);
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b, a%b);
}
int main()
{
    printf("叫块2计(ex. 51 68)");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("程そ计琌:%d\n", ans);
}
