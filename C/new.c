// Decimal to binary conversion using recursion
int dbin(int n)
{
    if (n == 0)
        return 0;
    else
        return (n%2+10*dbin(n/2));//(n%10+2*BinaryToDecimal(n/10))
}
 
int main()
{
    int decimal_number;
	printf("Enter decimal:");
	scanf("%d",&decimal_number);
    printf("%d", dbin(decimal_number));
    return 0;
}






2. Binary To Decimal conversion
#include<stdio.h>
int BinaryToDecimal(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10+2*BinaryToDecimal(n/10));
}
int main()
{
    int n;
    printf("Enter Binary:");
    scanf("%d",&n);
    printf("Decimal Value is: %d",BinaryToDecimal(n));
}

3.//Fibonacci series an example of "Binary Recursion" and "Non-Tail Recursion"
#include<stdio.h>
int Fib(int n)//0 1 1 2 3 5
{   if( n == 1)
         return 0;
   else if( n == 2)
         return 1;   
   else  return Fib(n-1) + Fib(n-2);   } 
 int main()
{   int n, i;
    printf("enter the no. of terms: \n");
	scanf("%d",&n);
	if(n<=0) printf("\nNO Fibonacci series Exists \n");
    else 	{
	printf("\nFibonacci series: \n");
	for (i=1;i<=n;i++)
        {	  printf(" %d ",Fib(i));}
   }}

4. //Example: Indirect Recursion: WAP to test a number as- even or odd
  int even(int n)
{  	if(n==0)
	return 1;
	else odd(n-1);}
int odd(int n) 
{	if(n==0)
     return 0;
	else  even(n-1);}
main()
{	int n,z;
printf("enter a number to test if even or Odd:\n");
scanf("%d",&n);
	z=even(n);
	if(z)
	printf("even");
	else printf("odd");  }

5. //Calculate the power of any number using Recursion
long int CalcuOfPower(int x,int y)
{   long int result=1;
    if(y == 0) return result;
    result=x*(CalcuOfPower(x,y-1));  //calling the  function CalcuOfPower itself recursively
}
int main()
{
    int bNum,pwr;
    long int result;
    printf(" Input the base  value : ");
    scanf("%d",&bNum);
    printf(" Input the value of power : ");
    scanf("%d",&pwr);
    result=CalcuOfPower(bNum,pwr);//called the function CalcuOfPower
    printf(" The value of %d to the power of %d is : %ld\n\n",bNum,pwr,result);
    return 0;
}

6. //reverse a number using tail-recursion 
#include <stdio.h>

int rev_fun(int num, int z) {
    if (num == 0)
        return z;
    else
        return rev_fun(num / 10, z * 10 + num % 10);
}

int main() {
    int num, rev_num;
    printf("\nEnter any number: ");
    scanf("%d", &num);
    rev_num = rev_fun(num, 0);
    printf("\nAfter reverse, the number is: %d\n", rev_num);
    return 0;
}


7. //Linear search
int main()
{  int num;
     int i,  keynum, found = 0;
 scanf("%d", &num);
    int array[num];
    for (i = 0; i < num; i++)
               scanf("%d", &array[i]);
    scanf("%d", &keynum);
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("%d",i);
    else
        printf("Key does not exist\n");
}

8. /* A binary search algorithm is used to find the position of a 
specific value contained in a sorted array. Working with the 
principle of divide and conquer, this search algorithm can be 
quite fast, but the restriction is that the data has to be in a 
sorted form. It works by starting the search in the middle of 
the array and working going down the first lower or upper half 
of the sequence. If the median value is lower than the target 
value, that means that the search needs to go higher, if not,
 then it needs to look on the descending portion of the array.*/
