#include<iostream>
#include<fstream>

using namespace std;

int main() {
    int n;
    int sum=0;
    ifstream in;
    ofstream out;

    in.open("input.txt");
    in >> n;
    out.open("output.txt");

    int m[n];
    for(int i=0; i<n; i++) {
        in >> m[i];
        sum+=m[i];

    }
    out << sum;
    out.close();
    in.close();
    return 0;
}
