#include<stdio.h>
#include<conio.h>
int fcat(int);
void main()
{
int n1,f;
clrscr();
printf("\n Enter one number");
scanf("%d",&n1);
f=fact(n1);
printf("\n factorial is:%d",f);
getch();
}
int fact(int n1)
{
int f=1;
while(n1!=0)
{
f=f*n1;
n1--;
}
return f;
}
