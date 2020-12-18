#include <stdio.h>
bool timkiem(int x,int a[],int n){
	for (int i=0;i<n;i++){
		if (x==a[i])
			return true;
	}
}
int insole (int a[],int n){
	for (int i=0;i<n;i++){
		if (a[i])%2!=0){
			printf ("%d",a[i]);
		}
	}

