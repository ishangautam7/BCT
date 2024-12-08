#include<stdio.h>

void operate(int arr[],int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[j]>arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        printf("\n The descending order is\n");
        for(int i=0; i<size; i++){
            printf("%d", arr[i]);
        }

        printf("\n The ascending order is\n");
        for(int i=size; i>=0; i--){
            printf("%d", arr[i]);
        }

        printf("\nThe largest element is %d", arr[0]);
        printf("\nThe smallest element is %d", arr[size-1]);

}


int main(){   
int arr[10] = {1, 3, 5, 2, 6, 8, 1};
int size = 7;

operate(arr, size);
}