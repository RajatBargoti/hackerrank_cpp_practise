#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.   
}
*/
int max_of_four(int a, int b, int c, int d)
{
    int gr8;
    if (a > b && a > c && a > d)
    {
        gr8 = a;
    }
    else if (b > a && b > c && b > d)
    {
        gr8 = b;
    }
    else if (c > a && c > b && c > d)
    {
        gr8 = c;
    }
    else
    {
        gr8 = d;
    }
    return gr8;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}