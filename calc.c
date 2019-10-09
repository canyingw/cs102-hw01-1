#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{
    double x , y;
    char* x_string = argv[2];
    x = atof(x_string);
    char* y_string = argv[3];
    y = atof(y_string);
    char operator = argv[1][0] ;
    double result;
  switch (operator)
   {
    case '+' : result = x + y;
    break;
    case '-' : result = x - y;
    break;
    case '*' : result = x * y;
    break;
    case '/' : result = x / y;
    break;
    default: result = 0;
    printf("Error: unrecognized operator %c\n", operator);
  }
  printf("%f\n",result);
    return 0;
    }
