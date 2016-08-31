#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//Compiler needs to know the size
class WriteFile
{
	private:
		ofstream output_file;
		bool closed;
	public:
		WriteFile(ofstream output_file, bool closed);
		~WriteFile();
		void displayWriteFile();
		void writeLine(WriteFile* )
};

/*
WriteFile* createWriteFile(const char* file_name);
void destroyWriteFile(WriteFile* wf);
void writeLine(WriteFile* wf, String* line);
void close(WriteFile* wf);
*/

#endif
