#include <stdio.h>

int main() {
    int count[10] = { 0 };
    int i,n, max;

    scanf("%d", &n);

    while (n> 0) {
        count[n % 10]++; //먼저 0~9까지의 정수 개수를 구하기 위해 배열을 선언
        N /= 10;
    }
    count[6] = (count[6] + count[9] + 1) / 2; //6과 9는 서로 사용가능하기 때문

    max = 0;
    for (i = 0; i < 9; i++) {
        if (max < count[i]) max = count[i]; //개수 범위의 최솟값은 0이므로 처음 변수를 0으로 
        //설정한 후 최대값을 구하기
    }

    printf("%d", max);

    return 0;
}
 
