#include <stdio.h>

int main() {
int n,m,a;
int c,d;
scanf("%d %d %d",&n,&m,&a);
if(m%a==0)
  {
    c=m/a;
  }
 else
 {
     c=(m/a)+1;
 }
if(n%a==0)
  {
    d=n/a;
  }
 else
 {
     d=(n/a)+1;
 }
 printf("%d",c*d);
	return 0;
}
