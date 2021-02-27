#include <stdio.h>

int main()
{
    int n,arr[100],i,j;
    printf("\n Enter the size : ");
    scanf("%d",&n);
    printf("\n Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=1;i<n;i++){
        printf("%d",arr[i]);
        for(j=i+1;j<n;j++){
            if(j<n-1){
                printf(" ");
            }
            else{
                printf("%d",arr[j]);
            }
        }
        printf("\n");
    }

    return 0;
}