#include<stdio.h>
#include<conio.h>
int main()

{
	int h;
	printf("nhap h:");
	scanf("%d",&h);

	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=h-i;j++)
			printf("  ");
        for(int j=1;j<=2*i-1;j++)
            printf("* ");
		printf("\n");
	}
	getch();
	return 0;
}