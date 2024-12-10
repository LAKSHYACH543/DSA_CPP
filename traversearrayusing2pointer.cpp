#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of an array";
    cin>>n;
    int arr[n];
    cout<<"enter an array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<"the reverse of an array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        return 0;
}
