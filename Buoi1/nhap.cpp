#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[n];
    for(int i=0; i<n; i++)
        cin >> m[i];
    int k;
    cin >> k;
    bool a;
        a = false;
    for(int i=0; i<n; i++){
        if(m[i]==k){
            a = true;
            cout << "Da tim thay";
            break;
        }
    }
    if(a==false)
        cout << "Khong tim thay";

}
