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
void dummy11();
void dummy12();
void dummy13();
void dummy14();
void dummy15();
void dummy16();
void dummy17();
void dummy18();
void dummy19();
void dummy20();
  
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
          printf("messsage2\n");
	  dummy9();
        }
        break;

        default:
          printf("message3\n");
	  dummy10();
    }
  }

  c = A();
  d = A();

  
  if(b == 1){
    printf("message1\n");
    switch(a)  {
      case(0):
        if(d == 1){
          a = 1;
	  dummy11();
        }
        else if (d == 2){
          a = 2;
	  dummy12();
        }
        else{
          printf("message2\n");
	  dummy13();
        }
        break;
  	
      case(1):
        if(d == 1){
          a = 2;
	  dummy14();
        }
        else if (d == 2){
          a = 0;
	  dummy15();
        }
        else{
          printf("message2\n");
	  dummy16();
        }
        break;

      case(2):
        if(d == 1){
          a = 0;
	  dummy17();
        }
        else if (d == 2){
          a = 1;
	  dummy18();
        }
        else{
          printf("messsage2\n");
	  dummy19();
        }
        break;

        default:
          printf("message3\n");
	  dummy20();
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
