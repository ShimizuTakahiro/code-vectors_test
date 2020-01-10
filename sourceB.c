#include <stdio.h>
int state, out;

int input_state(){
  int in;
  scanf("%d", &in);
  return in;
}
int input_s(){
  int in;
  scanf("%d", &in);
  return in;
}
int input_t(){
  int in;
  scanf("%d", &in);
  return in;
}

void task(){
  int s,t;
  s = input_s();
  t = input_t();
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
  state = input_state();
  task();
  return 0;
}
