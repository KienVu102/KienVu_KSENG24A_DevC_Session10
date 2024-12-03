#include <stdio.h> 

int main(){
	int arr[5]={11,21,31,41,51}, n, count=0;
	for(int i=0; i<5; i++){
		printf("%d ", arr[i]);
	}
	printf("\nBan hay nhap 1 phan tu: ");
	scanf("%d", &n);
	for(int i= 0; i<=5; i++){
		if(n==arr[i]){
			count=1;
			printf("Vtri phan tu trong mang la: %d", i); 
		} 
	} 
	if(count!=1){
		printf("Phan tu nay khong co trong mang"); 
	} 
	
	return 0; 
} 
