#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#define BUF_SIZE 64

using namespace std;

// 우선순위, 데이터
struct st_node{
  int priority;
  char * data;
};

// 비교함수
struct comp{
  bool operator()(struct st_node &x, struct st_node &y){
    return x.priority > y.priority;
  }
};

// Priority Queue
priority_queue<struct st_node, vector<struct st_node>, comp> q;

void func_push(int prio, const char * data){
  char *ptr;
  struct st_node tmp;

  ptr = (char *)malloc(BUF_SIZE);
  memset(ptr, 0, BUF_SIZE);
  memcpy(ptr, data, BUF_SIZE);
  tmp.data = ptr;
  tmp.priority = prio;
  q.push(tmp);
}

int main(int argc, char* argv[]){
  func_push(1, "AAA");
  func_push(3, "CCC");
  func_push(2, "BBB");

  printf("PoP Run\n");
  for(;;){
    printf("(%d): %s\n", q.top().priority, q.top().data);
    free(q.top().data); // 해당 코드에서는 문제가 없으나, 동적할당의 경우는 필요!
    q.pop();
    if(q.empty())
      break;
  }
  return 0;
}
