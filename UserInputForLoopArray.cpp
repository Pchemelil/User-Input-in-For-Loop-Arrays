#include <iostream>
using namespace std;

int main(){
int num[5];
int sum = 0;
cout<<"Please input 5 integers:\n";

cin>> num[1];
cin>> num[2];
cin>> num[3];
cin>> num[4];
cin>> num[5];

cout<<"Here are your 5 integers:" <<endl;

for(int i=1; i<5; i++){
	cout<< i << " ------- " <<num[i] << endl;
}
for(int i=1; i<5; i++){
	sum = sum+num[i];
}
cout<< "This is the sum of the inputed numbers:"<< endl;
cout<< "\t" << sum << endl;
cout<< "This is the total amount of bytes(storage) used by array:";
cout<< sizeof(num) << " bytes";
return 0;
}
