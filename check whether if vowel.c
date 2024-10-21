#include<stdio.h>
int main()
{
	char alpha;
	int z;
	printf("Enter an alphabet:");
	scanf("%c",&alpha);
	z=alpha;
	switch(z)
	{
		case 97:printf("It is a vowel.");break;
		case 101:printf("It is a vowel.");break;
		case 105:printf("It is a vowel.");break;
		case 111:printf("It is a vowel.");break;
		case 117:printf("It is a vowel.");break;
		case 65:printf("It is a vowel.");break;
		case 69:printf("It is a vowel.");break;
		case 73:printf("It is a vowel.");break;
		case 79:printf("It is a vowel.");break;
		case 85:printf("It is a vowel.");break;
		default:printf("It is a consonant.");break;
	}
	return 0;
}
