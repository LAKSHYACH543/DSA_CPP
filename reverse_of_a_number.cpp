#include <iostream>
using namespace std;
int main() {
    int n,rem,rev=0;
    cout<<"enter a number";
    cin>>n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"the reverse of the given number is";
    cout<<rev;

    return 0;
}
