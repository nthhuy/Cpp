#include<iostream>
using namespace std;
string daoxau(string m){
    int k=m.length();
    for(int i=0; i < (k/2) ; i++){
        swap(m[i],m[k-i-1]);
    }
return m;
}
int main() {
    string m="abcd1234";

    cout << daoxau(m);
}
