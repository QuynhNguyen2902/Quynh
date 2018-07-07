#include<stdio.h>
#include<conio.h>
int main()
{
	int N, a,b,c,temp;
	printf("nhap N:");
	scanf("%d",&N);
	if(N<100||N>999)
	{
    printf("Khong hop le!!!");
	getch();
	return 0;
}
	else{
		c=N%10;
		N/=10;
		b=N%10;
		a=N/10;
	
	if(a<b)
		{
			temp=a, a=b, b=temp;
	}
	if(a<c)
		{
			temp=a, a=c, c=temp;
	}
	if(b<c)
		{
			temp=b, b=c, c=temp;
	}
	printf("giam dan: %d%d%d",a,b,c);
	getch();
	return 0;
	}
}
