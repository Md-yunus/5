#include<stdio.h>
int main()
{
    int n,*p,max=0;
   // scanf("%d ",&n);
    int a[5]={12,34,45,76,24};
    /*for(int i=0;i<5;i++)
    {
        scanf("%d ",a[i]);
    }*/
    p=a;
    for(int i=0;i<5;i++)
    {
        if(*p>max)
        {
            max=*p;
        }
        p++;
    }printf("The Maximun Number is:%d ",max);
}
