/*
Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
For example,
Input:
Enter the first number: 2020

Enter the second number: 2040

Output:
The array is: 2020, 2024, 2028, 2032, 2036, 2040

*/
#include<stdio.h>
main()
{
int a[10];
int n,i,z;

printf("enter year = :");
scanf("%d",&n);


printf("enter year 2  :");
scanf("%d",&z);


for(i=n; i<=z; i++){
if(n%4==0){
printf("%d\t",a[i]);
}else{

}
}
for(i=0; i<n; i++){
printf("%d",i);
}

}

