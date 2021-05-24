#include<stdio.h>
int main()
{
    int div,d,flag=0;
    scanf("%d%d",&div,&d);
	int i,j;
	for(i=div;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			if((j*d)==i)
			{
			    flag=1;
			    printf("quotient is %d \nremainder is %d",j,div-(j*d));
			    break;
			}
		}
		if(flag==1)
		break;
	}
	return 0;
}
