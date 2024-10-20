#include <stdio.h>

char gorb (int c){
	int i=0;
	int n=0;
	char arr[] = "GORB";
	while (i<c){
		n = i % 5;
		printf("%c\n",arr[n]);
		i++;
	}
	return c;
}

int main (void){
	int c = 142;
	printf("%d\n",gorb(c));
	printf("I AM GOOOORB\n");
	return 0;
}
