#include "ReadFile.h"
#include <iostream>
#include <string>

/*
ReadFile::ReadFile(ifstream input_file1, bool closed1)
{
	input_file = new ifstream(input_file1->getText());
	closed = new bool(closed1->getText());
}
*/
ReadFile::ReadFile(const char* file_name)
{
   this->input_file.open(file_name);
   this->closed = false;
   this->_eof = false;
}

ReadFile::~ReadFile()
{
	/*delete input_file;
	delete closed;*/
}

/*
void Song::displayReadFile()
{
	input_file->displayString();
	cout << " ";
	closed->displayString();
	cout << endl;
}*/
/*
void readLine::ReadFile(ReadFile* wf, String* line)
{
   if (!rf->closed && line->length() > 0)
   {
      rf->input_file << line->getText() << endl;
   }
}*/

String* ReadFile::readLine()
{
   if (closed) return NULL;
   if (this->_eof) return NULL;

   string text;
   this->_eof = !(getline(this->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}

bool ReadFile::eof()
{
   return this->_eof;
}

void ReadFile::close()
{
	//bool closed = 1;
   if (!this->closed)
   {
      this->input_file.close();
      /*this->*/closed = true;
   }
}

/*ReadFile* createReadFile(const char* file_name)
{
   ReadFile* rf = new ReadFile;

   rf->input_file.open(file_name);
   rf->closed = false;
   rf->_eof = false;

   return rf;
}

void destroyReadFile(ReadFile* rf)
{
   close(rf);
   delete rf;
}

bool eof(ReadFile* rf)
{
   return rf->_eof;
}

void close(ReadFile* rf)
{
   if (!rf->closed)
   {
      rf->input_file.close();
      rf->closed = true;
   }
}

String* readLine(ReadFile* rf)
{
   if (rf->closed) return NULL;
   if (rf->_eof) return NULL;

   string text;
   rf->_eof = !(getline(rf->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}

*/