/*UNCOMMEMT THE PARTICULAR CODE BELOW THE QUESTION TO GET THE SOLUTION*/


//1. Write a program to print Hello Students on the screen.

// #include<stdio.h>

// int main() {
// printf("Hello Students");
// return 0;
// }

//--------------------------------------=========================


//2. Write a program to print Hello in the first line and Students in the second line.
  /*\n use for new line*/

// #include<stdio.h>
// int main() {
// printf("Hello \nStudents");
// return 0;
// }
//-----------------------------------------===========================

//3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
/*\" use for Double Quotes*/

// #include<stdio.h>
// int main() {
// printf("\"MySirG\"");
// return 0;
// }
//=================================================================

/*4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area 
& R with radius.*/
//Answer

// #include<stdio.h>
// int main() {
// float pi=3.14f;
// float r;
// printf("Enter the radius of circle:");
// scanf("%f",&r);//&-->Addres of 
//   float area= pi*r*r;
//   printf("Area of circle is %f having the radius %f",area,r);

// return 0;
// }

//------------------------------=====================================
//5. WAP to calculate the length of String using printf function.

// #include<stdio.h>
// int main() {
// int strlen;
// strlen=printf("Incredible INDIA ");
// printf(" \n The length of String is:%d",strlen);
// return 0;
// }

//-----------------------------------------------------=================


/*6. WAP to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar”*/

//Answer

// #include<stdio.h>
// int main() {
// printf("Enter Your Good name:");

// /*What data type is a string in C?
// The C language does not have a specific "String" data type, 
// the way some other languages such as C++ and Java do.
//  Instead C stores strings of characters 
//  as arrays of chars, terminated by a null byte.
// */
//  char str[50];//string declaration
// scanf("%s",&str);
// gets(str);
// printf("\"Hello, %s \"",str); doubt

// return 0;
// }

//=====================================================================
//7.WAP to print “%d” on the screen.
//Answer

// #include<stdio.h>
// int main() {
//     char a='%';
//     char b='d';
// printf("\"%c%c\"",a,b);
// return 0;
// }

//================================================================
//8.WAP to print “\n” on the screen.

//Answer
// #include<stdio.h>
// int main() {

// char a='\\';
// char b = 'n';

// printf("%c%c",a,b);
// return 0;
// }
//============================================================================

//9. WAP to print “\\” on the screen.

#include<stdio.h>
int main() {
  //char a='';
printf("\\\\");
return 0;
}

/*10. WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)*/

// #include<stdio.h>
// int main() {
// printf("Enter the Date in DD/MM/YYYY:");
// int a,b,c;
// scanf("%d/%d/%d",&a,&b,&c);//doubt
// printf("Day-%d,Month-%d,Year-%d",a,b,c);

// return 0;
// }

//===========================================================================================
/*11. WAP to take time as an input in below given format and convert the time format and 
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute”*/

// #include<stdio.h>
// int main() {
// int hour,min;
// printf("Enter time  \"HH:MM\"");
// scanf("%d:%d",&hour,&min);
// printf("\"%d Hour and %d Minute\"",hour,min);

// return 0;
// }

//==========================================================================



// 12. find output

// #include<stdio.h>
// int main()
// {
    
// int x = printf(“ineuron”);//error
// printf(“%d”,x);
// return 0;
// }