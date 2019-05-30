#include <stdio.h>

void print_hello1(){

  printf("Hello, world1!\n");

}

void print_hello2(){

  printf("Hello, world2!\n");

}

int main(int argc, char *args[])
{
  int x;

  printf("input x's value\n");
  scanf("%d", &x);

  if(x < 10){
    print_hello1();
  }
  else{
    print_hello2();
  }

  return 0;
}
