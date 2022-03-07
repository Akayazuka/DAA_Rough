#include <iostream>
#define max 50

using namespace std;

int main()
{
    int arr[max];
    int len,x;
    cout<<"Enter the length of array: ";
    cin>>len;
    for(int i=0;i<len;i++){
        cout<<endl<<"Enter an element: ";
        cin>>x;
        arr[i]=x;
    }
    int key;
    cout<<endl<<"Enter a key element: ";
    cin>>key;
    int c=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(arr[i]-arr[j]==key){
                c++;
            }
        }
    }
    if(c==0){
        cout<<"Key is not present!"<<endl;
    }
    else{
        cout<<c;
    }
    return 0;
}
