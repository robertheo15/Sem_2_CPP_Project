#include "Baak.h"
#include "Dosen.h"
#include "Menu.h"
#include "Mahasiswa.h"
#include "Text_FILE.h"
#include <string>
#include <iostream>
#include <vector> 
#include <fstream>
#include <iomanip>
using namespace std;


void Baak::login_BAAK() 
{
	Dosen dsn;
	Text_FILE txt;
	Menu menu_awal;
	vector<Dosen> vec;

	string user_baak, password, nim;
	int pilih;
	cout << "User BAAK : ";
	cin >> user_baak;
	cout << "Password BAAK : ";
	cin >> password;

	if(password == "admin" && user_baak=="admin"){
		cout << "-------Selamat datang di System Akademik------" << endl
			<< "---------------------Dosen--------------------" << endl
			<< "--------------Universitas Matana--------------" << endl
			/*<< "1.Menerima nilai dari dosen" << endl*/
			<< "1.Input mata kuliah" << endl
			<< "2.Registrasi Mahasiswa" << endl
			<< "3.Hapus data mahasiswa" << endl
			<< "4.Registrasi Dosen" << endl
			<< "5.Hapus data dosen" << endl
			<< "6.kembali ke menu awal" << endl
			<< "Silahkan pilih menu yang anda inginkan : ";
		cin >> pilih;
		switch (pilih)
		{
		/*case 1:
			cout << "Masukan nilai mahasiswa";
			break;*/
		case 1:
			cout << "Input mata kuliah mahasiswa";
			break;
		case 2:
			txt.write_student();
			break;
		case 3:
			int num;
			cout << "Masukan NIM mahasiswa : ";
			cin >> num;
			txt.delete_student(num);
			break;
		/*case 4:
			int n;
			cout << "Masukan jumlah dosen yang ingin di daftarkan :";
			cin >> n;
			for (int i = 0; i < n; ++i)
			{

				dsn.Input_Dosen();
				vec.push_back(dsn);
			}

			for (unsigned int i = 0; i < vec.size(); ++i)
			{
				vec[i].Print_Dosen();
			}
			break;*/
		/*case  5:
			break;*/
		case 6:
			menu_awal.MyMenu();
			break;
		default:
			cout << "pilihan yang anda masukan salah.\n"
				<< "Akan kembali ke menu awal" << endl;
			break;
		}
	}
	else {
		cout << "Password salah!, pasikan user dan password BAAK sudah benar" << endl;
	}
	
}