#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void B(void);
int a;
int b;
void dummy_init();
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

void dummy21();
void dummy22();
void dummy23();
void dummy24();
void dummy25();
void dummy26();
void dummy27();
void dummy28();
void dummy29();
void dummy30();
void dummy31();
  
void main(void)
{
  dummy_init();
  
  int c;
  srand(time(NULL));
  a = rand()%3; 

  srand(time(NULL));
  b = rand()%2;
  c = rand()%3+1;
  
  if(b == 1){
    //printf("message1\n");
    switch(a)  {
      case(0):
        if(c == 1){
          a = 1;
	  dummy1();
        }
        else if (c == 2){
          a = 2;
	  dummy2();
        }
        else{
          //printf("message2\n");
	  dummy3();
        }
        break;
  	
      case(1):
        if(c == 1){
          a = 2;
	  dummy4();
        }
        else if (c == 2){
          a = 0;
	  dummy5();
        }
        else{
          //printf("message2\n");
	  dummy6();
        }
        break;

      case(2):
        if(c == 1){
          a = 0;
	  dummy7();
        }
        else if (c == 2){
          a = 1;
	  dummy8();
        }
        else{
          //printf("message2\n");
	  dummy9();
        }
        break;

      default:
        //printf("message3\n");
	dummy10();
    }
  }else{
    dummy11();
  }
  
  srand(time(NULL));
  b = rand()%2;
  c = rand()%3+1;

  if(b == 1){
    //printf("message1\n");
    switch(a)  {
      case(0):
        if(c == 1){
          a = 1;
	  dummy21();
        }
        else if (c == 2){
          a = 2;
	  dummy22();
        }
        else{
          //printf("message2\n");
	  dummy23();
        }
        break;
  	
      case(1):
        if(c == 1){
          a = 2;
	  dummy24();
        }
        else if (c == 2){
          a = 0;
	  dummy25();
        }
        else{
          //printf("message2\n");
	  dummy26();
        }
        break;

      case(2):
        if(c == 1){
          a = 0;
	  dummy27();
        }
        else if (c == 2){
          a = 1;
	  dummy28();
        }
        else{
          //printf("message2\n");
	  dummy29();
        }
        break;

      default:
        //printf("message3\n");
	dummy30();
    }
  }else{
    dummy31();
  }
  
}

void dummy_init(){
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

void dummy11(){
}

void dummy21(){
}

void dummy22(){
}

void dummy23(){
}

void dummy24(){
}

void dummy25(){
}

void dummy26(){
}

void dummy27(){
}

void dummy28(){
}

void dummy29(){
}

void dummy30(){
}

void dummy31(){
}
