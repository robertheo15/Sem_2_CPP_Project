#include "Dosen.h"
#include "Menu.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void Dosen::login_Dosen()
{
	string nim_dosen, nim,pilih;
	cout << "Nomor induk dosen : ";
	cin >> nim_dosen;
	cout << "-------Selamat datang di System Akademik------\n"
		<< "---------------------Dosen--------------------\n"
		<< "--------------Universitas Matana--------------\n"
		<< "1.Input nilai mahasiswa\n"
		<< "Silahkan pilih menu yang anda inginkan : ";
	cin >> pilih;
	cout << "Nomor induk mahasiswa : ";
	cin >> nim;
}

//member function definition, outside of the class
void Dosen::Input_Dosen() {
	cout << "Pendaftaran dosen" << endl;
	cout << "Masukan Nomor: ";
	cin >> Dosen::rollNo;
	cout << "Masukan nama depan: ";
	cin >> Dosen::first_Name;
	cout << "Masukan nama belakang: ";
	cin >> Dosen::last_Name;
	cout << "Masukan nim dosen: ";
	cin >> Dosen::NIM;

}

//member function definition, outside of the class
void Dosen::Print_Dosen() {
	cout << "Data Dosen\n";
	cout << "Nomor:" << Dosen::rollNo << endl
		<< "Nama:" << Dosen::first_Name << " " << Dosen::last_Name << endl
		<< "Nim dosen:" << Dosen::NIM << endl;
}
