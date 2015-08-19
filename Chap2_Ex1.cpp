/*******************************************
2-1. Using the same rule as the shapes programs from earlier in the chapter (only
two output statements—one that outputs the hash mark and one that outputs
an end-of-line), write a program that produces the following shape:

########
 ######
  ####
   ##

 *******************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	for (int row = 1; row <= 4; row++) {
		for (int hashNum = 1; hashNum <= 10 - (2*abs(row)); hashNum++) {
		cout << "#";
		}
	cout << "\n";
	}
}
