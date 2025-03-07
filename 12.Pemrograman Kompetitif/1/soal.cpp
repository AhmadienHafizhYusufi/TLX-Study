#include <iostream>
#include <vector>
#include <climits> // INT_MIN, INT_MAX
using namespace std;

int main() {
    int n, x = INT_MIN, y = INT_MAX; // Nilai x dan y diinisialisasi dengan nilai minimum dan maksimum dari tipe data integer
    
    cin >> n;
    
    vector<int> arr(n);
    
    // Membaca input sebanyak n kali
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i]; // Memasukkan input ke dalam array
        x = max(x, arr[i]); // Mencari nilai maksimum dari array
        y = min(y, arr[i]); // Mencari nilai minimum dari array
    }
    cout << x << " " << y << endl;

    return 0;
}