#include<stdio.h>
int main()
{
int m1, m2, m3, m4, m5, tm;
float per;
printf("The toal marks of each subject are 100\n");
printf("Enter the marks of 5 subjects respectively:\n");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
tm=m1+m2+m3+m4+m4;
per=(tm*100)/500.0;
printf("\n the total marks are %d",tm);
printf("\n the percentile is %f%",per);
if(per>=90)
{
   printf("\nThe grades are A(Excellent) \nAnd the credit points are 4.0");
}
else if(per>=85 && per<=89)
   printf("\nTHe grades are A-(Excellent) \nAnd the credit points are 3.7");
else if(per>=89 && per<=84)
   printf("\nTHe grades are B+(Excellent) \nAnd the credit points are 3.3");
else if(per>=75 && per<=79)
   printf("\nTHe grades are B(Good) \nAnd the credit points are 3.0");
else if(per>=70 && per<=74)
   printf("\nTHe grades are B-(Good) \nAnd the credit points are 2.7");
else if(per>=65 && per<=69)
   printf("\nTHe grades are C+(Good) \nAnd the credit points are 2.3");
else if(per>=60 && per<=64)
   printf("\nTHe grades are C(Average) \nAnd the credit points are 2.0");
else if(per>=55 && per<=59)
   printf("\nTHe grades are C-(Average) \nAnd the credit points are 1.7");
else if(per>=50 && per<=54)
   printf("\nTHe grades are D(Minimum Passing) \nAnd the credit points are 1.3");
else if(per<50)
   printf("\nTHe grades are F(Failing) \nAnd the credit points are 0.0");
return 0;
}
