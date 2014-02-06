#include<stdio.h>
#include<math.h>
float find_distance(float,float,float,float);
float find_max(float,float,float);
int main()
{
float max,dist1,dist2,dist3,x1,y1,x2,y2,x3,y3;
printf("enter coordinates:");
scanf("%f",&x1);
scanf("%f",&y1);
scanf("%f",&x2);
scanf("%f",&y2);
scanf("%f",&x3);
scanf("%f",&y3);
//printf("%f\n%f\n%f\n%f\n%f\n%f",x1,y1,x2,y2,x3,y3);
dist1=find_distance(x1,y1,x2,y2);
dist2=find_distance(x1,y1,x3,y3);
dist3=find_distance(x2,y2,x3,y3);
max=find_max(dist1,dist2,dist3);
//printf("%f \n",max);
//printf("%f \n %f\n %f \n ",sqrt(dist1),sqrt(dist2),sqrt(dist3));
if(2*sqrt(max)>=(sqrt(dist1)+sqrt(dist2)+sqrt(dist3)))
	printf("not triangle");
else if(dist1==dist2==dist3)
	printf("equilateral");
else if(dist1==dist2||dist2==dist3||dist3==dist1)
	printf("isosceles");
else if(2*(max)==dist1+dist2+dist3)
	printf("right angled");
else
	printf("Scalene");
	return 0;
}
float find_distance(float x1,float y1,float x2,float y2)
{
//printf("\n %f %f to %f %f is",x1,y1,x2,y2);
float x,y;
x=x1-x2;
y=y1-y2;
x=x*x;
y=y*y;
//printf("%f    ",(x+y));
return (x+y);
}
float find_max(float x1,float x2,float x3)
{
if(x1>x2)
if(x1>x3)
return x1;
else
return x3;
else
if(x2>x3)
return x2;
return x3;
}