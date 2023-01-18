#include <stdio.h>





int main(int argc, char *argv[]) {
	
	char p;
	char buf[10]={1,2,3,4,5,6,9,8};
	
	p=(buf+2)[5];
	printf("%d \n",p);
	
	
	return 0;
}
