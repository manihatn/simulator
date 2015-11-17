#include "packet.h"
//#include "host.h"
//packet::packet(){
//
//}
//packet::packet(int pno, string name)
//{
//	this->pno=pno;
//	this->name=name;
//}
void packet::set_packet(int i, int size, string name){
	this->pno=i;
	this->name=name;
	this->size=size;

}

void packet::display_packet(){
	std::cout<<this->pno<<"\n";
	std::cout<<this->name<<"\n";
	std::cout<<this->size<<"\n";
}


void mypacket::set_src_dst(host *s1, host *c1){
	this->s1 = s1;
	this->c1 = c1;
	this->size = 1460;
}

void mypacket::print_set_src_dst(){
	std::cout<<this->s1<<"\n";
	std::cout<<this->c1<<"\n";
	std::cout<<this->size<<"\n";
}


//int main()
//{
//
//	packet mypacket;
//	mypacket.set_packet(2,"murugan");
//	mypacket.display_packet();	
//
//
//}
