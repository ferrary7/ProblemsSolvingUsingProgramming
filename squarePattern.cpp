#include <iostream>
using namespace std;

int main() 
{
	int r, c, s;
	cin>>s;
	for(r = 0; r < s; r++){
		for(c = 0; c < s; c++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
    return 0; 
}
