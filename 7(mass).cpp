#include <iostream>
#include <stdio.h>
using namespace std;
int prime(int a)
{
    if (a!=2)
    {
        if ((a<2)||(a%2==0))
            return 0;
    }
    for (int i=3;i*i<a;i++)
    {
        if((a%i)==0)
        {
            return 0;
        }
    }
    return 1;
}
int countprime(int b)
{
    int k=0;
    for (int a=2;a<b;a++)
    {
        if (prime(a)!=0)
        k++;
    }
 return k;
}
void fullmass (int m, int n)
{
    int arr[m][n];
    int a=4;
    int y;
    int x;
    int c=m*n;
while(a<(c+countprime(c)))
{
   for (y=0;y<m;y++)
    {
     if (prime (a)==1)
     {
         a++;
     }
    arr[0][y]=a;
    a++;
    }
  for (x=1;x<n;x++)
    {
     if (prime (a)==1)
     {
         a++;
     }
     arr[x][m-1]=a;
     a++;
    }
  for (y=m-2;y>=0;y--)
  {
    if (prime (a)==1)
     {
         a++;
     }
    arr[n-1][y]=a;
    a++;
  }
  for (x=n-2;x>=0;x--)
  {
      if (prime (a)==1)
     {
         a++;
     }
      arr[x][0]=a;
      a++;
  }
}
   for (int q=0;q<n;q++)
   {
     for (int w=0;w<m;w++)
     cout<<arr[q][w]<<" ";
     cout<<endl;
   }
}
int main()
{
    int m,n;
 printf("enter size of mass (m)\n");
 scanf("%d",&m);
 printf("enter size of mass (n)\n");
 scanf("%d",&n);
 fullmass(m,n);
    return 0;
}
