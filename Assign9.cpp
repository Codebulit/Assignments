
// 1. Write a program which takes the month number as an input and display
// number of days in that month.

// #include<stdio.h>
// int main() {
// int n;
// printf("Enter a month number:");
// scanf("%d",&n);

//   switch (n)
//   {
//   case 1:  printf("You have Enter %d\n",n);
//            printf("%d=January month \n it has 31days",n);
//     break;
//     case 2: printf("You have Enter %d\n",n);
//            printf("%d=Febuary month \n it has 28days \n 29 days in leap year",n);
//   break;
//   case 3: printf("You have Enter %d\n",n);
//            printf("%d=March month \n it has 31days",n);
//   break;
//   case 4: printf("You have Enter %d\n",n);
//            printf("%d=April month \n it has 30days",n);
//   break;
//   case 5: printf("You have Enter %d\n",n);
//            printf("%d=May month \n it has 31days",n);
//   break;
//   case 6: printf("You have Enter %d\n",n);
//            printf("%d=June month \n it has 30days",n);
//   break;
//   case 7: printf("You have Enter %d\n",n);
//            printf("%d=July month \n it has 31days",n);
//   break;
//   case 8: printf("You have Enter %d\n",n);
//            printf("%d=August month \n it has 31days",n);
//   break;
//   case 9: printf("You have Enter %d\n",n);
//            printf("%d=September month \n it has 30days",n);
//   break;
//   case 10: printf("You have Enter %d",n);
//            printf("%d=October month \n it has 31days",n);
//   break;
//   case 11: printf("You have Enter %d\n",n);
//            printf("%d=November month \n it has 30days",n);
//   break;
//   case 12: printf("You have Enter %d\n",n);
//            printf("%d=December month \n it has 31days",n);
//   break;

//   default: printf("Enter a valid month number...!");
//     break;
//   }
// return 0;
// }

//======================================================================================

// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

// #include<stdio.h>
// int main() {
// int choice,n1,n2;
// printf("Enter a number: \n  \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Divison \n5.Exit \n");
// scanf("%d",&choice);

// switch (choice)
// {
// case 1: printf("You have choose %d :Addition\n",choice);
//         printf("Enter Two number to Add:  \n");
//         scanf("%d%d",&n1,&n2);
//         printf("The Addition of %d and %d is:%d",n1,n2,n1+n2);

//     break;
//     case 2: printf("You have choose %d: Subtract\n",choice);
//         printf("Enter Two number to Subtract: \n");
//         scanf("%d%d",&n1,&n2);
//         printf("The Subtract of %d and %d is:%d",n1,n2,n1-n2);

//     break;
//     case 3: printf("You have choose %d :Multiplication\n",choice);
//         printf("Enter Two number to Multiplication: \n");
//         scanf("%d%d",&n1,&n2);
//         printf("The Multiplication of %d and %d is:%d",n1,n2,n1*n2);

//     break;
//     case 4: printf("You have choose %d :Division\n",choice);
//         printf("NUM/DEM : demonator never be Zero take care:");
//         printf("Enter Two number to Division: \n");
//         scanf("%d%d",&n1,&n2);
//         printf("The Division of %d and %d is:%d",n1,n2,n1/n2);

//     break;

// default:  printf("Enter a valid number (0-4)");

//     break;
// }
// return 0;
// }
//===========================================================================================

/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/

// #include<stdio.h>
// int main() {
// int n;
// printf("Enter a day of the week:\n");
// scanf("%d",&n);
//  switch (n)
//  {
//  case 1:printf("You have  enter a %d: It's Sunday toay.urry...! today is rest day ",n);
//     break;
//  case 2:printf("You have  enter a %d: It's Monday today..\n today first day of your day ",n);
//     break;
//     case 3:printf("You have  enter a %d: It's Tuesday today..!\n follow the Excellence ",n);
//     break;
//     case 4:printf("You have  enter a %d: It's Wednesday today..!\n today is my day ",n);
//     break;
//     case 5:printf("You have  enter a %d: It's Thrusday today..!\n you are Boss ",n);
//     break;
//     case 6:printf("You have  enter a %d: It's Friday today..!\n It's Movie day today ",n);
//     break;
//     case 7:printf("You have  enter a %d: It's Satuday today..!\n Tommorrow is Sunday ",n);
//     break;
//  default: printf("You have Enter a invalid day");
//     break;
//  }
// return 0;
// }
//===================================================================================================

// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit

// #include<stdio.h>
// int main() {
// int a,b,c,n;
// printf("Enter three length of triangle to check \n1.Isosceles triangle \n2.Right angle triangle \n3. Equilateral triangle\n");
// scanf("%d%d%d",&a,&b,&c);
// printf("Enter Your choice to check:\n");
// scanf("%d",&n);
// switch (n)
// {
// case 1:  if(a=b?a=c:b=c)
//            {
//                printf("it's a isoscele triangle \n angle oppisite of two side are equal\n");
//             }
//             else{
//                 printf("It's not a isoscele triangle...!");
//             }
//     break;
// case 2:  if((a*a>b*b + c*c)||( b*b>a*a+c*c)||(c*c>a*a+b*b))
//            {
//                printf("it's a Right angle triangle \n one of angle will be 90 degree\n");
//             }
//             else{
//                 printf("It's not a Right angle triangle...!");
//             }
//     break;
//     case 3:  if((a==b)&&(a==c)&&(b==c))
//            {
//                printf("it's a Equilateral triangle \n All angle will 60degree \n");
//             }
//             else{
//                 printf("It's not a Equilateral  triangle..!");
//             }
//     break;

//         default: printf("Your Enter length not belong to any triangle..!");
//        break;
// }
// return 0;
// }
//==================================================================================================

// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid")

// #include<stdio.h>
// int main() {
// int var;
// printf("Enter a number:");
// scanf("%d",&var);
// switch (var)
// {
//    case 1: printf("good");
//     break;
//     case 2: printf("better");
//     break;
//     case 3: printf("best");
//     break;
//     default:printf("Invalid");
//     break;
// }

// return 0;
// }
//=================================================================================
// 6. Program to check whether a year is a leap year or not. Using switch
// statement

// #include <stdio.h>
// int main()
// {
//     int year, century,a,normal;
//     printf("Enter a year:\n");
//     scanf("%d",&year);

//     printf("To check \n1.normal year \n2.Century year \n3.leap year \n");
//     scanf("%d",&a);
//     switch (a)
//     {
//     case 1:
//         if (year % 100 == 0)
//         {
//             printf("it's century year\n");
//             century = year;
//         }
//         else
//         {
//             printf("it's a normal year \n");
//             normal = year;
//         }
//         break;
//     case 2:
//         if (year % 100 == 0)
//         {
//             printf("it's century year\n");
//             century = year;
//         }
//         else
//         {
//             printf("it's a normal year \n");
//             normal = year;
//         }
//         break;

//     case 3:
//         if (year % 100 == 0)
//         {
//             printf("it's century year\n");
//             century = year;
//             if (century % 400 == 0)
//             {
//                 printf("It's leap year:\n");
//             }
//         }
//         else
//         {
//             printf("it's a normal year \n");
//             normal = year;
//             if (normal % 4 == 0)
//             {
//                 printf("it's leap year:\n");
//             }
//         }
//     default: printf("Enter a valid year:");
//         break;
//     }

//     return 0;
// }
//=============================================================================

// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.


// #include<stdio.h>
// int main() {
// float unit_charge,p,d;
// int n;

// printf("Enter a unit of electricity : \n");
// scanf("%f",&unit_charge);
// printf(" \n1.For the first 50 units Rs. 0.50/unit \n2.For the next (50-150) units Rs. 0.75/unit  \n3.For the next (150-250) units Rs. 1.20/unit \n4. For units above 250 Rs. 1.50/unit \n ");
// scanf("%d",&n);
// switch (n)
// {
// case 1 :   printf("The Electricity Bill is:%f \n", 0.50*unit_charge);
//                      d=0.50*unit_charge;
//             printf("Additionl surcharge of 20 %% :%f \n",(0.50*unit_charge)*0.2);
//                    p=(0.50*unit_charge)*0.2;
//             printf("Total Bill is:%f \n", d+p);
//     break;
//  case 2 :   printf("The Electricity Bill is:%f \n", 0.75*unit_charge);
//                      d=0.75*unit_charge;
//             printf("Additionl surcharge of 20 %% :%f \n",(0.750*unit_charge)*0.2);
//                    p=(0.750*unit_charge)*0.2;
//             printf("Total Bill is:%f \n", d+p);
//     break;
//     case 3 :   printf("The Electricity Bill is:%f \n", 1.20*unit_charge);
//                      d=1.20*unit_charge;
//             printf("Additionl surcharge of 20 %% :%f \n",(1.20*unit_charge)*0.2);
//                    p=(1.20*unit_charge)*0.2;
//             printf("Total Bill is:%f \n", d+p);
//     break;
//     case 4 :   printf("The Electricity Bill is:%f \n", 1.50*unit_charge);
//                      d=1.50*unit_charge;
//             printf("Additionl surcharge of 20 %% :%f \n",(1.50*unit_charge)*0.2);
//                    p=(1.50*unit_charge)*0.2;
//             printf("Total Bill is:%f \n", d+p);
//     break;
// default:
//     break;
// }
// return 0;
// }
//==============================================================================
// 8. Program to convert a positive number into a negative number and negative
//  number into a positive number using a switch statement.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number :\n");
//     scanf("%d", &n);
//     switch (n > 0)
//     {
//     case 1:
//         printf("Enter number is positive number:\n");
//         printf("Make it negative:%d", (-1) * n);
//         break;

//     case 0:
//         printf("Enter numnber is negative:\n");
//         printf("Make it postive:%d", (-1) * n);

//     default:
//         printf("Enter number is not valid:\n");
//         break;
//     }
//     return 0;
// }
//=====================================================================================
// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number :\n");
//     scanf("%d", &n);
//     switch (n % 2 == 0)
//     {
//     case 1:
//         printf("Enter number is Even number:\n");
//         printf("Make it neartesr odd:%d", (n + 1));
//         break;

//     case 0:
//         printf("Enter numnber is odd number:\n");
//         printf("Make it neartesr even:%d", (n + 1));
//         break;
//     default:
//         printf("Enter number is not valid:\n");
//         break;
//     }
//     return 0;
// }
//=======================================================================================
// 10. C program to find all roots of a quadratic equation using switch case

// #include<stdio.h>
// int main() {

// int a,b,c;
// printf("Enter a quadratic form ax2+bx+c=0 a= b= c= : \n");
// scanf("%d%d%d",&a,&b,&c);
// int D=b*b -(4*a*c);
// if( D>0){
//     printf(" D postive\n");
// }else if(D<0){
//     printf(" D Negtive \n");
// } else {
//     printf("D Zero: \n");
// }
// printf(" check the roots \n1. D>0 \n2.D<0 \n3.D=0 \n");
// scanf("%d",&D);
//   switch (D)
//   {
//   case 1:
//     printf("Real and Distinct roots");
//     break;
//    case 2 :
//          printf("imaginary and Distinct roots");

//        break;

//     case 3:
//     printf("Real and equal");

//            break;

//   default: printf("Enter a valid number:\n");
//     break;
//   }

// return 0;
// }
