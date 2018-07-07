#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[50];
	printf("nhap chuoi ki tu:");
	gets(s);


	int chuhoa=0,chuthuong=0;
	for(int i=0;i<=strlen(s);i++)
	{
		if(islower(s[i]))
			chuthuong++;
	}
		printf("ki tu chu thuong: %d",+chuthuong);
   for(int i=0;i<=strlen(s);i++)
    {
		if(isupper(s[i]))
			chuhoa++;
    }
		printf("\n so ki tu chu hoa:%d",+chuhoa);
		
		getch();
		return 0;
}
