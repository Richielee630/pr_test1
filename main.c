#include <stdio.h>
#include <stdint.h>
#include <string.h>

void printline (char* str){
	if(strlen(str) == 0){
		return;
	}
	printf("%s", str);
}

void main(){
	char* str = "hello world";
	printline(str);
}
