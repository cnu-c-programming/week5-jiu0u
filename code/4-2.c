#include <stdio.h>
#include <stdlib.h>

void echo() {
	char buf[5];
	fgets(buf, 5, stdin); //null문자 포함
	printf("%s\n", buf);
}


int main() {
	int x = 42;
	echo();
	return 0;
}
