#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(hCon,color);
}

int main()
{

    int grade;
    string nama;
    setcolor(13);
    cout << "|==============================================|" << endl;
    cout << "|=69=69=69=GRADE NILAI DENGAN RINCIAN=69=69=69=|" << endl;
    cout << "|==============================================|" << endl;
    cout << "Masukan Nama: " << endl;
    cout << "Nama: ";
    cin >> nama;


    cout<<"Masukan Nilai Anda: ";
    cin>>grade;
    if ((grade >= 91)&& (grade <=100)){
        cout<< nama << ":    Nilai Kamu " << grade << " Grade A";
    }
    else if ((grade >= 81)&& (grade <= 90)){
        cout<< nama << ":    Nilai Kamu " << grade << " Grade B";
    }
    else if ((grade >= 71)&& (grade <= 80)){
        cout<< nama << ":   Nilai Kamu " << grade << " Grade C";
    }
    else if ((grade >= 61)&& (grade <= 70)){
        cout<< nama << ":    Nilai Kamu " << grade << " Grade D";
    }
    else if ((grade >= 0)&& (grade <= 60)){
        cout<< nama << ":    Nilai Kamu " << grade << " Grade E";
    }

    else{
        cout<< "Nilai Yang Anda Masukan Salah Besar!!" ;
    }

    return 0;
}
