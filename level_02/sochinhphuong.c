#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{	
	int n;
	scanf("%d", &n);
	if( sqrt(n)*sqrt(n)==(int)n)
		printf("day la so chinh phuong");
	else printf("khong phai so chinh phuong");
	getch();
}
