#include<stdio.h>
#include<stdlib.h>
/*#include<math.h>*/
double pow2(float x,int y)
{
if(y==1)
return x;
else
return x*pow2(x,y-1);	
}
float log_e(float x)
{
	int z=10,i;
	float term=0,sum=0;
	float m=(x-1)/(x+1);
	for(i=1;i<z;i++)
	{
		term=pow2(m,(2*i-1))/(2*i-1);
		sum+=term;
	}
	sum*=2;
	return sum;
}

long double power(float a ,float b)
{
   long double x=b*log_e(a),sum=1,term=x;
   int z=20,i;
   for(i=2;i<z;i++)
   {
sum+=term;
term=term*x/i;
   }
   return sum;

}
int main()
{
    float a,b;
    printf("enter a and b for calculating a^b \n");
    scanf("%f %f",&a,&b);
    double sol=power(a,b);
    printf("%f",sol);
    
}
