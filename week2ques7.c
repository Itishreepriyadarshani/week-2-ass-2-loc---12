#include<stdio.h>
int main()
{
    int n,i,j=0;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);

}
for(i=0;i<n;i++)
{if(arr[i]<0)
{if(i!=j)
{
    int temp=arr[i];
    arr[i]=arr[j];
arr[j]=temp;
}
j++;}
}
printf("the resultant array");
for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
}