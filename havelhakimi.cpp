#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Elemanları yer değiştir
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vertex;
    int total=0;
    printf("How many vertices will be drawn? ");
    scanf("%d",&vertex);
    int arr[vertex]={0};

    printf("write the degree of vertices\n");
    for(int i=0; i<vertex; i++ ){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<vertex; i++ ){
        printf("%d",arr[i]);
    }


    bubbleSort(arr,vertex);

    if(arr[0]>=vertex){
        printf("\ncan t draw (vertex degree out of range)");
        return 0;
    }

    while (1){

        total = 0 ;
        for(int i=1; i<=arr[0];i++){
            arr[i]--;
            if(arr[i]<0){
                printf("\ncant draw(Has negative value)");
                return 0;
            }
        }
        arr[0]=0;
        bubbleSort(arr,vertex);
        for(int i=0;i<vertex;i++){
            total += arr[i];
        }
        
        if(total==0){
            printf("\ncan draw !!!");
            return 0;
        }

    }

    return 0;
}