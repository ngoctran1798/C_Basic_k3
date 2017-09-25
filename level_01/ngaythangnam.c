#include<stdio.h>
#include<math.h>
int main()
{
	int day,month,year;
	printf("nhap ngay: ");
	scanf("%d",&day);
	printf("\nnhap thang: ");
	scanf("%d",&month);
	printf("\nnhap nam : ");
	scanf("%d",&year);
	printf("\n Ngay Thang Nawm: %02d/%02d/%02d",day,month,year%100);
}
