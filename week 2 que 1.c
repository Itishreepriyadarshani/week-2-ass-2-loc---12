#include<stdio.h>
int count(int,int*,int);
void main()
{
    int i,n,el,m;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("\n enter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the element whose frequency is to be counted:");
    scanf("%d",&el);
    m=count(el,a,n);
    printf("\n occurrence of the element is %d",m);
}
int count(int el,int a[],int n)
{
    int fr=0,i;
    for(i=0;i<n;i++)
    {
        if(el==a[i])
        {
            fr++;
        
        }
    }
    return fr;
}