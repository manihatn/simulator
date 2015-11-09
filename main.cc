#include <iostream>
#include <string>

#include "host.h"
using namespace std;

//mypacket= new packet(2,"murugan");
const double c=2*10e8;


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
//link simplelink;
//simplelink.properties(); // setting the transmission delay, propagation delay, bandwidth etc. 
//simplelink.attach(server, client);
//simplelink.disp_statistics();

// Transmission delay = flow_size/link_capacity
// Propagation delay = time taken to send the data via the link 

// This is how the link function should look like


// link(double length, double capacity, host server, host client ) 


double fs=10e3;
double cap=10e9;
double len= 5 ;// in meters, this needs to be modified to be generic. 

double td = fs/cap;
double tp = len/c;
        cout<<"Transmission delay (in seconds): "<<td << "\n";
	cout<<"Propagation delay (in seconds): "<<tp << "\n";
	cout<<"Total delay (in seconds): "<<td+tp << "\n";


// Crete a simple link 
// 
// create syn , fin and ack style packets 
// Use the parameters of congestion control algorithms to initialize 
// 


return 0;

}

