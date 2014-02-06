#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
int *a,*b,k=0,j=0,i,n1,n2,m1,m,l1,l;
printf("enter array sizes");
scanf("%d %d",&n1,&n2);
a=(int *)malloc(n1*sizeof(int));
b=(int *)malloc(n2*sizeof(int));
printf("enter elements for arrays");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
i=0;j=0;k=0;
if((n1+n2)%2==0)
{
m=(n1+n2)/2;
n=m+1;
}
else 
{
m=(n1+n2)/2;
m=m+1;
n=-1;
n1=0;
}
while(i<n1 && j<n2)
{
if(a[i]<b[j])
{
if(k==m)
m1=a[i];
else if(k==n)
{
n1=a[i];
break;
}
i++;
k++;
}
else if(a[i]>b[j])
{
if(k==m)
m1=b[j];
else if(k==n)
{
n1=b[j];
break;
}
j++;
k++;
}
else
{
if(k==m)
m1=b[j];
else if(k==n)
{
n1=b[j];
break;
}
j++;
k++;
}
if(k==m)
m1=a[i];
else if(k==n)
{
n1=a[i];
break;
}
i++;
k++;
}
}
printf("%f",(m1+m2)/2);
}
}