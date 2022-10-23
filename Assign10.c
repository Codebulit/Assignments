//1. Write a function to calculate the area of a circle. (TSRS)

// #include<stdio.h>

// float area_circle(float);
// int main()
// {
//     float r,result;
//     printf("Enter a radius of circle:\n");
//     scanf("%f",&r);
//    result= area_circle(r);
//  printf("The area of the circle is:%f",result);
//     return 0;
// }

// float area_circle(float r)
// {
//     float pi= 3.14f;
//     float area = pi*r*r;
//     return area;
// }
//============================================================================

//2. Write a function to calculate simple interest. (TSRS)

// #include<stdio.h>

// float simple_interest(float ,float ,float );
// int main()
// { 
//     float p,r,t,result;
//     printf("Enter principle,rate,time to get simple interest:\n");
//     scanf("%f%f%f",&p,&r,&t);
//     result =simple_interest(p,r,t);
//     printf("The Simple interest is:%f",result);
//     return 0;

// }

// float simple_interest(float p,float r,float t)
// {
//     float SI=(p*r*t)/100;
//     return SI;
// }

//===========================================================================

//3. Write a function to check whether a given number is even or odd. Return 1 if the 
//number is even, otherwise return 0. (TSRS)

// #include<stdio.h>

// int check(int );
// int main()
// {
//   int a,result;
//   printf("Enter a number:\n");
//   scanf("%d",&a);
//   result= check(a);
//   if(result==1){

//   printf("Even number:\n");
//   }
//   else{
//     printf("Odd number:\n");
//   }

// }

// int check(int a)
// {
//     if( a % 2==0)
//     {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

//=====================================================

//4. Write a function to print first N natural numbers (TSRN).

// #include<stdio.h>

// void count(int );
// int main()
// {
//      int n;
//      printf("Enter a number to first natural number :\n");
//      scanf("%d",&n);
//      count(n);
//     return 0;
// }

// void count(int n)
// {
//     if( n>0)
//     { 
//          count(n-1); 
//        printf(" %d",n);
//     }
// }

//===================================================================================

//5. Write a function to print first N odd natural numbers. (TSRN)

// #include<stdio.h>

// void count(int );
// int main()
// {
     
     
//     return 0;
// }

// int odd(int n)
// { 
//     int i;
//     for(i=1;i<=n;i+=2){
//         printf("%d",i);
//     }
//     return 
// }
//=============================================================================
//  6. Write a function to calculate the factorial of a number. (TSRS)
// #include<stdio.h>
//  int fact(int);

// int fact(int a)//(TSRS)
// {    int i=1;
//      int fac=1;
//     for(i=1;i<=a;i++){
//          fac=fac*i;
//     }
//     return fac;
// }
// int main(){
//     int x;
//   printf("Enter a number\n");
//   scanf("%d",&x);
//    printf("%d",fact(x));
//     return 0;


// }
//============================================================================================
// 7. Write a function to calculate the number of combinations one can make from n items 
// and r selected at a time. (TSRS)

   // #include<stdio.h>
   // int fact(int );
   // int com(int ,int);


   // int main(){
   //  int n,r;
   //  printf("Combination\n");
   //  printf("Enter a no. of item \n");
   //  printf("Enter a Selected item\n");
   //  scanf("%d",&n);
   //  scanf("%d",&r);
   //  int result = com(n,r);
   //  printf("%d",result);
    
   //  return 0;

   // }

   // int fact(int n)
   // { int i=1,p=1;
    
   //  for(i=1;i<=n;i++)
   //  {
   //       p=p*i;
   //   }
   //  return p;
   // }

   // int com(int n,int r ){
   // int c= fact(n)/((fact(r)) *(fact(n-r))) ;
   // return c;
   // }

//==========================================================================================
// 8. Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)

//  #include<stdio.h>
//    int fact(int );
//    int perm(int ,int);



//    int main(){
//     int n,r;
//     printf("Permutation\n");
//     printf("Enter a no. of item \n");
//     printf("Enter a Selected item\n");
//     scanf("%d",&n);
//     scanf("%d",&r);
//     int result = perm(n,r);
//     printf("%d",result);
    
//     return 0;

//    }

//    int fact(int n)
//    { int i=1,p=1;
    
//     for(i=1;i<=n;i++)
//     {
//          p=p*i;
//      }
//     return p;
//    }

   

//    int perm(int n,int r){
//       return fact(n)/(fact(n-r)) ;
//    }

//============================================================================================
// 9. Write a function to check whether a given number contains a given digit or not.(TSRS)
//  #include<stdio.h>
//  int digit(int a,int b);


//  int digit(int a,int b)
//  {
//     while(a!=0)
//     {
//         int n = a % 10;
//         if(b==n)
//         {
          
//           return 1;
            
//         }
//        a = a/10;
//     }
//     return 0;

//  }
// int main(){
//     int a,b;
//     printf("Enter a number\n");
//     printf("Enter a digit\n");
//     printf("if given number contains a given digit it will return 1 else return 0\n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     int result =digit(a,b);
//     printf("%d",result);
//     return 0;
// }   

//==============================================================================================

//10. Write a function to print all prime factors of a given number. For example, if the 
//number is 36 then your result should be 2, 2, 3, 3. (TSRN)
 
//  #include<stdio.h>


// void prime_fact(int a)
// {   int i;
//    for(i=2;a!=1;i++)
//    {    
//       while(a % i==0)
//       {
//          a= a /i;
//          printf("%d,",i);

//       }
      
//    }
// }
//  int main()
//  {
//     prime_fact(36);
//    return 0;
//  }









