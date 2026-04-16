include <iostream>
using namespace std;

int check_validity(int a, int b) {
    if (b > a) return 1;
    return 0;
}

int sum_up(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (check_validity(a, b)) {
        cout << "sum = " << sum_up(a, b) << endl;
    } else {
        cout << "second number must be bigger" << endl;
        return 1;
    }

    return 0;
}
