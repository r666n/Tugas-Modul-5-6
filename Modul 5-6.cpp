#include <iostream>
#include <vector>

using namespace std;

int main () {
    int baris = 5;
    
    for (int i = 0; i < baris; i++) {
        for (int s = 0; s < baris - i; s++) {
            cout << " ";
            }
        
        int nilai = 1;
        for (int j = 0; j <= i; j++) {
            cout << nilai << " ";
            nilai = nilai * (i-j) / (j+1);
            }
        cout << endl;
        
        }
    cout << "\n====================================\n"
            "\nNama  : Rendra Adnan Farid\n"
            "\nNIM   : 25104410036\n"
            "\nProdi : Teknik Informatika - 1B\n"
            "\n====================================\n";
    
    return 0;
    }
