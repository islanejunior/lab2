#include <stdio.h>
#include <stdlib.h>
int fib(int n){
	if(n==0||n==1){
		return n;
	}
	return fib(n-1)+fib(n-2);
}
int main(int argc, char *argv[]){
	int primeiro = atoi(argv[1]);
	int ultimo = atoi(argv[2]);
	int i;
	for(i=primeiro; i<=ultimo; i++){
		printf("%d\n", fib(i-1));
	}
	return 0;
}

//primeiro questão
