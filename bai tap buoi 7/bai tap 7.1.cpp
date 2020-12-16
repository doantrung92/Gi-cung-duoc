#include <stdio.h>
int main(){
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	int b;
	printf ("Nhap b:");
	scanf ("%d",&b);
	int m=b;
	for (int i=0;i<n;i++){
		if (a[i]<b){
			m=a[i];
		}
	}
	if (m==b){
		printf ("mang bao gom cac so lon hon %d",b);
	}else{
		for (int i=0;i<n;i++){
			if (a[i]<b && a[i]>m){
				m=a[i];
			}
		printf ("tiem can duoi:%d",m);		
	}
}
