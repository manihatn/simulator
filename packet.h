// definition of a simple packet
#include <iostream>
#include <string>
//#include "host.h"
using namespace std;

class packet{
	public:
		int pno;
		int size;
		string name;
	//	Host *source;
	//	Host *destination;
		//packet(void);
		//packet(int pno, string name);
		void set_packet(int i, int size, string name);
		void display_packet(void);
};

