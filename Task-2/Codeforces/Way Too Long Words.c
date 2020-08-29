#include <stdio.h>
#include <string.h>

int main(void) {
	int n=0;
	char str[100];
	scanf("%d",&n);
	while(n>0)
	{
	    scanf("%s\n",str);
	    if(strlen(str)>10)
	    {
	        printf("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);
	    }
	    else
	    {
	       printf("%s\n",str); 
	    }
	    n--;
	}
	return 0;
}

