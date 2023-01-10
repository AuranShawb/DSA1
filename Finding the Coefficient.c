#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int p2, d;
        scanf("%d %d", &p2, &d);
        int j = p2>>d;
        if ((p2 >> d) & 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
