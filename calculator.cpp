#include <iostream>
using namespace std;

void rules() {

    cout << "Press :"<< endl;
    cout << "X for Terminating" << endl;
    cout << "A for addition" << endl;
    cout << "S for subtraction" << endl;
    cout << "M for multiplication" << endl;
    cout << "D for division" << endl;
    cout << "R for remainder" << endl;
    cout << "Q for square" << endl;
    cout << "C for cube" << endl;

}

int add() {
    int a, b, sum;

    cout << "Enter first Number ";
    cin >> a;
    cout << "Enter second Number ";
    cin >> b;

    sum = a + b;
    
    cout << "Sum " << sum << endl;

}

int sub() {
    int a, b, dif;

    cout << "Enter the greater Number ";
    cin >> a;
    cout << "Enter the smaller Number ";
    cin >> b;

    dif = a - b;
    
    cout << "Difference " << dif << endl;

}

int mul() {
    int a, b, pro;

    cout << "Enter first Number ";
    cin >> a;
    cout << "Enter second Number ";
    cin >> b;

    pro = a * b;
    
    cout << "Product " << pro << endl;

}

int div() {
    int a, b, div;

    cout << "Enter the greater Number ";
    cin >> a;
    cout << "Enter the smaller Number ";
    cin >> b;

    div = a / b;
    
    cout << "Quotient " << div << endl;

}

int square() {
    int a, sq;

    cout << "Enter the number of which you want square ";
    cin >> a;

    sq = a * a;
    
    cout << "Square " << sq << endl;
}

int cube() {
    int a, cb;

    cout << "Enter the number of which you want cube ";
    cin >> a;

    cb = a * a * a;
    
    cout << "Cube " << cb << endl;
}

int rem() {
    int a, b, rem;

    cout << "Enter the larger Number ";
    cin >> a;
    cout << "Enter the smaller Number ";
    cin >> b;

    rem = a % b;
    
    cout << "Remainder " << rem << endl;
}

void running() {
    char ch;    

    while(1 < 2) {
        rules();
        cout << "Your input ";
        cin >> ch;
        cout << endl;

        if (ch == 'X' || ch == 'x') {
            break;
        }
        else if(ch == 'A' || ch == 'a') {
            add();
        }
        else if(ch == 'S' || ch == 's') {
            sub();
        }
        else if(ch == 'M' || ch == 'm') {
            mul();
        }
        else if(ch == 'D' || ch == 'd') {
            div();
        }
        else if(ch == 'Q' || ch == 'q') {
            square();
        }
        else if(ch == 'C' || ch == 'c') {
            cube();
        }
        else if(ch == 'R' || ch == 'r') {
            rem();
        }
        else {
            cout << "Error. Try again" << endl;
        }
        cout << endl;
    }
}

int main() {

    running();

}