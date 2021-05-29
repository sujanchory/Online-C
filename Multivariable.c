#include<stdio.h>
int main()
{
  int var_int;
  float var_float;
  char var_char;
  double var_double;
  printf("enter the input value for multiple variable:");
  scanf("%d%d%f",var_int ,&var_float);
  scanf("%c%lf",&var_char,&var_double);
  printf("the output values are:");
  printf("%d%f",var_int,var_float);
  printf("%c%lf",var_char,var_double);
  return 0;
}
