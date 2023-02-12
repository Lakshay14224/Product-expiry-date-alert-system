#include<stdio.h>
int main ()
{
int n,i;
char str [25];
printf("Enter the number of items:\n");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
printf("enter product name\n ");
scanf("%s", &str);
printf(" Quantity \n");
scanf("%d", &n);
}
return 0 ;
}