#include <stdio.h>
#include <string.h>

void sort_strings(char** arr, int size) {
	char* temp;
	for (int i = 0; i < size - 1; i++) { // 반복 횟수 제어
		for (int j = 0; j < size - 1 -i; j++) { //내부 인접요소 비교
			if (strcmp(*(arr+j), *(arr+j+1))>0) { //arr+j가 뒷순서일 때
				temp = *(arr + j);
				*(arr + j) = *(arr + j+1);
				*(arr + j+1) = temp;
			}
		}
	}
}


int main() {

	char* words[] = { "apple", "ant", "banana", "cherry" };
	int size = 4;

	sort_strings(words, size);

	for (int i = 0; i < size; i++) {
		printf("%s\n", words[i]);
	}

	return 0;
}
