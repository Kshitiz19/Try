#include <stdio.h>
#include <string.h>

void fun(char *arr) {
	int i;
	int *j;
	unsigned int n = sizeof(arr);
	unsigned int k = sizeof(j);
	printf("%u\n", n);
	printf("%u\n", k);
	for(i=0;i<n;i++) {
		printf("%c ", arr[i]);
	}
}

int main() {
	char arr[] = {'g', 'e', 'e', 'k', 's'};
	int i;
	unsigned int n = sizeof(arr);
	printf("%d\n", n);
	for(i=0;i<n;i++) {
		printf("%c ", arr[i]);
	}
	printf("\n");
	fun(arr);
	printf("\n");
	return 0;
}