#include <stdio.h>



#define SIZE(arr) sizeof(arr)/sizeof(*arr)



void operacion_array(int *arr,int n){
	
	int i;
	*arr += *(arr+n-1) +10; // ecuacion , no se que hace
}
	
	
	
void printArr(int *arr ,int n){
		
	int i;
	for(i=0;i<n;++i){ //1++ a=1 + 1 , ++1 , a++ , a=1
		printf("%d",arr[i]);    
	}
		
}
		
		
		
int main(int argc, char *argv[]) {
			
	int arr[] = {10,20,30};
	int size = SIZE(arr);
	operacion_array(arr,size);
	printArr(arr,size);
			
	return 0;
}
