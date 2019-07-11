#include <stdio.h>

double max(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j)
{
	double max = a;	
	if(b > max) max = b;
	if(c > max) max = c;
	if(d > max) max = d;
        if(e > max) max = e;
        if(f > max) max = f;
        if(g > max) max = g;
        if(h > max) max = h;
        if(i > max) max = i;
        if(j > max) max = j;
	return max;
}

double min(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j)
{
        double max = a;
        if(b < max) max = b;
        if(c < max) max = c;
        if(d < max) max = d;
        if(e < max) max = e;
        if(f < max) max = f;
        if(g < max) max = g;
        if(h < max) max = h;
        if(i < max) max = i;
        if(j < max) max = j;

        return max;
}


double main()
{
  double a,b,c,d,e,f,g,h,i,j,sum,maxx,minn,product;
  printf("Enter 10 floating-point numbers:\n");
  scanf("%le%le%le%le%le%le%le%le%le%le", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

 sum = a+b+c+d+e+f+g+h+i+j;
 maxx = max(a,b,c,d,e,f,g,h,i,j);
 minn = min(a,b,c,d,e,f,g,h,i,j);
 product = a*b*c*d*e*f*g*h*i*j;

 printf("Sum is %.5f\n", sum);
 printf("Min is %.5f\n", minn);
 printf("Max is %.5f\n", maxx);
 printf("Product is %.5f\n", product);
}
