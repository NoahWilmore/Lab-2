#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}

//WriteFile::~WriteFile() {}

void WriteFile::close()
{
   if (!this->closed)
   {
      this->output_file.close();
      this->closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!this->closed && line->length() > 0)
   {
      this->output_file << line->getText() << endl;
   }
}



/*
WriteFile::WriteFile(ofstream output_file, bool closed1)
{
	this->output_file = new ofstream(output_file->getText());
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

void writeLine::WriteFile(WriteFile* wf, String* line)
{
   if (!wf->closed && line->length() > 0)
   {
      wf->output_file << line->getText() << endl;
   }
}
*/

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
