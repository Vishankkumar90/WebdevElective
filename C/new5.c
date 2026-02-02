#include <stdio.h>

int main() {
    int n, key;
    printf("Enter size of array\n");
    scanf("%d",& n);
    int arr[n];
    printf("Enter array elements\n");
    
    for (int i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    
   
    printf("Enter key\n");
    scanf("%d",& key);

    int found=0;
     for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Key found at index %d\n",i );
            found =1;
            break;

        }
     }

     if(!found){
        printf("Not found\n");
     }

    return 0;
}