#include <iostream>
#include <stdio.h>
using namespace std;
int power (long long A, long long B)
{
    int c=A%10;
    int f=B%4;
    int t=B%2;
    if (B==1)
        return c;
    if ((A==0)||(B==0))
        return 1;
    if ((B==10)||((c==0)))
        return 0;
    if (c==1)
        return 1;
    if (c==5)
        return 5;
    if (c==6)
        return 6;
    else if ((c==4)||(c==9))
    {
        if (t==1)
            return c;
        else
            return (c*c)%10;
    }
    else
    {
        if (f==1)
         return c;
        if (f==2)
         return (c*c)%10;
        if (f==3)
         return (c*c*c)%10;
        if (f==0)
         return (c*c*c*c)%10;
    }
}
int main()
{
long long A;
long long B;
    printf("enter A\n");
    scanf("%lld",&A);
    printf("enter B\n");
    scanf("%lld",&B);
    printf("result = %d", power(A,B));
    return 0;
}
