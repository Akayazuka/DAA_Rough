#include <iostream>
using namespace std;
#define max 50

int main()
{
    int arr[max];
    int x,i=0;
    char k;
    while(1){
        cout<<"Enter no. in ascending order: ";
        cin>>x;
        arr[i]=x;
        cout<<endl<<"Press [Y/N] ";
        cin>>k;
        if(k=='N' or k=='n'){
            break;
        }
        
    }
    int key;
    cout<<endl<<"Enter a key:";
    cin>>key;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==key){
            int r=0;
            for(int j=i;j<sizeof(arr)/sizeof(arr[0]);j++){
                if(arr[j]==key){
                    r++;
                }
            break;    
            }
            cout<<"Key found!"<<endl;
            cout<<"It occured "<<r<<" times.";
        }
    }
    return 0;
}
