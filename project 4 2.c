#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,x1,x2,y,z;
printf("Please define a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
y=b*b-4*a*c;
if(y<0) printf("Error,there is no result.The following results are wrong value.\n");
z=sqrt(y);
if(z>0) {
  x1=(-b+z)/(2*a);
  x2=(-b-z)/(2*a);
  printf("Threr are two results:x1=%.2fx2=%.2f\n",x1,x2);
}
  else if(z==0) {
         x1=(-b)/(2*a);
         printf("There is a result:x1=%.2f\n",x1);
}
  return 0;
}