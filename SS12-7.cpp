#include<stdio.h>
void mang(int a, int b); 

int main(){
	int rows, cols; 
	
	do{
		printf("Moi nhap so hang: ");
		scanf("%d", &rows); 
	} while(rows<0);
	do{
		printf("Moi nhap so cot: ");
		scanf("%d", &cols); 
	} while(cols<0);
	int arr[rows][cols];
	mang(rows, cols);
	
	return 0; 
} 

void mang( int a, int b){
	int arr[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("arr[%d][%d]= ", i,j);
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("  %d  ", arr[i][j]);
		}
		printf("\n");
	}
}
