#include <stdio.h>
int main(){
    int n;
    printf("How many elements?");
    scanf("%d",&n);
     int arr[n];
    printf("Enter the elements:");
   for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
   }
   printf("the elements\n");
      for(int i = 0; i < n; i++){
    printf("%d\n",arr[i]);
   }
   printf("Enter the index to change and update the element");
   int index,item;
   scanf("%d %d",&index,&item);
   
   arr[index] = item;
   printf("Updated element along with full elements in the array\n");
     for(int i = 0; i < n; i++){
    printf("%d\n",arr[i]);
   }

    return 0;
}
