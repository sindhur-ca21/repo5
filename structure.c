#include <stdio.h>
struct node {
   int a;
   int b;
   int c;
};
int  main () {
   struct node x; 
   x.a=10;
   x.b=20;
   x.c=30;
   printf("%d %d %d",x.a,x.b,x.c);
   return 0;
}
