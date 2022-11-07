//Find the sum of elements of array in c++//

#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n];
    // taking input
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    // calculating sum
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}
