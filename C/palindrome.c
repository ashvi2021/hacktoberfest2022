#include<stdio.h>
#include<conio.h>
int main()
{
int n, s=0,d;
printf("\n Entre the number:");
scanf("%d",&n);

while(n!=0)
{
d=n%10;
s=n*10+d;
n=n/10;
}
if(s==n)
printf("palindrome%d",n);
else
printf("not palindrome%d",n);
return 0;
}
