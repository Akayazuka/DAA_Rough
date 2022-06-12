#include <iostream>
#include<cmath>

using namespace std;


int jumpSearch(int arr[],int size,int key){
    int start=0;
    int end=sqrt(size);
    while(arr[end]<=key && end<size){
        start=end;
        end+=sqrt(size);
        if(end>size-1){
            end=size-1;
        }
    }
    for(int i=start;i<=end;i++){
        if(arr[i]==key) return i;
    }
    return -1;
}

int main()
{
   int n, searchKey, loc;
   cout << "Enter number of items: ";
   cin >> n;
   int arr[n]; //create an array of size n
   cout << "Enter items: " << endl;

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

   cout << "Enter search key to search in the list: ";
   cin >> searchKey;
   if((loc = jumpSearch(arr, n, searchKey)) >= 0)
      cout << "Item found at location: " << loc << endl;
   else
      cout << "Item is not found in the list." << endl; 
}
