#include <stdio.h>

int main(void) {
int n=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    for(int j=n;j>i;j--)
    {
        printf(" ");
    }
    for(int k=0;k<=i;k++)
    {
        printf("#");
    }
    printf("\n");
}
	return 0;
}

