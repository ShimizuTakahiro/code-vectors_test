#include <stdio.h>
int state, out;

void task(){
  int s,t;
  scanf("%d", &s);
  scanf("%d", &t);
  if(t == 1){
    s++;
    if(s < 10){
      switch(state){
      case 1:
	out = s;
	break;
      case 2:
	out = 0;
	state = 3;
	printf("state changed\n");
	break;
      default:
	s++;
	state = 1;
	printf("state changed\n");
      }
    }
  }
}

int main(){
  task();
  return 0;
}
