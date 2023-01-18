#include <stdio.h>



// analizar 
void acomodar_array(char arr[]){
	
	char limite = sizeof(arr)/sizeof(arr[0]);
	int i;
	
	for(i=0;i<limite;i++){
		printf("Estos son los valores del array : %d \n",arr[i]);
	}
}
	
	
	
	
	int main(int argc, char *argv[]) {
		
		
		
		char arr[]={'a','b','c','d','e','f','g'};
		acomodar_array(arr);
		
		
		return 0;
	}
