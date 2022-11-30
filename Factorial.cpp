#include <iostream>
using namespace std;

int main() {
 int n, flag=1;
 cin>>n;
 for(int i=1; i<=n; i++){
	 flag=flag*i;
 }
 cout<<flag<<endl;
 return 0;
}
