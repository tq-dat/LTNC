#include <iostream>


using namespace std;

int main(){
    long n,x;
    cin >> n >> x;
    long a[n];

    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    long left,mid,right;
    left =0;
    right =n-1;


    while(n>0){
        mid =(right-left)%2+left;
        if(a[mid]==x){
            cout << "YES";
            return 0;
        }else{
            if(a[mid]>x){
                right =mid-1;
            }else{
                if(a[mid]<x){
                    left =mid +1;
                }
            }
        }
        n--;

    }
    cout << "NO";


    return 0;
}
