#include <stdio.h>

int main(){
	int arr[5]={4,5,2,1,8};
	for(int i=0; i<5; i++){
		for(int j=0; j<5-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i=0; i<5; i++){
		printf("%d \t", arr[i]);
	}
	
	
	return 0;
}
