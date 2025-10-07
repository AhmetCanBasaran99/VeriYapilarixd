#include <iostream> 
using namespace std;
int faktoriyel(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * faktoriyel(n - 1);
    }
}
int main() {
    int sayi;
    cout << "Bir sayi girin: ";
    cin >> sayi;
    cout << "Faktoriyel: " << faktoriyel(sayi) << endl;
    return 0;
}   