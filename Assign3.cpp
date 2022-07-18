/*UNCOMMEMT THE PARTICULAR CODE BELOW THE QUESTION TO GET THE SOLUTION*/

//1. Write a program to check whether a given number is positive or non-positive
//answer
// #include<stdio.h>
// int main() {
// int a;
// printf("Enter the number:");
// scanf("%d",&a);
// if(a>0){
//     printf("It's a positive number:");

// }else{
//     printf("it's Non-positive number:");
// }
// return 0;
// }
//============================================================================================================

//2. Write a program to check whether a given number is divisible by 5 or not

// #include<stdio.h>
// int main() {
// int a;
// printf("Enter the number to check divisible by 5:");
// scanf("%d",&a);
// if(a>0)
// {
//     int d=a%10;
//     if(d==0 || d==5){
//         printf("the %d is divisible by 5",a);
//     }
//     else{
//     printf("The %d is Not divisible by 5",a);
//     }

// }

// return 0;
// }
//================================================================================================================

/*3. Write a program to check whether a given number is an even number or an odd 
number.*/

// #include<stdio.h>
// int main() {
// int a;
// printf("Enter the number:");
// scanf("%d",&a);
// if(a%2==0){
//     printf("The %d number is even",a);
// }else{
//     printf("The %d number is odd",a);
// }
// return 0;
// }
//==================================================================================================================

/*4. Write a program to check whether a given number is an even number or an odd 
number without using % operator*/

// #include<stdio.h>
// int main() {
// int num;
// printf("Enter the number:");
// scanf("%d",&num);
// int result=num&1;
// if(result==1)
// {
//     printf("The number %d is odd",num);

// }else
// {
//     printf("The number %d is even",num);
// }
// return 0;
// }
//===========================================================================================================================

//5. Write a program to check whether a given number is a three-digit number or not.
//
// #include<stdio.h>
// int main() {
// int a;
// printf("Enter a number:");
// scanf("%d",&a);
// int count=0;
// while(a!=0){
//     int d=a%10;
//    count++;
//    a=a/10;
// }
// if(count==3){
//     printf("The number is three digit ",a);

// }else{
//     printf("The number is not three digit",a);
// }
// return 0;
//============================================================================================================================

/*6. Write a program to print greater between two numbers. Print one number of both are 
the same.*/

// #include<stdio.h>
// int main() {
// int a,b;
// printf("Enter two number:");
// scanf("%d %d",&a,&b);
// if(a>b){
// printf("a=%d is greater than b=%d",a,b);

// }else if(a<b){
//     printf("a=%d is smaller than b=%d",a,b);
// }else {
//     printf("a=%d is equal to b=%d",a,b);
// }
// return 0;
// }

/*7. Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots*/

// #include<stdio.h>
// int main() {
// int a,b,c;
// printf("The quadratic equation form  is ax2+bx+c=0 \n");
// printf("Enter  value of a b c :");
// scanf("%d%d%d",&a,&b,&c); 
// int D=b*b-4*a*c;
// if(D>0){
//     printf("The equation will have REAL & DISTINCT ROOTS");
// }else if(D<0){
//     printf("The equation will have IMAGINARY ROOTS");

// }else {
//     printf("The equation will have REAL &EQUAL ROOTS");
// } 
// return 0;
// }
//===========================================================================================

/*8. Write a program to check whether a given year is a leap year or not.*/

// #include<stdio.h>
// int main() {
// int year;
// printf("Enter a year:");
// scanf("%d",&year);
// if(year%100==0){
//     //century year
//     if(year%400==0){
//         printf("It's a leap year:\n");
//     }
// }
// else if(year%4==0) 
// {
    
//  printf("It's a leap year\n");
    
// } else
// {printf("It's a normal year:\n");}

// return 0;
// }
//======================================================================================
/*9. Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times.*/

// #include<stdio.h>
// int main() {
// int a,b,c;
// printf("Enter a three  a b c number:");
// scanf("%d%d%d",&a,&b,&c);
// if(a>b && a>c){
//     printf("a=%d is greatest among three",a);
// }
// else if(b>a && b>c){
//     printf("b=%d is greatest among three",b);

// }else if(c>a && c>b){
//     printf("c=%d is greatest among three",c);
// }
// return 0;
// }

//===========================================================================================
/*10. Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage*/
/*profit =sp-cp/cp * 100   loss =cp-sp/cp *100*/

// #include<stdio.h>
// int main() {
// float costprice, sellprice;
// printf("Enter a cost & sell price of product\n");
// scanf("%f%f",&costprice,&sellprice);
// if(sellprice>costprice){

