#include <stdio.h>
#pragma warning(disable:4996)
int solution(int n) {
        int result = 1; // 자기 자신의 경우도 포함 1부터 시작
        for (int i = 1; i <= (n / 2); i++) {  // 15의 경우 7+8이 마지막 경우에 절반까지만 반복
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += j;
                if (sum == n) {
                    result += 1;
                    break;
                }
                else if (sum > n)
                    break;
            }
        }
        return result;
}
int main() {
    int n;
    scanf("%d", &n);

    printf("%d", solution(n));
}
