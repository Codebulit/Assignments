// 1. Write a program to find the Nth term of the Fibonnaci series.

// #include<stdio.h>
// int main() {
// int current_value=1,perivous_value=0,next_value=0,n,i;
// printf("Enter n terms of fibonacci series:\n");
// scanf("%d",&n);

// for(i=1;i<=(n-2);i++)
// {
//     next_value=perivous_value + current_value;
//     perivous_value=current_value;
//     current_value=next_value;
// }
// if(next_value==n){
//     printf("%d ",next_value);
// }else{
//     printf("not present in series:");
// }
// return 0;
// }

// 2. Write a program to print first N terms of Fibonacci series
//  #include<stdio.h>
//  int main() {
//  int current_value=1,perivous_value=0,next_value=0,n,i;
//  printf("Enter n terms of fibonacci series:\n");
//  scanf("%d",&n);
//  printf("%d %d",perivous_value,current_value);
//  for(i=1;i<=(n-2);i++)
//  {
//      next_value=perivous_value + current_value;
//      printf("%d ",next_value);
//      perivous_value=current_value;
//      current_value=next_value;
//  }
//  return 0;
//  }
//========================================================================================

// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.

// #include<stdio.h>
// int main() {
// int current_value=1,perivous_value=0,next_value=0,n,i;
// printf("Enter n terms of fibonacci series:\n");
// scanf("%d",&n);

// for(i=1;i<=(n-2);i++)
// {
//     next_value=perivous_value + current_value;
//     perivous_value=current_value;
//     current_value=next_value;
// }
// if(next_value==n){
//     printf("%d ",next_value);
// }else{
//     printf("not present in series:");
// }
// return 0;
// }
//===========================================================================================

// 4. Write a program to calculate HCF of two numbers
//  #include<stdio.h>
//    int main()
//    {
//    int i,n1,n2,lcm,hcf;
//    printf("Enter a  two number:\n");
//    scanf("%d%d",&n1,&n2);
//    for(i=1; i<=n1*n2; i++)
//    {
//        if((i % n1 ==0) &&(i % n2 ==0))
//        {
//            printf("LCM is:%d\n",i);
//            lcm=i;
//            break;
//        }

//   }
//       printf("HCF:\n");
//       hcf=(n1*n2)/lcm;
//       printf("%d",hcf);
//   return 0;
//   }
//=============================================================================================
// 5. Write a program to check whether two given numbers are co-prime
// numbers or not

//   #include<stdio.h>
//   int main()
//   {
//   int i,n1,n2,lcm,hcf;
//   printf("Enter a  two number:\n");
//   scanf("%d%d",&n1,&n2);
//   for(i=1; i<=n1*n2; i++)
//   {
//       if((i % n1 ==0) &&(i % n2 ==0))
//       {
//           printf("LCM is:%d\n",i);
//           lcm=i;
//           break;
//       }

//   }
//       printf("HCF:");
//       hcf=(n1*n2)/lcm;
//       printf("%d",hcf);
//         if(hcf==1){
//      printf("\n Co-prime number:");
//         }
//   return 0;
//   }
//=======================================================================

// 6. Write a program to print all Prime numbers under 100

// #include <stdio.h>
// int main()
// {
//     int n, i,flag ;
//     for (n = 2; n <= 100; n++)
//     {        flag=0;
//         for (i = 2; i < =n/2; i++)
//         {
//             if (n % i == 0)
//             {
//                 flag = 1;
//             }
//         }
//             if (flag == 0)
//             {
//                 printf("%d ", n);
//             }
//     }
//     return 0;
// }
//=======================================================================================

// 7. Write a program to print all Prime numbers between two given numbers


// #include <stdio.h>
// int main()
// {
//     int n, i,flag,n1,n2 ;
//     printf("Enter number to get prime between two:");
//     scanf("%d%d",&n1,&n2);
//     for (n = n1; n <= n2; n++)
//     {        flag=0;
//         for (i = 2; i <= n/2; i++)
//         {
//             if (n % i == 0)
//             {
//                 flag = 1;
//             }
//         }
//             if (flag == 0)
//             {
//                 printf("%d ", n);
//             }
//     }
//     return 0;
// }

// 8. Write a program to find next Prime number of a given number

// #include <stdio.h>
// int main()
// {
//     int n, i,flag,num ;
//    // printf("Enter a number:\n");
//    // scanf("%d",&num);
//     for (n =5 ; 1; n++)
//     {        flag=0;
//         for (i = 2; i <= n/2; i++)
//         {
//             if (n % i == 0)
//             {
//                 flag = 1;
//             }
//         }
//             if (flag == 0)
//             {
//                 printf("%d ", n);
//                 break;
//             }
//     }
//     return 0;
// }

//======================================================================================
// 9. Write a program to check whether a given number is an Armstrong number
// or not
//  #include<stdio.h>
//  #include<math.h>
//  int main() {
//  int unit_digit,p,n,count=0,sum=0,d;
//  printf("Enter a number :\n");
//  scanf("%d",&n);
//   while(n!=0)//count the digit
//  {
//      d =n%10;
//      count++;
//     n=n/10;

// }
// while (n!=0)//power of unit digit upto count
// {
//     /* code */
//   unit_digit =n%10;
//    p=pow(unit_digit,count);
//    sum+=p;
//    n/=10;
// }

//   if(sum==n)
//   {
//     printf("it's a Armstrong number:\n");
//   }
// else
// {
//     printf("it's not Armstrong number:\n");
// }

// return 0;
// }
//====================================================================================
