/* WAP to Print the Following Pattern 
* * * *
* * * *
* * * *
* * * *
Where n = 4  
*/
#include <iostream>
using namespace std;
int main() {
    int n;
cout<<"Enter n"<<endl;
cin>>n;
int i=0;
while(i<n){
    int j=0;
    while (j<n){
        cout<<" * ";
        j++;
    }
    cout<<endl;
    i++;
}
return 0; 
}