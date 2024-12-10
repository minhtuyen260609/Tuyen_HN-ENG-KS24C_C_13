#include<stdio.h>
int uoc(int a, int b);

int mani(){
	int num1, num2; 
	printf("Moi ban nhap so thu nhat: ");
	scanf("%d", &num1);
	printf("Moi ban nhap so thu hai: ");
	scanf("%d", &num2);
	int UCLN=uoc(num1, num2);
	printf("Uoc chung lon nhat la: %d", uoc);
	return 0;
}

int uoc(int a, int b){
	int min=0;
	if(a>b){
		min=b;
	}else{
		min=a;
	}
	int UCLN=1;
	for(int i=1;i<=min;i++){
		UCLN=i;
	}
}
