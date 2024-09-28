#include <stdio.h>
 
int main() {
    int a, b, c;
    int num[10] = { 0 };
    scanf("%d %d %d", &a, &b, &c);
    int result = a * b * c;
    
    while (result > 0) {
        num[result % 10]++; //맨 마지막 머리 뽑아내기 예) 123이면 3이 된다 해당 자릿수의 카운트 하나 추가 
        result /= 10; //다음 자릿수로 넘어가기
    }
 
    for (int i = 0; i < 10; i++) { //0부터 9까지 순서대로 출력 
        printf("%d\n", num[i]);
    }
    return 0;
}
