

#include <iostream>
using namespace std;

int XOR(int x, int y) 
{
	return(x | y) & (~x | ~y);
}
int main()
{
	int x, y;
	cin>>x;
	cin>>y;
	cout<<XOR(x, y);
	return 0;
}
