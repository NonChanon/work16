#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int getUpper(char* str) {
	int i = 0;
	int count = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			count++;
		}
		i++;
	}
	return count;
}
int getLower(char* str) {
	int i = 0;
	int count = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z') {
			count++;
		}
		i++;
	}
	return count;
}

int main() {
	int count = 0;
	char str[100];
	scanf("%s", str);
	printf("Upper : %d", getUpper(str));
	printf("\nLower : %d", getLower(str));
}
