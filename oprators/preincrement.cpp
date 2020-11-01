//C++ program to illustrate preincrement and predecrement
#include<cstdio>

int main()
{
  int a = 10;
   //works
  printf("a = %d\n",a);
  ++a = a;
  printf("a = %d\n",a);
  ++a = 20;
  printf("a = %d\n",a);
  --a = a;
  printf("a = %d\n",a);


  //doesn't works - compilation error
 //printf("a = %d\n",a);
 //a++ = a;
 //printf("a = %d\n",a);
 //a++ = 20;
 //printf("a = %d\n",a);
 //a-- = a;
//printf("a = %d\n",a);

  getchar();

  return 0;
}
