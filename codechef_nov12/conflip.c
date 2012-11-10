#include <stdio.h>

int main() {
	int t, g, start, count;
	long n;
	scanf("%d\n", &t);
	while(t--) {
		scanf("%d\n", &g);
		while(g--) {
			scanf("%d %ld %d\n", &start, &n, &count);
			printf("%ld\n", (n >> 1) + (n & 1) * (start - 1 ^ count - 1));	
		}
	}
}