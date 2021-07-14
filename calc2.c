#include <stdlib.h>
#include "calc.c"


extern void push(IntStack * stk, int num)
{
  IntLink * ptr;
  ptr       = (IntLink *) malloc( sizeof(IntLink));  
  ptr–>i    = num;                /*  PUSHPOP2  statement */
  ptr–>next = stk–>top;
  stk–>top  = ptr;

}

extern int pop(IntStack * stk)
{
  IntLink * ptr;
  int num;
  ptr      = stk–>top;
  num      = ptr–>i;
  stk–>top = ptr–>next;
  free(ptr);
  return num;
}