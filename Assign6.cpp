
// 1. Write a program to calculate sum of first N natural numbers

// #include<stdio.h>
// int main() {
// int n,i,sum=0;
// printf("Enter a number:\n");
// scanf("%d",&n);
// printf("The sum of  first %d Natural number is:\n",n);
// for(i=1;i<=n;i++){
//     sum+=i;
// }
// printf("%d",sum);
// return 0;
// }
//===========================================================================================

// 2. Write a program to calculate sum of first N even natural numbers

//   #include<stdio.h>
//   int main() {
//   int i ,sum=0,n;
//   printf("Enter a number:\n");
//    scanf("%d",&n);
//    printf("The sum of  first %d  even Natural number is:\n",n);
//    for(i=2;i<=(n*2);i+=2){
//     sum+=i;
//    }
//    printf("%d",sum);
//   return 0;
//   }
//=========================================================================================

// 3. Write a program to calculate sum of first N odd natural numbers

// #include<stdio.h>
// int main() {
// int i,n,sum=0;
// printf("Enter a number:\n");
// scanf("%d",&n);
// printf("The sum of  first %d  odd Natural number is:\n",n);
// for(i=1;i<(n*2);i+=2){
//     sum+=i;
// }
// printf("%d",sum);
// return 0;
// }
//=========================================================================================

// 4. Write a program to calculate sum of squares of first N natural numbers

// #include<stdio.h>
// int main() {
// int i,n,sum=0;
// printf("Enter a number:\n");
// scanf("%d",&n);
// printf("The sum of  first %d  squares Natural number is:\n",n);
// for(i=1;i<=n;i++){
//     sum+=(i*i);
// }
// printf("%d",sum);
// return 0;
// }
//=======================================================================================

// 5. Write a program to calculate sum of cubes of first N natural numbers

// #include<stdio.h>
// int main() {
// int i,n,sum=0;
// printf("Enter a number:\n");
// scanf("%d",&n);
// printf("The sum of  first %d  cubes Natural number is:\n",n);
// for(i=1;i<=n;i++){
//     sum+=(i*i*i);
// }
// printf("%d",sum);
// return 0;
// } 
//=====================================================================================

// 6. Write a program to calculate factorial of a number

// #include<stdio.h>
// int main() {
// int n,i,prod=1;
// printf("Enter a number:\n");
// scanf("%d",&n);
// printf("Factorial of %d is:\n",n);
// for(i=1;i<=n;i++){
//     prod*=i;
// }
// printf("%d",prod);
// return 0;
// }
//================================================================================

// 7. Write a program to count digits in a given number

//   #include<stdio.h>
//   int main() {
//   int n,d,count=0;
//   printf("Enter a number:\n");
//   scanf("%d",&n);
//   printf("You have enter %d: \n",n);
 
//   while(n!=0){
//      d=n%10;
//     count++;
//     n=n/10;
//   }
//    printf("Digit in the number is:%d  \n",count);
//   return 0;
//   }
//================================================================================

// 8. Write a program to check whether a given number is a Prime number or not
 
//  #include<stdio.h>
//  int main() {
//  int n,i;
//  printf("Enter a number to check prime or not:\n");
//  scanf("%d",&n);
//  if((n==0)|| (n==1)){
//     printf("It's not a prime number:\n");
//  }
//  for(i=2;i<n;i++)
//  {
//     if(n % i==0){
//         printf("The number %d is not prime\n",n);
//         break;
//     }
// }

//     printf("The number %d is prime:\n");
//      break;
    
// return 0;
// }
//                         OR

//  #include<stdio.h>
//  int main() {
//  int n,i,count=0;
//  printf("Enter a number:\n");
//  scanf("%d",&n);

//  for(i=1;i<=n;i++){
//     if(n % i==0){
//         count++;
//     }
//  }
//  if(count==2){
//     printf("The number %d is:PRIME \n",n);
//  }else{
//     printf("The number %d is :NOT PRIME\n",n);
//  }
 
//  return 0;
//  }
   
//=======================================================================
  
  // 9. Write a program to calculate LCM of two numbers

  // #include<stdio.h>
  // int main() 
  // {
  // int i,n1,n2;
  // printf("Enter a  two number:\n");
  // scanf("%d%d",&n1,&n2);
  // for(i=1; i<=n1*n2; i++)
  // {
  //     if((i % n1 ==0) &&(i % n2 ==0))
  //     {
  //         printf("LCM OF %d and %d is:%d",n1,n2,i);
  //         break;
  //     }
  
  // }
  // return 0;
  // }
//======================================================================
// 10. Write a program to reverse a given number

// #include<stdio.h>
// int main() {
// int n,d;
// printf("Enter a number:\n");
// scanf("%d",&n);
// printf("You have Enter %d\n",n);
// while(n!=0){
//     d=n%10;
//     printf("%d",d);
//     n/=10;
// }
// return 0;
// }

//                             OR

// #include<stdio.h>
// int main() {
// int n,d,rev=0;
// printf("Ente a number:\n");
// scanf("%d",&n);
// while(n!=0){
//   d=n%10;
//   rev=rev*10+d;
//   n=n/10;
// }
// printf("Reverse is:%d",rev);
// return 0;
// }