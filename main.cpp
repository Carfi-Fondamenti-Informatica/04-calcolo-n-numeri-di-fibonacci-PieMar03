#include <iostream>
using namespace std;
int main() {
    int PN=0;
    int SN=1;
    int n;
    cin >> n;
    int i=2;
    if (n>=2){
        cout << 1 << endl;
        while (i++ <=n){
            cout << PN + SN << endl;
            if (PN < SN)
                PN += SN;
        }
    } else {
        cout << "errore" << endl;
    }
    return 0;
}
