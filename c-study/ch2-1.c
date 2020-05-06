#include<stdio.h>

int main(){
  char char_value = 'a';
  int int_value = -1;
  float float_value = 0.5;

  printf("char(%d): %c %d\n", sizeof(char), char_value, char_value);
  printf("int(%d): %d\n", sizeof(int), int_value);
  printf("float(%d): %f\n", sizeof(float), float_value);

  return 0;
}
