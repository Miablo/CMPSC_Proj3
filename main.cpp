/**
*File Name: Begin with "assign" and then the assignment number, for example, proj1.cpp, or proj1.h. You must have the extension .cpp or .h
*Academic Integrity Statement: I certify that, while others may have assisted me in brain storming, debugging and validating this program, the program itself is my own work. I understand that submitting code which is the work of other individuals is a violation of the course Academic Integrity Policy and may result in a zero credit for the assignment, or course failure and a report to the Academic Dishonesty Board. I also understand that if I knowingly give my original work to another individual that it could also result in a zero credit for the assignment, or course failure and a report to the Academic Dishonesty Board. See Academic Integrity Procedural Guidelines (Links to an external site.) at:  https://psbehrend.psu.edu/intranet/faculty-resources/academic-integrity/academic-integrity-procedural-guidelines (Links to an external site.)
*Assisted by and Assisted line numbers:
*Your Name: Mio Diaz
*Your PSU user ID:  mvd5044
*Course title CMPSC465 SU2021 
*Due Time: 11:59PM EST, Sunday, June 20, 2021
*Time of Last Modification: 6:25PM, Friday, June 20, 2021
*Description: Project Three if there is a O and it is on the edge of board or the o touches a edge o 
* then o is kept else o is swapped to X
*/

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
char pieces[MAX]; 	// n x n 'board'

int main (){
	string temp;
	int n;  // size of array

	fin.open("input.txt");
	// find first line which is number
	if(fin.is_open()){
		while(getline(fin,temp)){
			n = temp.length();
				for(int i = 1; i < n; i++) {
				if (temp[i] == toupper('o')) {
					// check if edges or right inside edge locations have o
						if(i == 1 || i == n-1 || temp[1] == 'O' && i==2 
						|| temp[n-1] == 'O' && i == n-3) {
							// print o
							pieces[i] = temp[i];
						} else {
							// swap o and print x
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

	// close file
	fin.close();

	return 0;
} // end main 