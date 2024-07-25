#include <math.h>
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Binary Number Which You want to convert "<<endl;
    cin >> num;
  int ans=0;
  int i=0;
  while(num!=0){
    int digit=num%10;
    if (digit==1){
        ans =ans+pow(2,i);
    }
    num=num/10;
    i++;

  }
  cout << "After Conversion the Decimal Number is "<< ans <<endl;
    return 0;
}