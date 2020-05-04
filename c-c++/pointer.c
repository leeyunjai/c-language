#include<stdio.h>

int main(){
  // int, char 변수
  int a = 10;
  char ch = 'h';

  // 포인터 변수
  int * pA = &a;
  char * pCh = &ch;

  printf("a:%d ch:%c *pA:%d *pCh:%c\n", a, ch, *pA, *pCh);
  printf("a size:%lu pA size:%lu\n", sizeof(a), sizeof(pA));
  printf("ch size:%lu pCh size:%lu\n", sizeof(ch), sizeof(pCh));

  return 0;
}

