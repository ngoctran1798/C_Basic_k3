#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double a,b,c,delta,xa,xb,x1,x2,x3,x4;
    printf("nhap a,b,c:");
    scanf ("%f\n%f\n%f",&a,&b,&c);
    delta = (b*b) - (4*a*c);
	if ( a != 0 && b != 0 && c == 0 )
	{
    	if ( (-b/a) > 0 )
	    {
	        printf("x = 0");
	        printf("x1 = %0.2f\n",+sqrt(-b/a));
	        printf("x1 = %0.2f\n",-sqrt(-b/a));
	    }
    	else printf("x = 0\n");
	}
	else if ( a != 0 && b == 0 && c != 0 )
		{
    	if ( (-c/a) > 0 )
	    {
	        printf("x1 = %0.2f\n",+sqrt(sqrt(-c/a)));
	        printf("x1 = %0.2\n",-sqrt(sqrt(-c/a)));
	    }
    	else printf("Pt vo nghiem\n");
		}
	else if ( a == 0 && b != 0 && c != 0 )
		{		
    	if ( (-c/b) > 0 )
    	{
        	printf("x1 = %0.2f\n",+sqrt(-c/b));
        	printf("x1 = %0.2f\n",-sqrt(-c/b));
    	}
    	else printf("Pt vo nghiem\n");
	}
	else if ( a == 0 && b == 0 && c == 0 )
		{
	    	printf("Pt luon dung voi moi x\n");	
		}
	else if ( a == 0 && b == 0 && c != 0 )
		{
	    	printf("Pt vo nghiem\n");
		}
	else if ( (a == 0 && b != 0 && c == 0) || (a != 0 && b == 0 && c == 0) )
		{
	    	printf("x = 0\n");
		}
	else if( a != 0 && b != 0 && c != 0)
		{
    	if( delta > 0 )
    	{
        	xa = (-b + sqrt(delta))/(2*a);
        	xb = (-b - sqrt(delta))/(2*a);
        	if     ( xa >  0 && xb  > 0 )
        	{
            	printf("x1 = %0.2f\n",+sqrt(xa));
            	printf("x2 = %0.2f\n",-sqrt(xa));                      
            	printf("x3 = %0.2f\n",+sqrt(xb));
            	printf("x4 = %0.2f\n",-sqrt(xb));
        	}
 				else if( xa >  0 && xb == 0 )
        		{
            		printf("x1 = %0.2f\n",+sqrt(xa));
            		printf("x2 = %0.2f\n",-sqrt(xa));
            		printf("x3 = 0\n");
        		}
 					else if( xa == 0 && xb  > 0 )
        			{
           	 			printf("x1 = %0.2f\n",+sqrt(xb));
            			printf("x2 = %0.2f\n",-sqrt(xb));
            			printf("x3 = 0\n");
        			}
 							else if( xa >  0 && xb  < 0 )
        					{
            					printf("x1 = %0.2f\n",+sqrt(xa));
            					printf("x2 = %0.2f\n",-sqrt(xa));
        					}
 									else if( xa <  0 && xb  > 0 )
        							{
            							printf("x1 = %0.2f\n",+sqrt(xb));
            							printf("x2 = %0.2f\n",-sqrt(xb));
        							}
 				        				else if( xa == 0 && xb == 0 )
        								{
            								printf("x = 0\n");
       									}
 											else if( xa <  0 && xb  < 0 )
									        {
									            printf("Pt vo nghiem\n");
									        }
    }
    else if( delta == 0 )
    	{
        xa = -b / (2*a);
        	if     ( xa >  0 )
	        {
	            printf("x1 = %0.2f\n",+sqrt(xa));
	            printf("x2 = %0.2f\n",-sqrt(xa));
	        }
        		else if( xa == 0 )
		        {
		            printf("x = 0\n");
		        }
			        else if( xa <  0 )
			        {
			            printf("Pt vo nghiem\n");
			        }
		}
	    	else if( delta < 0 )
	    {
	        printf("Pt vo nghiem\n");
	    }
	}
}
