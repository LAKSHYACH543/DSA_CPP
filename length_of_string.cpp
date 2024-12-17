#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int count=0;
    char name[10]="abcd";
    for (int i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<"the length of a string is "<<count;

    return 0;
}
