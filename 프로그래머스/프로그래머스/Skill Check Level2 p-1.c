#include <stdio.h>
#pragma warning(disable:4996)
int solution(int n) {
        int result = 1; // �ڱ� �ڽ��� ��쵵 ���� 1���� ����
        for (int i = 1; i <= (n / 2); i++) {  // 15�� ��� 7+8�� ������ ��쿡 ���ݱ����� �ݺ�
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
