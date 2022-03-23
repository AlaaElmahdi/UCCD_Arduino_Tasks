#include<stdio.h>
void main()
{//i is number of row and s is a sapce
//i*2-1 stars num of rows -i spaces
int rows,i,space,star;

printf(" Enter the value of rows:");
scanf(" %d",&rows);

for(i=1;i<= rows;i++)
{
for(space= rows-i;space>=1;space--)
{
printf(" ");

}

for(star=1;star<=i*2-1;star++)
{
printf("*");
}
printf("\n");
}

}