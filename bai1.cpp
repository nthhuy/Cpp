#include<iostream>

using namespace std;

void inSert(int m[],int n){
    for(int i=0; i<n; i++)
        cin >> m[i];
}
void print(int m[], int n){
    for(int i=0; i<n; i++)
        cout << m[i];
}

int main() {
    int n, sum=0, j;
    cin >> n;
    int _mang[n];
    int i=0;
    bool swapped;

    inSert(_mang,n);
//    do{
//        cin >> mang[i++];
//
//    } while(i<n);

    do{
        swapped = false;
        for(i=0; i<n-1; i++) {
            if(_mang[i]>_mang[i+1]){
                swap(_mang[i],_mang[i+1]);
                swapped=true;
            }
        }
     } while (swapped);

    print(_mang, n);



    return 0;
}
