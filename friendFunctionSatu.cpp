#include <iostream>
#include <string>

using namespace std;

class siswa;
class orang;
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa; // deklarasi class siswa sebagai teman dari class orang
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(orang &a); // metode untuk menunjukkan nama dari class orang
};

void siswa::setId(int pId)
{
    id = pId;
};

int main()
{
    orang joko;
    joko.setNama("joko susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAll(joko); // call display metode untuk menunjukkan nama dari class orang
}
