#include <stdio.h>
int main (){
int n1=0, n2=1, n3, x, i;
printf ("Nhap x");
scanf ("%d", &x);

for (i=2;i<=x;i++){
	n3=n1+n2;
	n1=n2;
	n2=n3; //
	}
	printf ("\n%d",n3);
}
