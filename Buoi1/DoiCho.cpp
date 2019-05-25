#include <iostream>
using namespace std;
void doicho(int &a, int &b){
    int c = a;
    a = b;
    b = c;

}
void doicho2(int a, int b){
    int c = a;
    a = b;
    b = c;

}
int main(){
    int f, g;
    cin >> f >> g;
    doicho(f, g);
// cout << f << " " << g;
    return 0;
}
