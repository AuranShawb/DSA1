#include <stdio.h>

int main() {
    int n, ans = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char player1, player2;
        scanf(" %c %c", &player1, &player2);

        int score = 0;
        if ((player1 ==  'A' && player2 == 'X')||(player1 == 'B'&& player2 == 'Y')||player1 == 'C'&& player2 == 'Z') {
            score += 3;
        } else if ((player1 == 'A' && player2 == 'Y') ||
                   (player1 == 'B' && player2 == 'Z') ||
                   (player1 == 'C' && player2 == 88)) {
            score += 6;
        }
        if (player2 == 88) {
            ans += score + 1;
        } else if (player2 == 'Y') {
            ans += score + 2;
        } else if (player2 == 'Z') {
            ans += score + 3;
        }
    }

    printf("%d\n", ans);
    return 0;
}
