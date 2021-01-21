#include <stdio.h>
int main(void)
{
	char first_name[40];
	char last_name[40];
	int first_name_length = 0;
	int last_name_lenght = 0;
	printf("What's your first name:");
	scanf_s("%s", first_name);

	printf("What's your last name:");
	scanf_s("%s", last_name);

	//getchar();

	first_name_length = strlen(first_name);
	last_name_lenght = strlen(last_name);

	printf("a.\"%s,%s\"\n", first_name, last_name);
	printf("b.\"%20s,%20s\"\n", first_name, last_name);
	printf("c.\"%-20s,%-20s\"\n", first_name, last_name);
	printf("d.%*s,%*s\n", first_name_length + 3, first_name, last_name_lenght + 3, last_name);//第一个和第三个参数必须是整数

	return 0;
}
