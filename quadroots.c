//find the roots of the quadratic solution
 #include<stdio.h>
 int main()
 {

    int a,b,c,D;
    float x,y,real_part,imaginary_part;
    printf("enter the coffecient of x^2,x and const c :");
    scanf("%d%d%d",&a,&b,&c);
    D = b*b-4*a*c;

     if (D<0)
     {
         printf("both the roots are imaginary");
         real_part = -b/(2.0*a);
         imaginary_part = sqrt(-D)/(2*a);
         printf("\nroots are: x = %f - (%f)i",real_part,imaginary_part);
         printf("\nroots are: y = %f + (%f)i",real_part,imaginary_part);

     }
     if (D==0)
     {
         printf("the discrimant is zero");
         printf("Both the roots are equal");
         x = -b/(2.0*a);
        printf("root is %f",x);
     }
     if (D>0)
     {
         printf("the discrimant D is positive");
         printf("\ntwo roots are distinct and real roots");
         x=(-b+sqrt(D))/(2*a);
         y=(-b-sqrt(D))/(2*a);
         printf("\nRoots are %f,%f",x,y);
     }

 }
