#include <iostream>
using namespace std;
int fact(int n);
int main() {
    int n,fac;
    cout<<"enter a number";
    cin>>n;
    fac=fact(n);
    cout<<"the factorial of a given number is";
    cout<<fac;
    return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
