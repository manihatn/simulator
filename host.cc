#include "host.h"

void host::set_host(int id, string name, int number_of_ports)
{
	this->id=id;
	this->name=name;
	this->number_of_ports=number_of_ports;

}

void host::send_pkt(packet pkt, int port)
{
	this->pkt=pkt;
	this->port=port;	

}


void host::display_send_pkt(packet pkt, int port)
{
	std::cout<<pkt.pno<<"\n";
	std::cout<<pkt.name<<"\n";
	std::cout<<port<<"\n";

}
