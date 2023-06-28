#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#pragma warning(disable:4996)
bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int num = x;

    while (num)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    if (x % sum != 0)
        answer = false;
    return answer;
}
int main() {
    int num;

    scanf("%d", &num);

    if (solution(num) == true)
        printf("true\n");
    else
        printf("false\n");


}