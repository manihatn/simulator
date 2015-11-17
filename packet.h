// definition of a simple packet
#include <iostream>
#include <string>

class host;

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

class mypacket
{
public:
		int size;
	        host *s1;
		host *c1;
		void set_src_dst(host *s1, host *c1);
		void print_set_src_dst();
};

