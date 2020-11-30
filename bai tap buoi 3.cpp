#include <stdio.h>
int main (){
float x;
printf ("Tien nop vao: ");
scanf ("%f", &x);

x = x + (x*8/100);
x = x + (x*8/100);
x = x + (x*8/100);
x = x + (x*8/100);

printf ("Lai sau 4 nam: %.2f", x);	

}
