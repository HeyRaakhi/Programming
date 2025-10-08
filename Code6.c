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