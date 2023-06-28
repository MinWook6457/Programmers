#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    if (n == 0)
        return 0;
    else
        return n % 10 + solution(n / 10);
    return answer;
}
int main() {
    int num;
    scanf("%d", &num);

    int sum = 0;
    sum = solution(num);

    printf("%d", sum);
    return 0;
}