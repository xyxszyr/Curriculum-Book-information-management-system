#include<iostream.h>
#include<string.h>
class Library {
private:
	char libraryNmae[30]; //����
	int libraryCode; //����
	int librarynumber; //�ڲ������
	char author[30]; //����
	int libraryStorage; //�����
public:
	Library();
	Library(char libraryNmae[30], int libraryCode, int librarynumber, char author[30], int libraryStorage);
	~Library();
	void setLibraryNmae(char libraryNmae[]);
	char* getLibraryNmae();
	void setlibraryCode(int libraryCode);
	int getLibraryCode();
	void setLibrarynumber(int librarynumber);
	int getLibrarynumber();
	void setAuthor(char author[]);
	char* getAuthor();
	void setLibraryStorage(int libraryStorage);
	int getLibraryStorage();


};