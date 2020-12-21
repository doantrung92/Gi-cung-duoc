#include <stdio.h>
#include <math.h>
int main() {

          float a, b, c, p, s=0;
		  printf("Nhap canh 1: ");
          scanf("%f", &a);
          printf("Nhap canh 2: ");
          scanf("%f", &b);
          printf("Nhap canh 3: ");
          scanf("%f", &c);

          if((a+b>c) && (b+c>a) & (c+a>b)) 
		  {
                   printf("Day la 3 canh cua tam giac");
                   p = (a+b+c)/2;
                   s = sqrt(p*(p-a)*(p-b)*(p-c));
                   printf("\nDien tich cua tam giac la :  %f", s);
          } 
		  else
                   printf("Day khong phai la 3 canh cua tam giac");
}
