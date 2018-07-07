#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s[50];
	printf("nhap vao xau:");
	scanf("%s",s);
	int i;
		for (int i = strlen(s) - 1; i >= 0; i--)
		{
			putchar(s[i]);
		}
		getch();
		return 0;
}