#include <iostream>
 #include <cstdlib>
 #include <cmath>

 using namespace std;

 float a,b,h;

 float calculateValue(float x){
     return (1 / M_PI) * (1 + (1 - cos(2*x)) / (1 + cos(2*x)) );
 }

 int main(){
     cout << "enter a "; cin >> a; cout << endl;
     cout << "enter b "; cin >> b; cout << endl;
     cout << "enter h "; cin >> h; cout << endl;
     for(; a <= b; a += h){
         cout << "X = " <<a << " Y = " << calculateValue(a)
                 <<endl;
     }
     return 0;
 }