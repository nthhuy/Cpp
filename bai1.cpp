#include<iostream>

using namespace std;
int main() {
    int n, sum=0, j;
    cin >> n;
    int mang[n];
    int i=0;
    bool swapped;
    do{
        cin >> mang[i++];

    } while(i<n);

    do{
        swapped = false;
        for(i=0; i<n-1; i++) {
            if(mang[i]>mang[i+1]){
                swap(mang[i],mang[i+1]);
                swapped=true;
            }
        }
     } while (swapped);

    for(int i=0; i<n; i++){

        cout << mang[i];
    }



    return 0;
}
