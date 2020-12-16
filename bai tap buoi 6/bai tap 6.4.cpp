#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=0,max=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			count+=a[i];
			if(count>max){
				max=count;
			}
		}else{
			count=0;
		}
	}
	printf("Tong so duong lien tiep nhieu nhat: %d",max);	
}
