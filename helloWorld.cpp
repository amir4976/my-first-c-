// Your First C++ Program

#include <iostream>
using namespace std;
int main() {
	float x,y,z,a,b,c;
	cout << "enter 3 number \n ";
	cin >> x >> y >> z ;
	if( x >= y ){
			if(x>=z){
				c=x; a=x; b=y;
			}else{
				c=z; a=x; b=z;
			}
	}else{
		if(y>=z){
			c=y;a=x;b=y;
		}else{
			c=z;a=x;b=y;
		}
	}
	if(x=x = y*y == c*c){
		cout<< "its not";
	}else{
		cout<< "it is";
	}
    return 0;
}
