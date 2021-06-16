
#include<iostream>
#include<sstream>
#include<vector>
#include<fstream>

//--- namespace --//
using std::endl;
using std::cout;
using std::cin;

//--- function prototypes --//
void swapOh();

//---- file ---//
ifsteam fin;
//---- Global Var ---//

int main (){
	string temp;
	fin.open("input.txt");
	// find first line which is number
	if(fin.is_open()){
		while(getline(fin,temp){
			cout << temp << endl;
		})
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