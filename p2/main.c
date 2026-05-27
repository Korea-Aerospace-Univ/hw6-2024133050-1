#include <stdio.h>

int main() {
    int N;
    int arr1[20];
    int arr2[20];
    
    // 입력받을 원소의 개수 N 저장 (1 <= N <= 20)
    scanf("%d", &N);
    
    int *p = arr1;
    int *q = arr2;
    
    // 첫 번째 배열 데이터 입력 (포인터 주소 연산 사용)
    for (int i = 0; i < N; i++) {
        scanf("%d", (p + i));
    }
    
    // 두 번째 배열 데이터 입력
    for (int i = 0; i < N; i++) {
        scanf("%d", (q + i));
    }
    
    // 역방향 매칭 연산 및 출력
    // i가 증가할 때 p는 정방향(0부터), q는 역방향(N-1부터)으로 접근
    for (int i = 0; i < N; i++) {
        int sum = *(p + i) + *(q + (N - 1 - i));
        
        // 예시 출력과 동일하게 숫자 앞에 공백을 먼저 배치 (" %d")
        printf(" %d", sum);
    }
    printf("\n");
    
    return 0;
}
