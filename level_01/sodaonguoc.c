#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a;
 	printf("Nhap so nguyen :");
	scanf("%d",&a);
 	printf("So nguyen dao nguoc la :%d%d%d",a%10,a/10%10,a/100);
 	getch();
}
