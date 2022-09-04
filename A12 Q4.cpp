#include<stdio.h>
void rec(int);
int main()
{
        int num;
        printf("Entre the number\n");
        scanf("%d",&num);
        rec(num);
}
void rec(int n)
{
        if(n==1)
        printf("%d\t",2*n-1);
        else
        {
                printf("%d\t",2*n-1);
                rec(n-1);

        }
}
