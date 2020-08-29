#include <stdio.h>
#include <math.h>
int main(void) { 
int dim=100;
int n=0,diff=0;
int dia=0,adia=0;
scanf("%d",&n);
int matrix[100][100];
for(int i=0;i<n;i++)
{
   for(int j=0;j<n;j++) 
   {
      scanf("%d ",&matrix[i][j]); 
      
   }
   printf("\n");
}
 for(int i=0;i<n;i++)
    dia+=matrix[i][i];        
for( int i=0;i<n;i++)
        adia+=matrix[i][n-1-i];
    diff=abs(dia-adia);
printf("%d",diff);

return 0;
}   
