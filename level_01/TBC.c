#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,TBC;
	printf("nhap lan luot 3 so a,b,c : \n");
	scanf("%f\n%f\n%f",&a,&b,&c);
	TBC=(a+b+c)/3;
	printf("trung binh cong 3 so a,b,c la:%0.3f",TBC);
}
