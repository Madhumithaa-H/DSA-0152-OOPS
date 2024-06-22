#include <iostream>
using namespace std;
class righttriangle{
	public:
		void triangle(int n){
		for (int i = 1; i <= n; ++i) {
    	for (int j = 1; j <= i; ++j) {
        cout << "* ";
        }
        cout << endl;
    }
}
};
int main() {
    int row;
    cout << "Enter the number ";
    cin >> row;
    righttriangle triangle;
    triangle.triangle(row);
	return 0;
}
