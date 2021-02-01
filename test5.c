#include <stdio.h> 
int main() {
	char let = 'F';
	char start;
	char end;
	for (end = let; end >= 'A'; end--) {
		for (start = let; start >= end; start--) {
			printf("%c", start);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main() {
	int i,j;
	char ch = '$';
	for (i = 0; i < 5; i++) {
		for (j = 0; j <= i; j++) {
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
