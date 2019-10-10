#include<stdio.h>
int main()
{
int row,col,space,n;
printf("enter no.of rows");
for(row=1;row<=n;row++)
{

for(col=n;col>=row;col--)
{
printf("*");
}
for(space=2;space<=row;space++)
{
printf("");
}
for(space=2;space<=row;space++)
{
printf("");
}

for(col=n;col>=row;col--)
{
printf("*");
}
printf("\n");
}
getch();
return 0;
}
