#include <iostream>
using namespace std;

// Macros
#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main(){

    int value;//Declaration
    int price=45;//Initialization

    int a, b;

    // Input 
    cout << "Enter two numbers: ";
    cin >> a >> b;

    //Output
    cout << "You entered: " << a << " and " << b << endl;
    cout << "Their sum is: " << a + b << endl;

    // Macros
    double r;
    cout << "\nEnter radius of a circle: ";
    cin >> r;

    double area = PI * SQUARE(r);
    cout << "Area of circle using macros: " << area << endl;

    return 0;
}