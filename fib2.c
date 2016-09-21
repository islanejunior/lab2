#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int fib(int n){
	if(n==0||n==1){
		return n;
	}
	return fib(n-1)+fib(n-2);
}
int main(int argc, char *argv[]){
	int primeiro = atoi(argv[1]);
	int ultimo = atoi(argv[2]);
	if(primeiro < 0 || ultimo < 0){
		printf("Número negativo inválido!!!\n");
		exit(1);
	}
	int i;
	pid_t pid;
	for(i=primeiro; i<=ultimo; i++){
		pid = fork();
		if(pid == 0){
			printf("%d\n", fib(i-1));			
		}else{
			wait(0);
			exit(0);
		}
		
	}
	return 0;
}