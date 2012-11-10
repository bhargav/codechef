#include <stdio.h>

using namespace std;

int main() {
	int t, n, ak;
	long c, count;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %ld", &n, &c);
		count = 0;
		for(int i = 0; i < n; ++i) {
			scanf("%d", &ak);
			count += ak;
		}
		if (count <= c)
			printf("Yes\n");
		else
			printf("No\n");
	}
}