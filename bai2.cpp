#include <iostream>


using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n-1];
    for (int i=0;i<n-1;i++){
        a[i]=i+2;
    }

    for (int i=0;i<n-1;i++){
        if(a[i]==0){
            continue;
        }else{
            for (int j=i+1;j<n-1;j++){
                if(a[j]%a[i]==0){
                    a[j]=0;
                }
            }
        }
    }

    for (int i=0;i<n-1;i++){
        if(a[i]!=0) cout << a[i] <<" ";
    }




    return 0;
}
