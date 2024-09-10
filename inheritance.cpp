//method Method overriding
#include<iostream>
using namespace std;

class a1 {
    private:
        int a, b;
    protected:
        int c;
    public:
        void get() {
            cout << "Enter the a and b values: ";
            cin >> a >> b;
        }
        void show() {
            c = a + b;
            cout << "\nSum in class a1: " << c;
        }
};

class a2 : protected a1 {
    private:
        int x, y;
    protected:
        int z;
    public:
        void get_values() {
		    a1::get();
            cout << "Enter the x and y values: ";
            cin >> x >> y;
        }
        void show_values() { 
		    a1::show();
            z = x + y;
            cout << "\nSum in class a2: " << z;
        }
}; // Added missing semicolon

int main() {
    a2 obj;
    obj.get_values();
    obj.show_values();
    
    return 0; // Added return statement
}
