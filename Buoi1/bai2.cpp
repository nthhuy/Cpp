#include <iostream>
using namespace std;
void gap2(int* p, int n){
    cout << *(p+n);

}
int main() {
    int m[5];
        m[0]=1;
        m[1]=2;
        m[2]=3;
        m[3]=4;
        m[4]=5;
    int n=2;
    int* p=&m[2];
    gap2(p, n);

}
