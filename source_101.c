#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int A(void);
void B(void);
int a;
int b;
void dummy1();
void dummy2();
void dummy3();
  
void main(void)
{
  B();
}

void B(void)
{
  int c, d;
  c = A();
  d = A();

  
  if(b == 1){
    printf("message1\n");
    switch(a)  {
      case(0):
        if(d == 1){
          a = 1;
	  dummy1();
        }
        else if (d == 2){
          a = 2;
	  dummy2();
        }
        else{
          printf("message2\n");
	  dummy3();
        }
        break;
  	
      case(1):
        if(d == 1){
          a = 2;
        }
        else if (d == 2){
          a = 0;
        }
        else{
          printf("message2\n");
        }
        break;

      case(2):
        if(d == 1){
          a = 0;
        }
        else if (d == 2){
          a = 1;
        }
        else{
          printf("messsage2\n");
        }
        break;

        default:
          printf("message3\n");
    }
  }

}

int A(void)
{
  int e;
  srand(time(NULL));
  e = rand()%6+1;
  return e;
}

void dummy1(){
}

void dummy2(){
}

void dummy3(){
}