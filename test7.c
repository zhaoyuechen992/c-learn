#include <stdio.h> 
#include<string.h>
int main(void) {
	char string[20] = { 0 };
	char rev_string[20] = { 0 };
	int i, length = 0;
	printf("Please enter the word:");
	scanf_s("%s", string, 19);

	printf("The word you inputed was:");
	printf("%s\n", string);

	length = strlen(string);
	string[length] = '\0';
	for (i = 0; i < length; i++){
		rev_string[i] = string[length - i - 1];
	}
	rev_string[length] = '\0';
	printf("The revert string was:%s\n", rev_string);
	return 0;
}
