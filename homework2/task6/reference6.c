#include <stdio.h> // printf
#include <math.h>  // NAN

#define MATH_PI 3.1415
#define NUM 5
struct Cart
{
  double x;
  double y;
};

struct Polar
{
  double r;
  double phi;
};

struct Cart polar_to_cart(struct Polar p){
  struct Cart temp; 
  temp.x = p.r*cos(p.phi);
  temp.y = p.r*sin(p.phi);
  return temp;
}

struct Polar cart_to_polar(struct Cart c){ //Alles in Bogenmaß eingeben chabbo
  struct Polar temp;
  temp.r = sqrt(c.x*c.x+c.y*c.y);
  temp.phi = atan2(c.y,c.x);
  return temp;
  }

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
  double inputO[5] = {0, 90, 180, 270, 360};
  double output[5] = {NAN};

  // perform transformation deg->rad->deg
  for (int n = 0; n < 5; n = n + 1)
  {
    double rad = deg_to_rad(inputO[n]);
    output[n] = rad_to_deg(rad);
  }

  // test results (expected diff is '0')
  for (int n = 0; n < 5; n = n + 1)
  {
    printf("diff = %f\n", output[n] - inputO[n]);
  }


////////////////////////////////////////////////////////////////////////
printf("/////////////////////\n");
  struct Cart input[NUM] = {{0, 0}, {1, 7}, {1, -1}, {-1, -1}, {-1, 1}};
  //printf("%f", input[0].x);
  struct Polar temp[NUM];
  for (int i=0;i<NUM;i++){
    temp[i] = cart_to_polar(input[i]);
  }
  struct Cart out[NUM];
  for (int i=0;i<NUM;i++){
    out[i] = polar_to_cart(temp[i]);
  }
    for (int n = 0; n < 5; n = n + 1)
  {
    printf("diff = %f\n", (out[n].x - input[n].x));
    printf("diff = %f\n", out[n].y - input[n].y);

  }
  
}