#include <iostream>

//a b c
//valid triangle ==> YES
//else ==> NO
int main(int argc, char** argv) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if((a + b > c) && (a + c > b) && (b + c > a)) {
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}
