#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
	int x,f;
	do{
		f=0;
		scanf ("%d",&x);
		for (int j=0;j<i;j++){
			if (x==a[j]){
				f=1;
				break;
			}
		}		
	}while(f==1);
	a[i]=x;
}
	for (int i=0;i<n;i++){
	printf ("%d",a[i]);
	printf ("Mang sau khi nhap");
	}
}
