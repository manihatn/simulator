#include "switch.h"

void l2switch::set_l2switch(int id, string name, int number_of_ports, int switching_latency)
{
	this->id=id;
	this->name=name;
	this->number_of_ports=number_of_ports;
	this->switching_latency=switching_latency;

}

void l2switch::send_pkt(packet pkt, int port)
{
	this->pkt=pkt;
	this->port=port;	

}


void l2switch::display_send_pkt(packet pkt)
{
	std::cout<<pkt.pno<<"\n";
	std::cout<<pkt.name<<"\n";
	std::cout<<pkt.size<<"\n";

}


void l2switch::recv_pkt(packet pkt)
{
	this->pkt=pkt;

}


void l2switch::display_recv_pkt(packet pkt)
{
	std::cout<<pkt.pno<<"\n";
	std::cout<<pkt.name<<"\n";
	std::cout<<pkt.size<<"\n";
}
