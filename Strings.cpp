#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b,c;
    cin>>a>>b;
    cout<< a.size()<<" "<<b.size()<<endl<<a+b<<endl;
    c=a[0];
    a[0]=b[0];
    b[0]=c[0];
    cout<<a+" "+b;
  
    return 0;
}

