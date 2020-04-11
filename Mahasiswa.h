#ifndef MAHASISWA_H
#define MAHASISWA_H
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Mahasiswa
{
public:
    void getdata();	//function to accept data from user
    void showdata() const;	//function to show data on screen
    void show_grade() const;
    void show_tabular() const;
    int NIM() const;

    static void login_Mahasiswa();

    static void KHS_MHS();

    static void KRS_MHS();

private:
    int nomorInduk;
    char namaMahasiswa[50];
    char jurusan[50];
    long long int p_marks, c_marks, m_marks, e_marks, cs_marks;
    double per;
    char grade;
    /*void calculate();*/	//function to calculate grade

    
};
#endif