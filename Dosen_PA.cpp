#include "Dosen.h"
#include "Mahasiswa.h"
#include "Menu.h"
#include "Dosen_PA.h"
#include "Baak.h"
#include <string.h>
#include <iostream>

using namespace std;


void Dosen_PA::login_PA()
{
	string nim_PA,nim,pilih;
	cout << "Nomor induk dosen : ";
	cin >> nim;
	cout << "-------Selamat datang di System Akademik------\n"
		<< "--------------------DosenPA-------------------\n"
		<< "--------------Universitas Matana--------------\n"
		<< "1.Menyetujui KRS mahasiswa\n"
		<< "Silahkan pilih menu yang anda inginkan : ";
	cin >> pilih;
	cout << "Nomor induk mahasiswa : ";
	cin >> nim;
}