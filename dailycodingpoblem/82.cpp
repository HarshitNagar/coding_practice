#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream f;
	streampos size;
	

	f.open("name.txt", ios::binary);

	size=7;
	//memblock = new char[size];
	char memblock[size];
	while(f.is_open())
	{
		f.read(memblock, size);
		cout<<"x. "<<memblock<<endl;
	}

	return 0;
}

/*
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  streampos size;
  char * memblock;

  ifstream file ("example.bin", ios::in|ios::binary|ios::ate);
  if (file.is_open())
  {
    size = file.tellg();
    memblock = new char [size];
    file.seekg (0, ios::beg);
    file.read (memblock, size);
    file.close();

    cout << "the entire file content is in memory";

    delete[] memblock;
  }
  else cout << "Unable to open file";
  return 0;
}*/