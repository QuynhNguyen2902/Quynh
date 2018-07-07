#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp,k;
	printf("nhap so nguyen a,b:");
	scanf("%d %d",&a,&b);
	k=a*b;
	while (b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	printf("\n ucln:%d",a);
	printf("\n bcnn:%d",k/a);
	getch();
	return 0;
}

