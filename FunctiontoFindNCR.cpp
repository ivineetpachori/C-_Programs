// ncr = n!/r!*(n-r)!
#include <iostream>
using namespace std;
int factorial (int n){
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact= fact*i;
    }
    return fact;
}
int nCr (int n, int r){
    int nemo = factorial(n);
    int demo = factorial(r)* factorial(n-r);
    int ans= nemo/demo;
    return ans;
}

int main (){
    int n,r;
    cout << " Enter The value of n and r"<< endl;
    cin>>n>>r;
    cout << "Answer Is "<< nCr(n,r)<<endl;
  

}