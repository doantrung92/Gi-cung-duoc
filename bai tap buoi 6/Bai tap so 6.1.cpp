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
		if(a[i] %2!=0){
			x= a[i];
		}
	}
	if(x==0){
		printf("Mang k co so le");
	}else{
		printf("So le cuoi cung: %d",x);
	}

}

