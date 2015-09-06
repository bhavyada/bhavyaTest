#include <stdio.h>

struct stacknode {
   int value;
   int prev;
};

struct stacknode stacklist[50];
int top[3] = {-1, -1, -1};
int freelist[50];
int stackindex=0;
int freeindex=-1;

void push(int stackno, int value) {
   int index;
   if(freeindex >= 0) {
     index = freelist[freeindex];
     freeindex--;
   } else {
     index = stackindex;
     stackindex++;
   }
   stacklist[index].value = value;
   if(top[stackno-1] != -1) {
     stacklist[index].prev = top[stackno-1];
   } else {
     stacklist[index].prev = -1;
   }
   top[stackno-1] = index;
   printf("%d is pushed in stack %d at %d\n", value, stackno, index);
}

int pop(int stackno) {
   int index, value;
   if(top[stackno-1] == -1) {
     printf("No elements in the stack %d\n",stackno);
     return -1;
   }
   index = top[stackno-1];
   freeindex++;
   freelist[freeindex] = index;
   value = stacklist[index].value;
   top[stackno-1] = stacklist[index].prev;
   printf("%d is popped put from stack %d at %d\n", value, stackno, index);
   return value;
}

int main() {
   push(1,1);
   push(1,2);
   push(3,3);
   push(2,4);
   pop(3);
   pop(3);
   push(3,3);
   push(2,3);
   return 0;
}
