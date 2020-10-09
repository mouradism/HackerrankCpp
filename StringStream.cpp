#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    for (int i = 0; str[i] !='\0'; i++){
	    if (str[i] == ',')
                str[i]=' ';
    }
    vector<int> out;
    stringstream ss(str);
    int temp;
    while(ss>>temp){
        out.push_back(temp);
    }
       
    return out;
}

int main() {
    string str;
    str= "23,4,56";
  
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}