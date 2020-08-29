#include <stdio.h>

int main(void) {
int alice[3],bob[3];
int walice=0,wbob=0;
for(int a=0; a<=2; a++)
{
    scanf("%d ",alice+a);
}
printf("\n");
for(int b=0; b<=2; b++)
{
    scanf("%d ",bob+b);
}
for(int i=0; i<=2;i++)
{
    if(alice[i]>bob[i])
    {
        walice++;
    }
    else if(alice[i]<bob[i])
    {
        wbob++;
    }
   
}
printf("%d %d",walice,wbob);
	return 0;
}
