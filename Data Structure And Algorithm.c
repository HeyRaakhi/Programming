//WAP to Read any Two Integer Numbers to Perform the Arithmetic Operations (Addition, Subtraction, Multiplication, Division, and Remainder) and Display the Result along with its Proper Headings in Separate Lines.


#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y;
    int sum, sub, mul, rem;
    float div;
    printf("Enter any TWO Integer Numbers\n\n");
    scanf("%d%d", &x, &y);
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = (float)x / y; // Type casting
    rem = x % y;

    printf("-----------------------------\n\n");

    printf("The value of x : %d\n\n", x);
    printf("The value of y : %d\n\n", y);

    printf("-----------------------------\n\n");

    printf("Addition : %d\n\n", sum);
    printf("Substraction : %d\n\n", sub);
    printf("Multiplication : %d\n\n", mul);
    printf("Division : %f\n\n", div);
    printf("Remender : %d\n\n", rem);

    printf("-----------------------------\n\n");

    getch();
}






//WAP to Read Radius of the Circle and Calculate the Area and Perimeter of the Circle using the Formula`s:-----  1)Area = PI x (Radius)2   ---  2)Perimeter = 2 x PI x Radius

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
   float rad;
   float area,peri;
   float PI = 3.1415;

printf("ENTER the Radius of Circle: ");
scanf("%f",&rad);

area = PI * pow(rad,2);
peri = 2 * PI * rad;

printf("-----------------------------------\n\n");
printf("Radius of Circle : %10.2f cms\n\n",rad);

printf("-----------------------------------\n\n");
printf("Area of Circle : %10.2f cms\n\n",area);

printf("Perimeter of Circle : %10.2f cms\n\n",peri);
printf("-----------------------------------");

getch();
}






//WAP that shows wether a single character is vowel, consonant, digit or a special character:

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) 
    {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } 
    else if (isdigit(ch)) { // Check if it is a number
        printf("'%c' is a digit.\n", ch);
    } 
    else { // Anything else is a special character
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}






//WAP to Read any Three Integer Numbers from the Keyboard and Find the Largest Number among them by using Nested if else and Ladder if else Statements.

#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;

    printf("Enter any THREE Integer Numbers\n\n");
    scanf("%d%d%d",&a,&b,&c);
    
      if(a > b)
    {
      if(a > c)
        {
          printf("\n\n%d is Greater\n\n",a);
        }
  
    else
       {
          printf("\n\n%d is Greater\n\n",c);
       }
    }
    else
       {
        if(b > c)
           {
              printf("\n\n%d is Greater\n\n",b);
           }
        else
          {
             printf("\n\n%d is Greater\n\n",c);
          }
       }
getch();

}





//WAP to Read any Three Integer Numbers for variables A, B, and C and Check that B is the Middle value of A and C or Not.

#include <stdio.h>
#include <conio.h>
void main()
{
    int A,B,C;

    printf("ENTER any THREE Integer Numbers\n\n");
    scanf("%d%d%d",&A,&B,&C);

    if( ( (A < B) && (B < C) ) || ( (A > B) && (B > C) ) )

    {
       printf("\n\n%d Is Middle value of %d and %d",B,A,C);
    }
       else
         {
            printf("\n\n%d Is NOT Middle value of %d and %d",B,A,C);
         }
    getch();
}






//WAP to Read any Integer Number from Keyboard and Check that the Enter Number is EVEN Number or ODD Number.

#include <stdio.h>
#include <conio.h>
void main()
{
      int num;
      printf("ENTER any Integer Number : ");
      scanf("%d",&num);

    if(num % 2 == 0)
        {
           printf("\n\n%d is EVEN Number\n",num);
        }
    else
       {
           printf("\n\n%d is ODD Number\n",num);
       }
       
getch();
}






//WAP to find whether the year is LEAP YEAR or not:


#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year.\n", year);
    else
        printf("%d is not a Leap Year.\n", year);

    return 0;
}






//WAP to check the given number is prime or not:


#include <stdio.h>

int main() {
    int num, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
        printf("Not a Prime Number.\n");
    else {
        for(i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                count = 1;
                break;
            }
        }
        if(count == 0)
            printf("Prime Number.\n");
        else
            printf("Not a Prime Number.\n");
    }

    return 0;
}






//WAP that tells sum of digits of given number


#include <stdio.h>

int main() {
    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}






//WAP that tells Temperature Converter Celsius → Fahrenheit


#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f°F\n", f);

    return 0;
}
