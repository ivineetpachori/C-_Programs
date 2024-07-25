/* WAP to Print the Following Pattern 
1 2 3 
4 5 6 
7 8 9
Where n = 3 
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter N"<<endl;
    cin>>n;
    int toPrint=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" "<<  toPrint << " ";
            toPrint++;
            j++;
          }
          cout<<endl;
          i++;
 }
 return 0;

}