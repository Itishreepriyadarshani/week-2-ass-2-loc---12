#include<stdio.h>
#include<string.h>
int main()
{char s[100];
int i,a=0,d=0,sc=0;
printf("enter the string");
gets(s);
for(i=0;s[i];i++)
{if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
a++;
else if(s[i]>=48&&s[i]<+57)
d++;
else
sc++;
}
printf("alphabets=%d\n",a);
printf("digits=%d",d);
printf("special characters=%d",sc);
return 0;}