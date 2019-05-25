#include<iostream>
using namespace std;
int* trave(int value){
    int *n = new int;
        *n = value;
    return n;
}
int main() {
   cout<<*trave(10);
}
