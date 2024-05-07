#include<stdio.h>
int main () {
int n;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
printf("Enter the array containing 0s and 1s :");
for (int  i = 0; i <n; i++)
{
    scanf("%d",&a[i]);
}

int count=0;
for(int i=0;i<n;i++){
    if(a[i]==0){
        count++;
    }
} 

for(int i=0;i<count;i++){
    a[i]=0;
}

for(int i=count;i<n;i++){
    a[i]=1;
}
printf("The segregated array is :");
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}

 return 0;
}