#include <stdio.h>
/* checksorted(int a[],int n)
{	int i;
	for(i=0;i<n;i++)
	{if(a[i]>a[i+1])
	return 0;
		}
return 1;}  */
main()
{
int First,Last,Middle,Val,flag=0,N, Pos, i,ct=0;
int Series[20]; /*The list of N sorted numbers*/
printf ("\n Enter the size of the list");
scanf ("%d", &N);
printf ("\n Enter the sorted list one by one:");
for (i = 0; i< N; i++)
{scanf ("%d", &Series[i]);}
//if(checksorted(Series,N)==0)
//printf("List is not sorted");
//else
{
printf ("\n Enter the number to be searched");
scanf ("%d", & Val);
/* BIN SEARCH begins */
flag = 0;First = 0;Last = N - 1;
while (First <= Last)//when first is greater than last, loop terminates
{
Middle = (First + Last)/2;printf ("\n The middle value:%d", Series [Middle]);
if (Series [Middle] == Val)
{Pos= Middle;
flag = 1;ct++;
break;}
else if (Series[Middle] < Val)
First = Middle + 1;
else
Last =Middle - 1;  ct++;}
if (flag == 1)
printf ("\n The value found at %d", Middle+1);
else
printf ("\n The value not found");
}
printf("\n no. of comparisons:%d",ct);
}

8. //Sum_diagonals of a matrix
main() {
   int arr[10][10],n1,n2, i, j, sum=0;
    printf("\nEnter the size of matrix :");
   scanf("%d%d", &n1,&n2);
   printf("\nEnter the values :");
   for (i = 0; i <n1; i++) 
      for (j = 0; j <n2; j++) 
         scanf("%d", &arr[i][j]);
      
   puts("\nGiven matrix is");
   for (i = 0; i <n1; i++) {
            for (j = 0; j < n2; j++) {
         printf("%d ", arr[i][j]);
      }  printf("\n"); }
  
  
  
    /* Find transpose */
   for (i = 0; i <n1; i++) {
      for (j = 0; j <n2 ;j++) {
         if(n1>=n2)
		 {
		 	if(i==j||i+j==(n2-1)) 
		 	sum +=arr[i][j];
		  } 
		  else {
		  	if(i==j||i+j==(n1-1))
		 	sum +=arr[i][j];
		  }
               }   }
    printf("Sum of diagonals=%d ",sum);
  
 }

9. //Matrix Multiplication
#include <stdio.h>
int main()
{
int a[10][10],b[10][10],mult[10][10]={0},r1,c1,r2,c2,i,j,k;
    puts("Enter size of 1st Matrix");
	scanf("%d%d", &r1, &c1);
	 puts("Enter size of 2nd Matrix");
    scanf("%d%d",&r2, &c2);
/* If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again. */
    if(c1!=r2)
    {
printf("Error! Multiplication not possible.");
return 0;
            }
/* Storing elements of first matrix. */
  printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; ++i)
    for(j=0; j<c1; ++j)
      scanf("%d",&a[i][j]);
/* Storing elements of second matrix. */
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
    for(j=0; j<c2; ++j)
    {   scanf("%d",&b[i][j]);    }

/* Multiplying matrix a and b and storing in array mult. */
    for(i=0; i<r1; ++i)
    for(j=0; j<c2; ++j)
    for(k=0; k<c1; ++k) 
          mult[i][j] +=a[i][k]*b[k][j];    
/* Displaying the multiplication of two matrix. */
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
    {for(j=0; j<c2; ++j)
        printf("%d  ",mult[i][j]);
         printf("\n");
    }
    return 0;
}

