#include <iostream>
#include <string.h>
using namespace std;

int main (){
	char a[50], b[50], dist[50];
	int res;
	
	cout << "Enter your first name: ";
	cin.getline(a, 50);
	
	strcpy(dist, a);
	
	cout << "Copied the name  that you have entered: " << dist << endl;
	
	res = strlen(dist);
	cout << "The length of your name's character: " << res;
	
	cout << endl<< "Enter your last name: ";
	cin.getline(b, 50);
	
	strcat(a, b);
	cout << "full name: " << a;
	
}
