/*
Q.3 Write a Program to find square of each element from the given array.
For example,
Input:
Enter array size: 5

Enter array elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2


Output:
The squares are: 49, 16, 81, 25, 4
*/
#include<stdio.h>

 int main()
{
int a[1000],b[1000],maerg[1000];
int n,i,n1,k;

printf("enter count :-");
scanf("%d",&n);
printf("enter count :-");
scanf("%d",&n1);
a[n];
b[n1];


for(i=0; i<n; i++){
printf("enter count A : ");
scanf("%d",&a[i]);

}

for(i=0; i<n1; i++){
printf("enter count B : ");
scanf("%d",&b[i]);

}
for(i=0; i<n; i++){
maerg[i]=a[i];
}

for(i=0; i<n; i++){
maerg[n+i]=b[i];


}

for(i=0; i<n+n1; i++){
printf("  %d",maerg[i]);

}
