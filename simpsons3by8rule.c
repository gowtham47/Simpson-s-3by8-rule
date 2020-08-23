/// Simpson's 3/8 rule
#include <stdio.h>
#include<math.h>
#define f(x) 1/(1+(x*x))
int main()
{
    int n, i;
    float a, b, h, delta, f=0, g, y;
    printf("\n\n Enter Upper limit:");
    scanf("%f", &b);
    printf("\n\n Enter Lower limit:");
    scanf("%f", &a);
//input n value multiple of 3
    printf("\n\n Enter the sub interval terms:");
    scanf("%d", &n);
while(n%3!=3)

    {
        h = ((b-a)/n);
        printf("\n\n Value of h:%f" ,h);
    }
    {
        for (i=1; i<=n-1; i++)
        {
            y = a + (i*h);
            printf("\n\n %f",y);
            {
                if(i%3==0)
                {
                    f= f+ 2*f(y);
                }
                else
                {
                    f= f + 3*f(y);    
                }
            }    
        }
    }
    {
        g = ((3*h)/8)*(f+f(a)+f(b));
        printf("\n\nThe true solution for the integral is :%f", g);
    }
}
