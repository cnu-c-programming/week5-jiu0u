#include <stdio.h>


int main() {
	int x = 10;
	int y = 20;

	printf("%d\n", x);

	int* const ptr = &x; //x를 가리키는 포인터 (포인터 주소 변경x)

	*ptr = y; //포인터를 사용해 x의 값을 y로 바꿈

	printf("%d\n", x);

	return 0;
}
