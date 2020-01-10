#include <stdio.h>
int state, out;

void dummy1(){
}
void dummy2(){
}
void dummy3(){
}
void dummy4(){
}
void dummy5(){
}

void task(){
  int s,t;
  scanf("%d", &s);
  scanf("%d", &t);
  if(t == 1){
    dummy1();
    s++;
    if(s < 10){
      dummy2();
      switch(state){
      case 1:
	dummy3();
	out = s;
	break;
      case 2:
	dummy4();
	out = 0;
	state = 3;
	printf("state changed\n");
	break;
      default:
	dummy5();
	s++;
	state = 1;
	printf("state changed\n");
      }
    }
  }
}

int main(){
  scanf("%d", &state);
  task();
  return 0;
}
