#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}
int x=0;
for(int i=0;i<n;i++){
	if(a[i]>0){
		x= a[i];
		break;		}
	}
	if(x==0){
		printf("k co so duong");
	}else{
		for(int i=0;i<n;i++){
			if(a[i]>0 && a[i]<x){
				x= a[i];
			}
		}
		printf("So duong nho nhat: %d",x);
	}
}
