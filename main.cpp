

#include <iostream> 
using namespace std;
int main() {
    double sayi1, sayi2;
    char islem;

    cout << "birinci sayiyi girin: ";
    cin >> sayi1;

    cout << "yapmak istediğiniz islemi secin (+ veya -): ";
    cin >> islem;

    cout << "ikinci sayiyi girin: ";
    cin >> sayi2;

    if (islem == '+') {
        cout << "sonuc: " << sayi1 + sayi2 << endl;
    } else if (islem == '-') {
        cout << "sonuc: " << sayi1 - sayi2 << endl; 
    } else {
        cout << "gecersiz islem sectiniz!" << endl;
    }
    return 0;
}