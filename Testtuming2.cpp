#include <iostream>
#include <string>

using namespace std;
int main (){

	string nama;
	string npm;
	char kelas;
	string jurusan;

	cout<< "nama \t:";
	getline (cin,nama);
	cout<< "npm \t:";
	cin>> npm;
	cout<< "kelas \t:";
	cin>> kelas;
	getchar ();
	cout<< "jurusan \t:";
	getline (cin,jurusan);

	cout<< "Nama \t:" << "nama"<< "\n";
	cout<< "Npm \t:" << "npm"<< "\n";
	cout<< "Kelas \t:" << "kelas"<< "\n";
	cout<< "Jurusan \t:" << "jurusan"<< "\n";


	return 0;

}
