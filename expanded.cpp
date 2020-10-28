#include <iostream>
using namespace std;

int main() {

    int n, length, place;
    cin >> n;
    length = 0;
    place = 1;

    int a[1000];

    for (int i = 0; 0 < n; i++) {
        a[i] = ((n%10) * place);

        n = n/10;
        length++;
        place *= 10;
    }

    for (int i = length - 1; i >= 0; i--) {
        cout << a[i] << " ";
        if (i != 0) {
            cout << "+ ";
        }
    }

    cout << endl;

}