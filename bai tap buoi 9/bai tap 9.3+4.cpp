#include <stdio.h>
int ucln(int a,int b){
    if (a%b!=0)
        return ucln(b,a%b);
    else
        return b;
}

int bcnn(int a,int b){
    return (a*b)/ucln(a,b);
}

int main(){
    int a,b,ucln,bcnn;
    printf("Nhap (a,b): ");
    scanf("%d%d",&a,&b);
    ucln = uclb(a,b);
    printf("UCLN(%d,%d)=%d\n",a,b,ucln);
    bcnn = bcnn(a,b);
    printf("BCNN(%d,%d)=%d\n",a,b,bcnn);
}
