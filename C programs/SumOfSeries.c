//Find S,S=1+2+3+----+n
#include <stdio.h>
int main() {
    int n,s=0;
	printf("Enter the number of series\n");
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		s = s + i;
	}
	printf("S=1+2+3+----+n is %d",s);
    return 0;
}
