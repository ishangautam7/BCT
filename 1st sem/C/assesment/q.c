#include<stdio.h>

int main(){
    int arr1[10][10];
    int odarr[30];
    int sortarr[10][10];
    int check;
    printf("Enter the elements of 4x4 matrix: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Displaying elements\n");

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    //converting to 1-D array

    int k=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            odarr[k] = arr1[i][j];
            k++;
        }
    }

    //sorting the 1-D array

    for(int i=0; i<16; i++){
        for(int j=i+1; j<16; j++){
            if(odarr[j]<odarr[i]){
                int temp = odarr[i];
                odarr[i] = odarr[j];
                odarr[j] = temp;
            }
        }
    }

    printf("\n Displaying sorted\n");
    for(int i=0; i<16; i++){
        printf("%d ", odarr[i]);
    }

    //converting back to 2-D array

    int l=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sortarr[i][j] = odarr[l];
            l++;
        }
    }

    printf("\n Displaying sorted 2-D array\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", sortarr[i][j]);
        }
        printf("\n");
    }

    //Displaying prime elements from diagonal

    printf("Prime elements from diagonal are: ");
    for(int i=0; i<4; i++){
        check = sortarr[i][i];
        int isPrime=0;

        for(int x=2; x<check; x++){
            if(check%x==0){
                isPrime=1;
                break;
            }
        }

        if(isPrime==0){
            printf("%d ", sortarr[i][i]);
        }
    }


        //Displaying secondary elements from diagonal

    printf("Prime elements from diagonal are: ");
    for(int i=0; i<4; i++){
        check = sortarr[i][3-i];
        int isPrime=0;

        for(int x=2; x<check; x++){
            if(check%x==0){
                isPrime=1;
                break;
            }
        }

        if(isPrime==0){
            printf("%d ", check);
        }
    }
}