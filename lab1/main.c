#include <stdio.h>
#include <math.h>

int main(){
float a=1000;
float b=0.0001;
double a1=1000;
double b1=0.0001;
float result1=(pow(a-b,3)-pow(a,3))/(pow(b,3)-3*a*pow(b,2)-3*pow(a,2)*b);
double result2=(pow(a1-b1,3)-pow(a1,3))/(pow(b1,3)-3*a*pow(b1,2)-3*pow(a1,2)*b1);
printf("%f\n", result1);
printf("%f\n",result2);

}