10. // C program to delete an element from a given position in an array
#include <stdio.h>
int main() {
    int arr[] = { 10, 20, 30, 40 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos = 2;
    printf("Array before deletion\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Delete the element at the given position
    for (int i = pos; i < n; i++) 
        arr[i - 1] = arr[i];
    if (pos <= n)
        n--;
    printf("\nArray after deletion\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

11. /* C Program to to find the sum of even and odd numbers of an array with user defined function*/
#include<stdio.h>
int even_sum(int a[], int Size)
{
int j,sum=0;
while(j<Size)
 {
   if(a[j] % 2 == 0)
   { 	sum = sum + a[j];   }
 j++;}
return sum;
}
int odd_sum(int a[], int Size)
{
int j,sum=0;;
while(j<Size)
 {
   if(a[j]%2==1)
   { sum = sum + a[j];   }
 j++; }
return sum;
}
#include<stdio.h>
int main()
{
 int Size, i, j = 0, a[10];
 int Even_Sum = 0, Odd_Sum = 0;
 printf("\n Please Enter the Size of an Array : ");
 scanf("%d", &Size);
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 { scanf("%d", &a[i]); } 
 
 printf("\n The Sum of Even Numbers in this Array = %d ", even_sum(a,Size));
 printf("\n The Sum of Odd Numbers in this Array = %d ", odd_sum(a,Size));
 return 0;
}

12. //WAP to find first,second and third largest no.(without sorting)
#include<stdio.h>
#include <limits.h>
int main() 
{   int arr[] = {10,11,-2,3,-4,15,-9,8,16,15,12};  int i;
    int first = INT_MIN; int second = INT_MIN; int third = INT_MIN;
      for(i=0;i<11;i++)
     {   if(arr[i]>first)
         first = arr[i];  }
     for(i=0;i<11;i++)
       { if (arr[i]>second && arr[i]<first)
            second = arr[i];}
    for(i=0;i<11;i++)
    {if(arr[i]>third && arr[i]<second)
    third=arr[i];
    }	printf("First = %d\n", first); printf("Second = %d\n", second);
    printf("third = %d\n", third);  }

13. 
//Call by value example: swapping of two values
void swap(int,int);
int main()
{	int p=10,q=23;
printf("In main() before calling swap() p=%d q=%d\n",p,q);
	swap(p,q);//call by value
printf("In main() after calling swap() p=%d q=%d\n",p,q);
return 0; }
void swap(int a,int b)
{
int t;
printf("In swap() before swap-logic a=%d b=%d\n",a,b);
t=a;
a=b;
b=t;	
printf("In swap() after swap-logic a=%d q=%d\n",a,b);
}

//Call by Reference example: swapping of two values
void swap(int*,int*);//function declaration
int main()
{
	int p=10,q=23;
printf("In main() before calling swap() p=%d q=%d\n",p,q);
	swap(&p,&q);//call by reference
printf("In main() after calling swap() p=%d q=%d\n",p,q);
return 0;
}
void swap(int *a,int *b)
{
	int t;
printf("In swap() before swap-logic p=%d q=%d\n",*a,*b);
t=*a;
*a=*b;
*b=t;	
printf("In swap() after swap-logic p=%d q=%d\n",*a,*b);
}

14.  // WAP to find GCD(or HCF) of 2 numbers:Euclid's method(recursion).
#include <stdio.h>
int gcd(int a, int b)
{    if (a == 0)
        return b;
    return gcd(b%a,a);
}
 int main()
{
   int n1=24, n2=60;
    //printf("Enter two integers: ");
    //scanf("%d %d", &num1, &num2);
    printf("GCD= %d",gcd(n1,n2));
}
//gcd(60,45)=>gcd(45,60)->gcd(15,45)=>(45%15,15)=>(0,15)

Other questions, that may be asked in similar way, as:
1. Scenario based questions to find:
a. maximum, minimum and average within 1d array.
b. second largest or second smallest within 1d array.
c. searching a particular thing within an array (using functions).

2. Fibonacci term, complete series (fill the missing code)
a. using loops
b. using recursion

3. 
a. complete: 30, 31, 32 for preparing functions and 35.1 Exercises with Recursion 
b. 37.1, 37.2, 38,39 for scope and storage classes
c. 40, 41,42 for arrays
d. 44.1 Function with 1d array
e. 48.1 parameter passing methods