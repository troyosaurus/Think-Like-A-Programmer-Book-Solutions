/****************************************************************************************
PROBLEM: A SIDEWAYS TRIANGLE
Write a program that uses only two output statements, cout << "#" and cout << "\n",
to produce a pattern of hash symbols shaped like a sideways triangle:
#
##
###
####
###
##
#
*****************************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	for (int row = 1; row <= 7; row++) {
		for (int hashNum = 1; hashNum <= 4 - abs(4 - row); hashNum++) {
			cout << "#";
		}
		cout << "\n";
	}
}
