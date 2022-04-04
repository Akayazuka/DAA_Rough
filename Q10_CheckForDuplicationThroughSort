#include <iostream>

using namespace std;
void merge(int a[],int beg,int mid,int end){
    int i,j,k;
    int n1=mid-beg+1;
    int n2=end-mid;
    int leftArr[n1],rightArr[n2];
    for(i=0;i<n1;i++){
        leftArr[i]=a[beg+i];
    }
    for(j=0;j<n2;j++){
        rightArr[j]=a[mid+j+1];
    }
    i=0,j=0,k=beg;
    while(i<n1 && j<n2){
        if(leftArr[i]>rightArr[j]){
            a[k]=rightArr[j];
            j++;
        }
        else{
            a[k]=leftArr[i];
            i++;
        }
        k++;
    }
    while(i<n1){
        a[k]=leftArr[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=rightArr[j];
        j++;
        k++;
    }
}

void mergesort(int a[],int beg,int end){
    if(beg<end){
        int mid=(end+beg)/2;
        mergesort(a,beg,mid);
        mergesort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}
bool findDup(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==a[i+1]){
            return true;
        }
    }
    return false;
}
void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
    printf("\n");  
}  

int main()  
{  
    int a[] = { 12, 31, 25, 8, 32, 17, 42,50,5,12};  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    printArray(a, n);  
    mergesort(a, 0, n - 1);  
    printf("After sorting array elements are - \n");  
    printArray(a, n);  
    if(findDup(a,n)){
        printf("There are duplicates in the array\n");
    }
    else{
        printf("There are no duplicates in the array\n");
    }
    return 0;  
}  
