#include "Dosen.h"
#include "Mahasiswa.h"
#include "Menu.h"
#include "Text_FILE.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

void Mahasiswa::login_Mahasiswa()
{
	Text_FILE txt;
	Menu menu_awal;
	
	int nim;
	int pilih;
	cout << "Nomor induk mahasiswa : ";
	cin >> nim;
	txt.display_sp(nim);
	cout << "\n-------Selamat datang di System Akademik------" << endl
		<< "-------------------Mahasiswa------------------" << endl
		<< "--------------Universitas Matana--------------" << endl
		<< "1.KHS Mahsiswa" << endl
		<< "2.Pengisian KRS" << endl
		<< "3.Update data mahasiswa" << endl
		<< "4.kembali ke menu awal" << endl
		<< "Silahkan pilih menu yang anda inginkan : ";
	cin >> pilih;
	switch (pilih) {
	case 1:
		txt.display_GradeMhs(nim);
		break;
	case 2:
		break;
	case 3:
		int num;
		cout << "Masukan NIM mahasiswa : ";
		cin >> num;
		txt.modify_student(num);
		break;
	case 4:
		menu_awal.MyMenu();
		break;
	default:
		cout << "pilihan yang anda masukan salah.\n"
			<< "Akan kembali ke menu awal" << endl;
		break;
	}
	
}

void Mahasiswa::KHS_MHS() {
	system("cls");
	cout << "KHS mahasiswa universitas matana" << endl;
}

void Mahasiswa::KRS_MHS() {
	system("cls");
	cout << "KRS mahasiswa universitas matana" << endl;
}


//void Mahasiswa::calculate()
//{
//	per = (p_marks + c_marks + m_marks + e_marks + cs_marks) / 5.0;
//	if (per >= 60)
//		grade = 'A';
//	else if (per >= 50)
//		grade = 'B';
//	else if (per >= 33)
//		grade = 'C';
//	else
//		grade = 'F';
//}

void Mahasiswa::getdata()
{
	cout << "Masukan NIM : ";
	cin >> nomorInduk;
	cout << "Masukan nama mahasiswa : ";
	cin.ignore();
	cin.getline(namaMahasiswa, 50);
	cout << "Masukan jurusan mahasiswa : ";
	cin.getline(jurusan, 50);
	/*cout << "Enter The marks in physics out of 100 : ";
	cin >> p_marks;
	cout << "Enter The marks in chemistry out of 100 : ";
	cin >> c_marks;
	cout << "Enter The marks in maths out of 100 : ";
	cin >> m_marks;
	cout << "Enter The marks in english out of 100 : ";
	cin >> e_marks;
	cout << "Enter The marks in computer science out of 100 : ";
	cin >> cs_marks;
	calculate();*/
}
//
void Mahasiswa::showdata() const
{
	cout << "\nNim mahasiswa : " << nomorInduk;
	cout << "\nNama mahasiswa : " << namaMahasiswa;
	cout << "\nJurusan mahasiswa : " << jurusan;
	
}

void Mahasiswa::show_grade() const
{
	system("cls");
	cout << "\nNim mahasiswa : " << nomorInduk;
	cout << "\nNama mahasiswa : " << namaMahasiswa;
	cout << "\nJurusan mahasiswa : " << jurusan;
	/*cout << "\nMarks in Physics : " << p_marks;
	cout << "\nMarks in Chemistry : " << c_marks;
	cout << "\nMarks in Maths : " << m_marks;
	cout << "\nMarks in English : " << e_marks;
	cout << "\nMarks in Computer Science :" << cs_marks;
	cout << "\nPercentage of student is  :" << per;
	cout << "\nGrade of student is :" << grade;*/
}

void Mahasiswa::show_tabular() const
{
	cout << nomorInduk << setw(10) << " " << namaMahasiswa << setw(15) << " " << jurusan << setw(10) << p_marks << setw(4) << c_marks << setw(4) << m_marks << setw(4)
		<< e_marks << setw(4) << cs_marks << setw(8) << per << setw(6) << grade << endl;
}

int  Mahasiswa::NIM() const
{
	return nomorInduk;
}

////set first name
//void Mahasiswa::setFirstName(const string& first)
//{
//	first_Name = first;
//}
////return last name
//string Mahasiswa::getFirstName() const  { return first_Name; }
//
////set last name
//void Mahasiswa::setLastName(const string& last)
//{
//	last_Name = last;
//}
////return last  name
//string Mahasiswa::getLastName() const { return last_Name; }

////setNIM
//void Mahasiswa::set_NIM(const string& input_NIM)
//{
//	NIM = input_NIM;
//}
////return setNIM
//string Mahasiswa::get_NIM() const { return NIM; }

////set prodi
//void Mahasiswa::set_prodi(const string& input_Prodi)
//{
//	prodi = input_Prodi;
//}
////return prodi
//string Mahasiswa::get_prodi() const { return prodi; }
//
////set prodi
//void Mahasiswa::set_IPK(float input_IPK)
//{
//	prodi = input_IPK;
//}
////return prodi
//float Mahasiswa::get_IPK()  { return ipk; }