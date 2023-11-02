#include <bits/stdc++.h>

using namespace std;

int main() {

    string a;
    double b, c;
    cin>>a;
    cin>>b>>c;
    double total = b+c*15/100;

    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;

    return 0;
}
