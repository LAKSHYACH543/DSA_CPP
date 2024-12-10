#include <iostream>
#include<climits>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,89};
    int max=INT_MIN;
    int i;
    for(i=0;i<=5;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"the maximum elements in an array is"<<max;

    return 0;
}
