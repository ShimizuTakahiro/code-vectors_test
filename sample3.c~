#include <stdio.h>
int state, out;

void task(int t, int s){
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
	break;
      default:
	s++;
	state = 1;
      }
    }
  }
}

int main(){
  int a,b;
  scanf("%d", &a);
  scanf("%d", &b);
  task(a, b);
  return 0;
}
