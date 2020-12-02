#include <stdio.h>
int main(){
float s;
s = 0;
int n;
printf ("nhap n=");
scanf ("%d",&n);

 for (int i=1; i <=n; i++){
 		s = s + 1/float(i);
 		}
 		printf ("s = %f",s);
	
 	return 0;
}
