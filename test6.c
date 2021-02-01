#include <stdio.h>
int main() {
	int i, j;
	char ch = 'A';
	for (i = 0; i < 6; i++) {
		for (j = 0; j <= i; j++) {
			printf("%c", ch++);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main(){
    int i, j;
    char ch;
    printf("Please input an uppercase letter:");
    scanf_s("%c", &ch);
    //getchar();
    
    int length = ch - 'A' + 1;
    for (i = 0; i < length; i++){
        char temp = 'A' - 1;
        for (j = 0; j < (length - i - 1); j++){
            printf(" ");
        }
        for (j = 0; j <= i; j++){
            printf("%c", ++temp);
        }
        for (j = 0; j < i; j++){
            printf("%c", --temp);
        }
        printf("\n");
    }
    return 0;
}
