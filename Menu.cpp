#include "Menu.h"
#include "Mahasiswa.h"
#include "Dosen.h"
#include "Dosen_PA.h"
#include "Baak.h"
#include "Text_FILE.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;



int Menu::MyMenu()
{
    Mahasiswa std;
    int pilih;
    while(1)
    {
       system("cls");
       cout << "------Selamat datang di System Akademik------\n"
            << "-------------Universitas Matana-------------\n"
            << "1.Mahasiswa\n"
            << "2.Dosen\n"
            << "3.Dosen PA\n"
            << "4.BAAK\n"
            << "0.Keluar\n"
            << "Silahkan pilih menu yang anda inginkan : ";
        cin >> pilih;
             switch (pilih)
             {
                case 1:
                    system("cls");
                    Mahasiswa::login_Mahasiswa();
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    Dosen::login_Dosen();
                    system("pause");
                    break;
                case 3:      
                    system("cls");
                    Dosen_PA::login_PA();
                    system("pause");
                    break;                   
                case 4:
                    system("cls");
                    Baak::login_BAAK();
                   
                    system("pause");
                    break;                 
                case 0:
                    system("cls");
                    exit(0);
                    system("pause");
                    break;               
                default:
                    cout << "pilihan yang anda masukan salah.\n";
                    system("pause");
             }      
    }
    return pilih;
}
