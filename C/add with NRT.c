#include<stdio.h>
#include<conio.h>
void pal(int);
void main()
{
int a;
printf("\n enter the number");
scanf("%d",&a);
pal(a);
getch();
}

void pal(int n1)
{

int n2,d,r=0;
n1=n2;
while(n1!=0)
{
d=n1%10;
r=r*10+d;
n1=n1/10;
break;
}
if(n2==r)
    printf("pal %d",r);
else
    printf("not pal %d",r);
}


