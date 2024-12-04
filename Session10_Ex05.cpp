#include <stdio.h>

int main(){
	int arr[10]={3,1,6,4,8,9,2,5,0,7};
	int num;
	int index=0;
	printf("Moi ban nhap vao mot so (1-10) de tim kiem vi tri\t");
	scanf("%d",&num);
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<n; i++){
		if(arr[i]==num){
			index=i;
		}
}
	printf("\nVi tri cua phan tu %d trong mang la: %d",num,index);
	
}
