
#include<iostream>
#include<sstream>
#include<vector>
#include<fstream>
#include<string>

//--- namespace --//
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::ifstream;

//-- file input --//
ifstream fin;

//--- function prototypes --//
void swapOh();
//---- Global Var ---//

int main (){
	string temp;
	int n;

	fin.open("input.txt");
	// find first line which is number
	if(fin.is_open()){
		while(getline(fin,temp)){
			cin << n;
			while(!boardBuilt){
				
			}
		}
	} else {
		cout << "Error opening file.\n";
	}
	// n x n 'board'
	// if x print x if o
	// check if y-1, y+2, x-1,x+2 locations have x
	// if yes swap o and print x
	// if no print o
	// close file
	fin.close();

	return 0;
} // end main 


// check if surrounded by x
// swapOh