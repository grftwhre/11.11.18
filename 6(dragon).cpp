#include <iostream>
#include <stdio.h>
using namespace std;
int powerdragon(int N)
{
    int t=0;
    int a=0;
    while (N>4)
    {
        N-=3;
        t++;
    }
if (N==4)
    a=4;
if (N==3)
    a=3;
if (N==2)
    a=2;
return (3*t*a);
}
int main()
{
    int N;
    printf("enter N\n");
    scanf("%d",&N);
    printf("power = %d", powerdragon(N));
    return 0;
}
