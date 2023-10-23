// Online C compiler to run C program online
#include <stdio.h>
int main() {
   int a[100],b[100], c[200], i,j, size1, size2;
   
   printf("Enter size1\n");
   scanf("%d", &size1);
   printf("Please enter %d elements\n", size1);
   for(i=0;i<size1;i++)
   scanf("%d", &a[i]);
   
   printf("Enter size2\n");
   scanf("%d", &size2);
   printf("Please enter %d elements\n", size2);
   for(j=0;j<size2;j++)
   scanf("%d", &b[j]);

for(i=0;i<size1;i++)
c[i] = a[i];
for(i=0;i<size2;i++)
c[i+size1]=b[i];
   
for(i=0;i<(size1+size2);i++)
printf("%d", c[i]);
   
    return 0;
}
