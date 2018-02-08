#include <iostream>
using namespace std;

char a;
int large_number = 0;
void printStuff(int);
void printstuff(int,int);

void printStuff(int num) {
	cout << "printing stuff" << (num * 5) << endl;

}

void printStuff(int num, int total) {
	cout << "printing stuff" << (num * 5) << "and total " << total << endl;

}


int main() {
	for (int i = 0; i < 10;i++) {
		large_number = large_number + i;
		printStuff(i,large_number);
		cout << "Printing with only one argument" << endl;
		printStuff(i);
	}
	


	cin >>a;
	return 0;
}


//CIS2013_Week04_Homework1
//CIS2013_Week04_Homework2