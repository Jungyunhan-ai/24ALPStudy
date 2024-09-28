#include <stdio.h>

#define MAX 100000
#define MAX_NUM 1000000 

int main() {
    int a, b;
    int arr[MAX] = {0}; // 주어진 수열을 저장할 배열
    int exist[MAX_NUM + 1] = {0}; // 주어진 수의 존재 여부를 확인하기 위한 배열 음수 X
    int count = 0; // 쌍의 개수
    
   
    scanf("%d", &a); 
    
   
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    
   
    scanf("%d", &b); 
    
    // 두 수의 합이 b가 되는 쌍을 찾기
    for (int i = 0; i < a; i++) {
        int target = b - arr[i]; // 현재 수와 더해서 b가 되는 값
        
        // target이 1 이상이고, exist 배열에서 target이 이미 존재하는지 확인
        if (target > 0 && target <= MAX_NUM && exist[target]) {
            count++;
        }
        
        // 현재 수를 exist 배열에 기록 (음수 값은 배열에 기록하지 않음)
        if (arr[i] <= MAX_NUM) {
            exist[arr[i]] = 1;
        }
    }
    
   
    printf("%d\n", count);

    return 0;
}
