#include<bits/stdc++.h>

using namespace std;
class Box{
    public:
        //l,b,h are integers representing the dimensions of the box
        int l,b,h;
        // The class should have the following functions : 
        // Constructors: 
        Box(){
            this->l=0;this->b=0;this->h=0;
        }
        Box(int length, int breadth, int height){
            this->l=length;this->b=breadth;this->h=height;
        }
        Box(Box &B){
            this->l=B.l;this->b=B.b;this->h=B.h;
        }
        //Methods
        int getLength(){
            return this->l;
        }// Return box's length
        int getBreadth (){
            return this->b;
        } // Return box's breadth
        int getHeight (){
            return this->h;
        }  //Return box's height
        long long CalculateVolume(){
            return static_cast<long long int>(this->l)*(this->b)*(this->h);
        } // Return the volume of the box

    //Overload operator < as specified


    //Overload operator << as specified

};
bool operator<(Box& a , Box& b){
    return (a.l<b.l)||((a.b<b.b)&&(a.l==b.l))||((a.h<b.h)&& (a.b==b.b)&&(a.l==b.l));
}
ostream& operator<<(ostream& out, Box& B){
    return cout <<B.l<<" "<<B.b<<" "<<B.h;
}




