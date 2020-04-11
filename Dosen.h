#ifndef DOSEN_H
#define DOSEN_H

#include "Mahasiswa.h"
#include "Menu.h"
#include "Text_FILE.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

class Dosen
{
public:

    static void login_Dosen();
    /*static void KHS_MHS();*/

    //member function to get student's details
    void Input_Dosen(void);
    //member function to print student's details
    void Print_Dosen(void);
    


    /*static void KRS_MHS();*/
private:
    string first_Name;
    string last_Name;
    string rollNo;
    string NIM;
    string prodi;
   
};
#endif