#include "Text_FILE.h"
#include "Dosen.h"
#include "Dosen_PA.h"
#include "Mahasiswa.h"
#include "Baak.h"
#include "Menu.h"

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//    	create data mhs

void Text_FILE::write_student()
{
	Mahasiswa st;
	ofstream outFile;
	outFile.open("student.txt", ios::app | ios::app);
	st.getdata();
	outFile.write(reinterpret_cast<char*> (&st), sizeof(Mahasiswa));
	outFile.close();
	cout << "Mahasiswa berhasil terdaftar";
	cin.ignore();
	cin.get();
}

//   	create mata kuliah mhs
//void Text_FILE::write_MataKuliah()
//{
//	Baak c;
//	ofstream outFile;
//	outFile.open("student.txt", ios::app | ios::app);
//	adm.getdata();
//	outFile.write(reinterpret_cast<char*> (&adm), sizeof(Mahasiswa));
//	outFile.close();
//	cout << "Mahasiswa berhasil terdaftar";
//	cin.ignore();
//	cin.get();
//}

//    	read all data mhs

void Text_FILE::display_all()
{
	Mahasiswa st;
	ifstream inFile;
	inFile.open("student.txt", ios::app);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout << "DISPLAY ALL RECORD !!!" << endl;
	while (inFile.read(reinterpret_cast<char*> (&st), sizeof(Mahasiswa)))
	{
		st.showdata();
		cout << "====================================" << endl;
	}
	inFile.close();
	cin.ignore();
	cin.get();
}

//    	function to read specific record from file


void Text_FILE::display_sp(int n)
{
	Mahasiswa st;
	ifstream inFile;
	inFile.open("student.txt", ios::app);
	if (!inFile)
	{
		cout << "Data tidak tersedia...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag = false;
	while (inFile.read(reinterpret_cast<char*> (&st), sizeof(Mahasiswa)))
	{
		if (st.NIM() == n)
		{
			st.showdata();
			flag = true;
		}
	}
	inFile.close();
	if (flag == false)
		cout << "Data tidak tersedia...";
	cin.ignore();
	cin.get();
}

//    	function to read specific grade mhs record from file
void Text_FILE::display_GradeMhs(int n)
{
	Mahasiswa st;
	ifstream inFile;
	inFile.open("student.txt", ios::app);
	if (!inFile)
	{
		cout << "Data tidak tersedia...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag = false;
	while (inFile.read(reinterpret_cast<char*> (&st), sizeof(Mahasiswa)))
	{
		if (st.NIM() == n)
		{
			st.show_grade();
			flag = true;
		}
	}
	inFile.close();
	if (flag == false)
		cout << "Data tidak tersedia...";
	cin.ignore();
	cin.get();
}

//    	update data mhs

void Text_FILE::modify_student(int n)
{
	bool found = false;
	Mahasiswa std;
	fstream File;
	File.open("student.txt", ios::app | ios::in | ios::out);
	if (!File)
	{
		cout << "Data tidak tersedia...";
		cin.ignore();
		cin.get();
		return;
	}
	while (!File.eof() && found == false)
	{

		File.read(reinterpret_cast<char*> (&std), sizeof(Mahasiswa));
		if (std.NIM() == n)
		{
			std.showdata();
			cout << "\nMasukan data mahasiswa yang baru" << endl;
			std.getdata();
			int pos = (-1) * static_cast<int>(sizeof(std));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&std), sizeof(Mahasiswa));
			cout << "Data diupdate";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "Record Not Found ";
	cin.ignore();
	cin.get();
}

//    	delete data mhs

void Text_FILE::delete_student(int n)
{
	Mahasiswa std;
	ifstream inFile;
	inFile.open("student.txt", ios::app);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.txt", ios::out);
	inFile.seekg(0, ios::beg);
	while (inFile.read(reinterpret_cast<char*> (&std), sizeof(Mahasiswa)))
	{
		if (std.NIM() != n)
		{
			outFile.write(reinterpret_cast<char*> (&std), sizeof(Mahasiswa));
		}
	}
	outFile.close();
	inFile.close();
	remove("student.txt");
	rename("Temp.txt", "student.txt");
	cout << "\n\n\tRecord Deleted ..";
	cin.ignore();
	cin.get();
}

//    	function to display all mhs grade report

void Text_FILE::class_result()
{
	Mahasiswa std;
	ifstream inFile;
	inFile.open("student.txt", ios::app);
	if (!inFile)
	{
		cout << "Data tidak tersedia!";
		cin.ignore();
		cin.get();
		return;
	}
	cout << "ALL STUDENTS RESULT" << endl;
	cout << "=======================================================================================" << endl;
	cout << "NIM" << setw(15) << "Nama" << setw(25) << "Jurusan" << setw(23) << "P" << setw(4) << "C" << setw(4) << "M" << setw(4) << "E" << setw(5) << "CS" << setw(6) << "AVG" << setw(13) << "Grade" << endl;
	cout << "=======================================================================================" << endl;
	while (inFile.read(reinterpret_cast<char*> (&std), sizeof(Mahasiswa)))
	{
		std.show_tabular();
	}
	cin.ignore();
	cin.get();
	inFile.close();
}

//    	function to display result menu


void Text_FILE::result()
{
	char ch;
	int rno;
	system("cls");
	cout << "RESULT MENU" << endl;
	cout << "1. Class Result" << endl;
	cout << "2. Student Report Card" << endl;
	cout << "3. Back to Main Menu" << endl;
	cout << "Enter Choice (1/2/3)? ";
	cin >> ch;
	system("cls");
	switch (ch)
	{
	case '1':
		class_result();
		break;
	case '2':
		cout << "Enter Roll Number Of Student : ";
		cin >> rno;
		display_sp(rno);
		break;
	case '3':
		break;
	default:
		cout << "\a";
	}
}


//    	ENTRY / EDIT MENU FUNCTION

void Text_FILE::entry_menu()
{
	int ch;
	int num;
	system("cls");
	cout << "\n\n\n\tENTRY MENU";
	cout << "\n\n\t1.Registrasi mahasiswa";
	cout << "\n\n\t2.Menampilkan nilai semua mahasiswa";
	cout << "\n\n\t3.Mencari record mahasiswa ";
	cout << "\n\n\t4.Update record mahasiswa";
	cout << "\n\n\t5.Menghapus record mahasiswa";
	cout << "\n\n\t6.BACK TO MAIN MENU";
	cout << "\n\n\tPlease Enter Your Choice (1-6) ";
	cin >> ch;
	system("cls");
	switch (ch)
	{
	case 1:
		write_student();
		break;
	case 2:
		display_all();
		break;
	case 3:
		cout << "\n\n\tPlease Enter The roll number ";
		cin >> num;
		display_sp(num);
		break;
	case 4:
		cout << "\n\n\tPlease Enter The roll number ";
		cin >> num;
		modify_student(num);
		break;
	case 5:
		cout << "\n\n\tPlease Enter The roll number ";
		cin >> num;
		delete_student(num);
		break;
	case 6:
		break;
	default:
		cout << "\a";
		entry_menu();
	}
}