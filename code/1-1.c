#include <stdio.h>


void double_elements(int array[], int size) {
	for (int i = 0; i < size; i++) {
		int* p = array;
		 *(p+i) = *(p+i) *2;
		 printf("i : %d\n", i);
	}
}

int main() {
	int arr[5];

	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	double_elements(arr, 5);
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
