#include "packet.h"

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
//int main()
//{
//
//	packet mypacket;
//	mypacket.set_packet(2,"murugan");
//	mypacket.display_packet();	
//
//
//}
