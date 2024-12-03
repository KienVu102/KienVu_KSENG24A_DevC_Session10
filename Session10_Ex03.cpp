#include <stdio.h>

int main(){
	int arr[5] = {10,2,24,39,11};
	printf("Cac so chua duoc sap xep la: ");
	for(int i=0; i<5; i++){
		printf("%d ", arr[i]);
	}
	for(int i = 0; i < 5; i++){
		int key = arr[i];
		int j = i - 1;
		while(j >=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;	
	}
	printf("\nCac so da duoc sap xep lai la: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
	

