#include <iostream>
#include<climits>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,89};
    int min=INT_MAX;
    int i;
    for(i=0;i<=5;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<"the minimum elements in an array is"<<min;

    

    return 0;
}
