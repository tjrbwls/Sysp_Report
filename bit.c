#include <stdio.h>
#include <string.h>

void my_htob(char c) {
	int n = (int)c - 48; 
	int m = (int)c - 48; 
	int o = (int)c - 48; 

	int aa[4] = { 0, }; 
	int bb[3] = { 0, }; 
	int cc[9] = { 0, };  

	if (n > 9)
	{
		n -= 7;
	}

	if (m > 9)
	{
		m -= 7;														}

	if (o > 9)
	{
		o -= 7;
	}

	for (int i = 0; i < 4; i++)
	{
		aa[i] = (n % 2);
		n /= 2;
	}


	for (int i = 0; i < 3; i++)
	{
		bb[i] = (m % 2);
		m /= 2;
	}



	for (int i = 0; i < 9; i++)
	{
		cc[i] = (o % 2);
		o /= 2;
	}

	printf("4비트 : 3비트 : 9비트\n");

	for (int i = 3; i >= 0; i--)
	{
		printf("%d", aa[i]);
	}
	printf(" : ");

	for (int i = 2; i >= 0; i--)
	{
		printf("%d", bb[i]);
	}
	printf(" : ");

	for (int i = 8; i >= 0; i--)
	{
		printf("%d", cc[i]);
	}

	printf("\n");
}

int main() {
	char arr[50001]; 

	printf("입력 (16진수) : ");
	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++)
	{
		my_htob(arr[i]);
	}


	return 0;
}
