#include <stdio.h>

int main()
{
    printf("How many elements?");
    int n;
    scanf("%d", &n);
    int arr[n];
    int start = 0, end = n - 1;
    int temp = 0,middle = 0,z = 0;
    printf("Enter the elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


printf("Enter the element you want to search");
int target;
scanf("%d",&target);
 while(start <= end){
     middle = (start + end)/2;
     if(target == arr[middle]){
         z = 1;
         break;
        
     }
     else if(target < arr[middle]){
         end = middle - 1;
        
     }else{
         start =  middle + 1;
     }
 }   

if(z == 1){
    printf("found");
}else{
    printf("not found");
}
    return 0;
}
