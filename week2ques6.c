#include<stdio.h>
int maxoccuringinteger(int a[],int n)
{int i,j,maxinteger,count;
int maxcount=0;
for(i=0;i<n;i++)
{count=1;
for(j=i+1;j<n;j++)
{
    if(a[j]==a[i])
    {
        count++;
        if(count>maxcount)
        {maxinteger=a[j];}
    }
}}
return maxinteger;
}
int main()
{
    int n;
    printf("enter number of elements");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array");
    for(int i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    int maxinteger=maxoccuringinteger(a,n);
    printf("\n maximum occuring integer is %d",maxinteger);
    return 0;
}