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
void dummy4();
void dummy5();
void dummy6();
void dummy7();
void dummy8();
void dummy9();
void dummy10();
  
void main(void)
{
  int n;
  srand(time(NULL));
  n = rand()%10+1;
  a = rand()%2+1;
  b = rand()%3;
  for(int i=0; i<n; i++){
    srand(time(NULL));
    a = rand()%2+1;
    B();
  }
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
	  dummy4();
        }
        else if (d == 2){
          a = 0;
	  dummy5();
        }
        else{
          printf("message2\n");
	  dummy6();
        }
        break;

      case(2):
        if(d == 1){
          a = 0;
	  dummy7();
        }
        else if (d == 2){
          a = 1;
	  dummy8();
        }
        else{
          printf("message2\n");
	  dummy9();
        }
        break;

        default:
          printf("message3\n");
	  dummy10();
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

void dummy4(){
}

void dummy5(){
}

void dummy6(){
}

void dummy7(){
}

void dummy8(){
}

void dummy9(){
}

void dummy10(){
}
