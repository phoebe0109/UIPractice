#include <iostream>
using namespace std;
int main(int argc, char** argv) {


	if (argc != 3 )
	{
		cout << "usage:";
		cout << "      " << argv[0] << " Host!! " << endl;
	}
	else
	{
		cout << "Hello," << argv[1] << "." << endl;
		cout << "This is" << argv[2] << ",Welcome " << endl;
		
	}

	return 0;
}
