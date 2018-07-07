#include<conio.h>
#include<stdio.h>
int main(){
	int m;
	float i,j,tien;
	printf("nhap m:");
	scanf("%d",&m);
	
	if(m<=1000&&m>0){
		printf("so tien phai tra: 10000");
		
	}
	if(m>1000&&m<30000){
		i=(float)1500/200;
		j=(float)(1500*1000)/200;
		tien=10000+i*(m-1000);
		printf("%.f",tien);
	}
	if(m>=30000){
		j=(float)(j+8000)/1000;
		tien=10000+29000*i+(30000-m)*j;
		printf("%.f",tien);
	}
	getch();
}