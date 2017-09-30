
#include<stdio.h>
#include<math.h>
int main()
{
	float n;
	scanf("%f",&n);
	if ((n-0.5)==(int)n)
		printf("%.2f chinh la so ban nguyen",n);
	else 
		printf("%.2f khong phai la so ban nguyen",n);
}
