#include <stdio.h> // printf
#include <math.h>  // NAN

#define MATH_PI 3.1415

double deg_to_rad(double deg)
{
  double res = deg / 360.0 * (2 * MATH_PI);
  return res;
}

double rad_to_deg(double rad)
{
  double res = rad / (2 * MATH_PI) * 360.0;
  return res;
}

int main()
{
  // setup test arrays
  double input[5] = {0, 90, 180, 270, 360};
  double output[5] = {NAN};

  // perform transformation deg->rad->deg
  for (int n = 0; n < 5; n = n + 1)
  {
    double rad = deg_to_rad(input[n]);
    output[n] = rad_to_deg(rad);
  }

  // test results (expected diff is '0')
  for (int n = 0; n < 5; n = n + 1)
  {
    printf("diff = %f\n", output[n] - input[n]);
  }
}