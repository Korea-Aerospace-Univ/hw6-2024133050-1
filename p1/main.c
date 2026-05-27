#include <stdio.h>

int main() {
    char arr[10];
    char *p = arr;
    char *q = arr;
    
    // 10개의 문자를 공백을 무시하고 배열에 차례대로 입력받음
    for (int i = 0; i < 10; i++) {
        scanf(" %c", (p + i)); 
    }
    
    // 첫 번째 문자를 초기 최댓값으로 설정하고 시작
    char max_char = *p;
    int max_count = 0;
    
    //  외부 루프 p, 내부 루프 q로 이중 포인터 탐색 수행
    for (p = arr; p < arr + 10; p++) {
        int current_count = 0;
        
        // 현재 p가 가리키는 문자가 배열 전체에서 몇 번 나오는지 카운트
        for (q = arr; q < arr + 10; q++) {
            if (*p == *q) {
                current_count++;
            }
        }
        
        // 초과 일 때만 갱신해야 빈도수가 같을 때 
        // 먼저 나타난 문자가 뒤바뀌지 않고 유지됨
        if (current_count > max_count) {
            max_count = current_count;
            max_char = *p;
        }
    }
    
    // 문자 공백 숫자에 맞춰 최종 결과 출력
    printf("%c %d\n", max_char, max_count);
    
    return 0;
}
