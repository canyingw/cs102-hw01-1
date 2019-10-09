#include <stdio.h>
#include <stdlib.h>
void print_operation(char op, float x, float y);

int main(int argc, char const *argv[])
{
    float result = 0；
  switch (op)
   {
    case '+' : result = x + y;
    break;
    case '-' : result = x - y;
    break;
    case '*' : result = x * y;
    break;
    case '/' : result = x / y;
    break;
    default :
    printf("Error: unrecognized operator %c\n, op");
  }
  printf("%f\n",result);
    return 0;
    }
