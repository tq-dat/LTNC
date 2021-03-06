#include <iostream>

using namespace std;

bool checkHang(int a[],int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                return true;
            }
        }
    }
    return false;
}

bool checkCot(int a[],int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                return true;
            }
        }
    }
    return false;
}

bool checkCheo(int a[],int b[],int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]==b[j]&&b[i]==a[j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    int x[n],y[n];

    for (int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }

    if(checkHang(x,n)||checkCot(y,n)||checkCheo(x,y,n)){
        cout << "yes";
    }else{
        cout << "no";
    }



    return 0;
}
