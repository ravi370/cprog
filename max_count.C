#include<stdio.h>
#include<stdlib.h>
int find_max();
int *a,size;
int main()
{
int max1,m,max,i;
int *b;
scanf("%d",&size);
a=(int *)malloc(size*sizeof(int));
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
max=find_max();
b=(int *)malloc((max+1)*sizeof(int));
for(i=0;i<max+1;i++)
{
 b[i]=0;
}
for(i=0;i<size;i++)
{
b[a[i]]++;
}
m=0;
max1=-1;
for(i=0;i<max+1;i++)
{
if(b[i]>m)
{
m=b[i];
max1=i;
}
}
if(max1==-1)
{
printf("");
}
else
printf("element that has occured most number of times %d",max1);
return 0;
}
int find_max()
{
int i,max=-1;
for(i=0;i<size;i++)
{
if(a[i]>max)
max=a[i];
}
return max;
}