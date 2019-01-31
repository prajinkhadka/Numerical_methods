#include<stdio.h>
#include<stdlib.h>

float allowed_error = 0;

double function(double value);
double derived_function(double value);
void newton_raphson_method(double value);

int main()
{
      double value;
      printf("\nEnter a Value:\t");
      scanf("%lf", &value);
      printf("\nEnter Allowed Error:\t");
      scanf("%f", &allowed_error);
      newton_raphson_method(value);
      return 0;
}

void newton_raphson_method(double value)
{
      double m = function(value) / derived_function(value);
      for ( ;abs(m) >= allowed_error; )
      {
            m = function(value) / derived_function(value);
            value = value - m;
      }
      printf("\nRoot Value:\t%f\n", value);
}

double function(double value)
{
      return (value * value * value - value * value + 2);
}

double derived_function(double value)
{
      return (3 * value * value - 2 * value);
}
