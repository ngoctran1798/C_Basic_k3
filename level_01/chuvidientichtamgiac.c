#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,C,S,p;
	printf("nhap cac canh tam giac:\n");
	scanf("%f%f%f",&a,&b,&c);
	C= a+b+c;
	printf("\nChu vi cua tam giac la: %0.2f",C);
	p= C/2;
	S= sqrt((p-a)*(p-b)*(p-c)*p);
	printf("\nDien tich cua tam giac la: %0.2f",S);
}
