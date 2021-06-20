
#include<iostream>
#include<sstream>
#include<vector>
#include<fstream>

#define MAX 1

//--- namespace --//
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::ifstream;

//-- file input --//
ifstream fin;
//---- Global Var ---//
char pieces[MAX];

int main (){
	string temp;
	int n;

	fin.open("input.txt");
	// find first line which is number
	if(fin.is_open()){
		while(getline(fin,temp)){
			n = temp.length();
				for(int i = 1; i < n; i++) {
				if (temp[i] == toupper('o')) {
						if(i == 1 || i == n-1) {
							pieces[i] = temp[i];
						} else {
							pieces[i] = 'X';
						}
					} else {
						pieces[i] = temp[i];
					}
					 
						cout << pieces[i];
					}
					cout << endl;
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