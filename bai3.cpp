#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long a,n,m;
    cin >> a >> n >> m;

    if (n==0){
        cout << "1";
        return 0;
    }else{
        long x=pow(a,n);
        cout << x%m;
    }



    return 0;
}
