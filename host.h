#include <iostream>
#include <string>
#include "packet.h"

using namespace std;

class host
{
	public:
		int id;
		int port;
		string name;
		packet pkt;
		int number_of_ports;
		void set_host(int id, string name, int number_of_ports);
		void send_pkt(packet pkt, int port);
		void display_send_pkt(packet pkt);
		void display_recv_pkt(packet pkt);
		void recv_pkt(packet pkt);

};
