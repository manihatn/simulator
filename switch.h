#include <iostream>
#include <string>
#include "packet.h"

using namespace std;

class l2switch
{
	public:
		int id;
		int port;
		int switching_latency;
		string name;
		packet pkt;
		int number_of_ports;
		void set_l2switch(int id, string name, int number_of_ports, int switching_latency);
		void send_pkt(packet pkt, int port);
		void display_send_pkt(packet pkt);
		void display_recv_pkt(packet pkt);
		void recv_pkt(packet pkt);

};
