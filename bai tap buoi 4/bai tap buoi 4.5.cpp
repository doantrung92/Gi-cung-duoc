#include <stdio.h>
int main (){
	int n, i, s =0;
	printf ("Nhap n=");
	scanf ("%d",&n);
		
	if (n<2){ 
		printf (" n ko la so nguyen to");
		return 0;
	}
	for (i=2;i<n;i++){
		if (n%i==0) s++;
	}
	if (s==0){ 
		printf ("n la so nguyen to");
	}else{
		printf ("n k phai la so nguyen to");
	}
}
