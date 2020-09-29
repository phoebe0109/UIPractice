#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	string a;

	if(argc<2||argc>2)
	{
		cout<<"usage:";
		cin>>a;
		cout<<"      "<<argv[0]<<"  "<<a<<endl;
	}
	 else
	 {
	 	cout<<"Hello,"<<argv[1]<<"  "<<a<<endl;
	 	cout<<"Welcome to phoebe's World"<<endl;
	 }
	 
	return 0;
}
