#include <stdio.h>

int main(void) {
int n=0,max;
int count=0;
int arr[100];
scanf("%d",&n);
 max=arr[0];
for(int c=0; c<n;c++){
    scanf("%d ",arr+c);
    
    if(arr[c]>max){
        max=arr[c];
    }
    else{
        max=arr[0];
    }
    if(arr[c]==max){
        count++;
    }
    else
    {
        count+=0;
    }
    
}

printf("%d",max);
  printf("%d",count);

	return 0;
}

