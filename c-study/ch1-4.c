#include<stdio.h>

int main(){
// (1)
  int i;
  int num;

// (2)
  while(1){
// (3)
    printf("2-9까지 중 하나의 숫자를 입력하세요(0은 나가기):");
    scanf("%d", &num);    
// (4)
    if(num == 0){
      printf("수고하셨습니다\n");
      break;
    }

// (5)
    for(i = 1; i < 10; i++){
      printf("%d x %d = %d\n", num, i, num*i);
    }
  }
  return 0;
}
