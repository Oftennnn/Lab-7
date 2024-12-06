#include<iostream>
using namespace std;

//ไม่ต้องเติม function main()

char before(char x){
char z;
	if(x=='A'){z=x+25;}else{
	    if(x<'A'){z=48;}else{
	        if(x<='Z'){z=x-1;}else{z=48;}
	        }
	    
	}
	return z;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
