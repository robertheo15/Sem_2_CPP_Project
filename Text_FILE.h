#ifndef TEXT_FILE_H
#define TEXT_FILE_H
class Text_FILE
{
public:

	void write_student();	//create mhs
	void display_sp(int);	//read specific mhs
	void modify_student(int);	//update mhs
	void delete_student(int);	//delete mhs

	void display_all();	//read all mhs
	void class_result();	//display all records in tabular format from binary file
	void display_GradeMhs(int);//read specific mhs grade
	void result();		//display result menu

	
	void entry_menu();	//display entry menu on screen

	void write_MataKuliah();	//create mata kuliah mhs
};

#endif