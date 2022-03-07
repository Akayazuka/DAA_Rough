#include <iostream>
using namespace std;
#define max 50

int main()
{
    int arr[max];
    int len;
    cout<<"Enter the size of array: ";
    cin>>len;
    int x;
    for(int s=0;s<len;s++){
        cout<<endl<<"Enter no. in ascending order:";
        cin>>x;
        arr[s]=x;
    }
    for(int k=1;k<len;k++){
        for(int j=0;j<len;j++){
            for(int i=0;i<len;i++){
                if(arr[i]+arr[j]==arr[k]){
                    cout<<i+1<<" "<<j+1<< " "<<k+1<<endl;
                }
            }
        }
    }
    
    return 0;
}
