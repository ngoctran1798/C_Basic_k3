#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	quaylai:	printf("\nMOI CAC BAN CHON TU 1---->4:\n");
	printf("1: tam giac\n");
	printf("2: hinh vuong\n");
	printf("3: hinh chu nhat\n");
	printf("4: hinh tron\n");
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	if(n==1)
		{
			int a,b,c,CV;
			float DT,p;
			printf("nhap canh tam giac:\n");
			scanf("%d%d%d",&a,&b,&c);
			CV=a+b+c;
			p=CV/2;
			printf("chu vi tam giac : %d\n",CV);
			DT=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("dien tich tam giac: %.f",DT);
		
		}
			
	else if(n==2)
		{
			int a,CV,DT;
			printf("nhap canh: \n");
			scanf("%d",&a);
			CV=a*4;
			DT=a*a;
			printf("chu vi: %d\n ",CV);
			printf("dien tich: %d\n",DT);
		}
	else if(n==3)
		{
			int a,b,CV,DT;
			printf("nhap chieu dai va chieu rong:\n");
			scanf("%d%d",&a,&b);
			CV=(a+b)*2;
			DT=a*b;
			printf("chu vi: %d\n",CV);
			printf("dien tich: %d\n",DT);		
		}
	else if (n==4)
		{
			int r;
			float pi=3.14,CV,DT;
			printf("nhap ban kinh:\n");
			scanf("%d",&r);
			CV=2*pi*r;
			DT=pi*r*r;
			printf("chu vi:%0.2f\n",CV);
			printf("dien tich:%0.2f\n",DT);
		}
	else printf("nhap sai roi! moi ban nhap lai\n");
	getch();
	
	
}
