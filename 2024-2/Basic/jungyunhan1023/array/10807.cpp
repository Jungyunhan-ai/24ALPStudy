#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
 
    int arr[N]; //크기가 N인 정수 배열 arr 선언
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]); 
    }
 
    int v;
    scanf("%d", &v);
 
    int count = 0; //v의 등장 횟수를 저장하는 변수 
    for(int j=0; j<N; j++){ 
        if(arr[j]==v) //해당 요소가 V와 같으면 1씩 증가
            count++;
    }
    printf("%d\n", count);
}
