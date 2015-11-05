#include <iostream>
#include <string>

#include "host.h"
using namespace std;

//mypacket= new packet(2,"murugan");

int main()
{
//int pno=2;
//string name="trial";
packet mypacket;
mypacket.set_packet(2,1460,"murugan");
mypacket.display_packet();

host server;
server.set_host(1,"server",4);
server.send_pkt(mypacket, 2);
server.display_send_pkt(mypacket);

host client;
client.set_host(1,"client",4);
client.recv_pkt(mypacket);
client.display_recv_pkt(mypacket);


return 0;

}

