#include<stdio.h>
void num(int);
int main()
{
        int n;
        printf("Entre the two number\n");
        scanf("%d",&n);
        num(n);
}
void num(int n)
{
        if(n==1)
        printf("%d\t",n);
        else
        {
        num(n-1);
        printf("%d\t",n);
        }
        
}

