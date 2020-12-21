#include <stdio.h>
#include <string.h>
void upperCase (char s[]){
	int count;
	count=strlen(s);
	for (int i=0;i<count;i++){
		if (s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
	}		
}

int main (){
	char str[100];
	printf ("Nhap chuoi: ");
	scanf ("%[^\n]",str);
	upperCase(str);
	printf ("upperCase: %s", str);
	}