//     float profit= ((sellprice- costprice) /costprice) *100;
//     printf("Hurry..! you get profit of %f",profit);
// }
// else{
// float loss= ((costprice - sellprice)/costprice) *100;
// printf("Bad day today...! you get loss of %f",loss);
// }


// return 0;
// }
//========================================================================================

/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.*/

// #include<stdio.h>
// int main() {
// int sub1,sub2,sub3,sub4,sub5;
// printf("Enter a  5 subject marks out of 100 \n:");
// scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
// if(sub1>=0 && sub2>=0 && sub3>=0 && sub4>=0 && sub5>=0 )
// {
// if(sub1>33 && sub2>33 && sub4>33 && sub5>33)
// {
//     printf("Hurry...! you passed the examination");

// }else{
//     printf("Good luck next time..! you failed.");
// }
// }else{
//     printf("Enter a valid marks");
// }
// return 0;
// }
//========================================================================================
/*12. Write a program to check whether a given alphabet is in uppercase or lowercase.*/

/* uppercase A-Z =65-90         lowercase= 'a'-'z'= 97-122 */

// #include<stdio.h>
// int main() {
// char alpha;
// printf("Enter a alphabet to check uppercase or lowercase: \n");
// scanf("%c",&alpha);
// if( 65 <=alpha &&  alpha <=90 )
// {
//     printf("The alphabet %c is uppercase",alpha);

// }else if( 97<=alpha && alpha<=122)
// {
//     printf("The alphabet %c is lowercase",alpha);
// }else {
//     printf("Enter a proper alphabet",alpha);
// }
// return 0;
// }
//=========================================================================================

/*13. Write a program to check whether a given number is divisible by 3 and divisible by 2*/

// #include<stdio.h>
// int main() {
// int num;
// printf("Enter a number:");
// scanf("%d",&num);
// if((num% 3==0) && (num%2==0)){
//     printf("The number is divisible by 2&3:");
// }
// else{
//     printf("Enter a proper number:");
// }
// return 0;
// }
//==================================================================================

/*14. Write a program to check whether a given number is divisible by 7 or divisible by 3*/

// #include<stdio.h>
// int main() {
// int num ;
// printf("Enter a number");
// scanf("%d",&num);
// if((num%7==0) || (num%3==0))
// {
// printf("The number is divisble by 7 or 3:");

// }
// else{
//     printf("The number not divisible by 7 or 3");
// }
// return 0;
// }
//===============================================================================================
/*15. Write a program to check whether a given number is positive, negative or zero*/

// #include<stdio.h>
// int main() {
// int num;
// printf("Enter a number :");
// scanf("%d",&num);
// if(num>0){
//     printf("Enter number %d is:positive",num);

// }else if(num<0){
//     printf("Enter number %d is:negative",num);
// }else{
//     printf("Enter number %D is:Zero",num);
// }
// return 0;
// }
//===========================================================================================
/*16.Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.
*/
// #include<stdio.h>
// int main() {
// char alpha;
// printf("Enter a character:\n");
// scanf("%c",&alpha);
// if((65<=alpha) && (alpha<=90))
// {
//     printf("The character %c is:Uppercase",alpha);
// }else if((97<=alpha)&& (alpha<=122))
// {
//     printf("The character %c is:Lowercase",alpha);
// }else if((48<=alpha)&& (alpha<=57))//digit(0-9)  ASCII is(48-57)
// {
//     printf("The character %c is:Digit",alpha);
// }else
// {
//     printf("The character %c is:Special Character",alpha);
// }
// return 0;
// }
//============================================================================================

/*17. Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not. */

// #include<stdio.h>
// int main() {
// int a ,b,c;
// printf("Enter a side of triangle a b c:");
// scanf("%d%d%d",&a,&b,&c);
// if((a+b>c)&& (a+c>b)&&(b+c>a)){
//     printf("The triangle with a=%d b=%d c=%d is valid",a,b,c);

// }else{
//     printf("Enter a valid  length");
// }
// return 0;
// }
//============================================================================================
/*18. Write a program which takes the month number as an input and display number of 
days in that month*/

// #include<stdio.h>
// int main() {
// int month;
// printf("Enter a month number:");
// scanf("%d",&month);

// if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
// {
//     printf("The month %d is having 31 days...!",month);
// }else if((month==4)||(month==6)||(month==9)||(month==11))
// {
//     printf("The month %d is having 30 days...!",month);
// }else{
//     printf("The month %d is havig 28 days \n if leap year than 29 days..!",month);
// }
// return 0;
// }