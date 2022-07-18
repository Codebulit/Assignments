//1. Write a program to print unit digit of a given number
//Answer

// #include<stdio.h>
// int main() {
// int a;
// printf("Enter a number to get unit digit:");
// scanf("%d",&a);

// printf("The unit digit of %d is:%d",a,a%10);
// return 0;
// }
//=================================================================================

//2. Write a program to print a given number without its last digit.
//Anawer

// #include<stdio.h>
// int main() {
// int a;
// printf("Enter the number:");
// scanf("%d",&a);
// printf("The number %d without last digit is:%d",a,a/10);
// return 0;
// }
//=======================================================================================

//3.Write a program to swap values of two int variables
//Answer

// #include<stdio.h>
// int main() {
// int a,b;
// int temp;
// printf("Enter the number to swap:");
// scanf("%d %d",&a,&b);
// printf("Before swaping a=%d b=%d \n",a,b);
// temp=a;
// a=b;
// b=temp;
// printf("Before swaping a=%d b=%d \n",a,b);
// return 0;
// }
//=============================================================================================

//4. Write a program to swap values of two int variables without using a third variable.
//Answer

// #include<stdio.h>
// int main() {
// int a;
// int b;
// printf("Enter the number:");
// scanf("%d %d",&a,&b);
// printf("Before swaping a=%d b=%d \n",a,b);

// a=a+b;
// b=a-b;
// a=a-b;
// printf("Before swaping a=%d b=%d \n",a,b);
// return 0;
// }
//==============================================================================================

//5. Write a program to input a three-digit number and display the sum of the digits.
//Answer

// #include<stdio.h>
// int main() {
// int a;

// printf("Enter a three digit number:");
// scanf("%d",&a);
// int sum=0;
// while(a>0)
// {
// int d=a%10;
// sum+=d;
// a=a/10;
// }
// printf("The sum of digit  is:%d",sum);

// return 0;
// }
                  //OR (WITHOUT ANY LOOPS)

// #include<stdio.h>
// int main() {
// int a;
// printf("Enter a 3 digit number:");
// scanf("%d",&a);

//  int d1=a%10;
//   int remain=a/10;

//  int d2=remain%10;
//  int remain2=remain/10;

//  int d3=remain2%10;
//  int remain3=remain2/10;
//  int sum=d1+d2+d3;
//  printf("The sum of digit is :%d",sum);

// return 0;
// }
//=============================================================================================

//6. Write a program which takes a character as an input and displays its ASCII code.
// Answer
// #include<stdio.h>
// int main() {

//  char code;
//  printf("Enter a character value:");
//  scanf("%c",&code);
//  printf("%d is ASCII Code",code);
// return 0;
// }
//==============================================================================================

//7. Write a program to find the position of first 1 in LSB.

//  #include<stdio.h>
// int main() {
// int a,count=0;
// printf("Enter a number in Binary format:");
// scanf("%d",&a);
 
// while(a!=0)
// {
//    int check=a&1;
//    count++;
//    if(check==1){
//     printf("The position of first 1 in LSB is:%d",count);
//     break;
//      }
//    int shift=a>>1;
//    a=shift;
// }
// return 0;
// }



//=============================================================================================

//*8. Write a program to check whether the given number is even or odd using a bitwise 
//operator
//Answer 

// #include<stdio.h>
// int main() {
// int a;
// printf("Enter a number :");
// scanf("%d",&a);
//    int p=a&1;
//    if(p==1){
//     printf("The number is odd");

//    }else {
//     printf("The number is even");
//    }

// }

//=============================================================================================

//9. Write a program to print size of an int, a float, a char and a double type variable
//Answer

// #include<stdio.h>
// int main() {

// int p,r,s,q;
//  p=sizeof(int);
//  q=sizeof(float);
//  r=sizeof(char);
//  s=sizeof(double);
//  printf("size of int is:%d Byte \n size of float is:%d Byte\n size of char is:%d Byte\n size of double is:%d Byte",p,q,r,s);

// return 0;
// }
//===================================================================================================

//10. Write a program to make the last digit of a number stored in a variable as zero. 
//(Example - if x=2345 then make it x=2340)

// #include<stdio.h>
// int main() {
// int a;
// printf("enter the number:");
// scanf("%d",&a);
// int d=a/10;
// int result=d*10;
// printf("%d",result);

// return 0;
// }                      
  //                OR

// #include<stdio.h>
// int main() {
// int num;
// printf("Enter a number:");
// scanf("%d",&num);
// int unitdigit=num%10;
// printf("%d",num-unitdigit);
// return 0;
// }

//===============================================================================================

/*11. Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)*/

// #include<stdio.h>
// int main() {
// int num,digit;
// printf("Enter a three digit number:\n");
// scanf("%d",&num);
// printf("Enter a digit:");
// scanf("%d",&digit);
// int fourdigit=num*10;//2340
// printf("%d",fourdigit+digit);//2340+9

// return 0;
// }
//=================================================================================================

/*12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD*/

// #include<stdio.h>
// int main() {
// float res,INR;
// printf("Enter the amount in INR:");
// scanf("%f",&INR);
// if(INR>0){
//      res=INR*0.01311f;
// }
// printf("The %f INR in USD is:%f",INR,res);
// return 0;
// }
//=============================================================================================

/*13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right*/

// #include<stdio.h>
// int main() {
// int num;
// printf("Enter a three digit  number:");
// scanf("%d",&num);
// int unitdigit=num%10;
// int remain=num/10;
// int threedigit=unitdigit*100;
// printf("%d",threedigit+remain);
// return 0;
// }

//============================================================================================