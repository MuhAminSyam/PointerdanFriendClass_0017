#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No induk mahasiswa:" << nim << endl;
    };
};

int main()
{
    mahasiswa mhs{1};
    mhs.showNim();

    mahasiswa &refMhs = mhs; // reference to Mhs
    refMhs.nim = 2;          // change nim using pointer
    mhs.showNim();           // show update nim
