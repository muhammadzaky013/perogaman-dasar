#include <iostream>

using namespace std;

int main()
{
    int i;

    cout << "=====FOR=====" << endl;
    for(i=0; i<100; i++){
        cout << "perulangan ke " << i << endl;
    }

        int j=0, p;
    char tambah = 'y';
    cout<< "=====WHILE=====" << endl;
    while(tambah == 'y'){
        cout << "apakah mau tambah " << endl;
        cin >> tambah;
        j++;
        cout << "perulangan ke " << j << endl;
    }
    cout << "HALO DEK!!!" << endl;


    return 0;
}
