#include <stdio.h>
int main(){
int s = 0;
int i, n;
printf ("Nhap n");
scanf ("%d",&n);

 for (i=1; i <=n; i++){
 		if (i%2!=0)
 		s = s + i;
 		}
 printf ("Tong so le: %d", s);		
 	return 0;
 	
}
