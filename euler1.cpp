#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int input;
	
	while(f>>input){
		int num = 0;
		for(int x=1; x<input; x++){
		if(x%3==0 || x%5 == 0){
			num += x;
			}
		}
	  cout << endl << num << endl;
     return 0;
	}
	system ("pause > 0");
	
}
