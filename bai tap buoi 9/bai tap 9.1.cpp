#include <stdio.h>
void NhapMang(int a[],int n)
{
  int i;
  for( i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
void XuatMang(int a[],int n)
{
  int i;
  for( i=0;i<n;i++)
    printf("%d",a[i]);
}
int DemPhanTu(int a[],int n,int x)
{
  int i,sum=0;
  for( i=0;i<n;i++)
    if(a[i]==x)
      sum++;
  return sum;
}
int main()
{
  int a[100],n,x;
  do
    {
      printf("Nhap vao so n: ");
      scanf("%d",&n);
    }while(n<=0 || n>100);
  NhapMang(a,n);
  XuatMang(a,n);
  printf("Nhap vao phan tu can tim:");
  scanf("%d",&x);
  x=DemPhanTu(a,n,x);
    printf("Co %d phan tu trong mang",x);
} 
