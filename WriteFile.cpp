#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(ofstream output_file1, bool closed1)
{
	output_file = new ofstream(output_file1->getText());
	closed = new bool(closed1->getText());
}

WriteFile::~WriteFile()
{
	delete output_file;
	delete closed;
}

void Song::displayWriteFile()
{
	output_file->displayString();
	cout << " ";
	closed->displayString();
	cout << endl;
}

/*
WriteFile* createWriteFile(const char* file_name)
{
   WriteFile* wf = new WriteFile;
   wf->output_file.open(file_name);
   wf->closed = false;
   return wf;
}

void destroyWriteFile(WriteFile* wf)
{
   close(wf);
   delete wf;
}

void close(WriteFile* wf)
{
   if (!wf->closed)
   {
      wf->output_file.close();
      wf->closed = true;
   }
}

void writeLine(WriteFile* wf, String* line)
{
   if (!wf->closed && line->length() > 0)
   {
      wf->output_file << line->getText() << endl;
   }
}
*/
