#include <stdio.h>
int check(int xa,int ya,int xb,int yb);
int main()
{
	int queen[8]={0};
	int a,b,c,d,e,f,g,h,i;
	int num=0;
	printf("The possible configuration of 8 queens are:\n");
	for(a=1;a<=8;a++)
	   for(b=1;b<=8;b++)
	      for(c=1;c<=8;c++)
	         for(d=1;d<=8;d++)
	            for(e=1;e<=8;e++)
	               for(f=1;f<=8;f++)
	                  for(g=1;g<=8;g++)
	                     for(h=1;h<=8;h++)
	                        {
	                        	if(check(1,a,2,b)+check(1,a,3,c)+check(1,a,4,d)+check(1,a,5,e)+check(1,a,6,f)+check(1,a,7,g)+check(1,a,8,h)+check(2,b,3,c)+check(2,b,4,d)+check(2,b,5,e)+check(2,b,6,f)+check(2,b,7,g)+check(2,b,8,h)+check(3,c,4,d)+check(3,c,5,e)+check(3,c,6,f)+check(3,c,7,g)+check(3,c,8,h)+check(4,d,5,e)+check(4,d,6,f)+check(4,d,7,g)+check(4,d,8,h)+check(5,e,6,f)+check(5,e,7,g)+check(5,e,8,h)+check(6,f,7,g)+check(6,f,8,h)+check(7,g,8,h)==0)
	                        	{
	                        		++num;
	                        		queen[0]=a;
	                        		queen[1]=b;
	                        		queen[2]=c;
	                        		queen[3]=d;
	                        		queen[4]=e;
	                        		queen[5]=f;
	                        		queen[6]=g;
	                        		queen[7]=h;
	                        		if((num-1)%3==0)
	                        		    printf("\n   [%2d]:",num);
	                        		else
	                        		printf("  [%2d]:",num);
	                        		for(i=0;i<8;i++)
	                        		printf(" %d",queen[i]);
								}
							}
}
int check(int xa,int ya,int xb,int yb)
{
	int ret;
	ret=1;
	if(ya!=yb&&((ya-yb)!=(xa-xb))&&((ya-yb)!=(xb-xa)))
	ret=0;
	return ret;
}
