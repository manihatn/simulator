#include <iostream>
#include <string>

#include "host.h"
#include "switch.h"
using namespace std;

//newpacket= new packet(2,"murugan");
const double c=2*10e8;

const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}


int main()
{
//int pno=2;
//string name="trial";

    time_t start_time;
    time(&start_time);

  cout<< currentDateTime() << " Simulator started" << endl;
	
packet newpacket;
newpacket.set_packet(2,1460,"murugan");
//newpacket.display_packet();

host server;
server.set_host(1,"server",4);
server.send_pkt(newpacket, 2);
//server.display_send_pkt(newpacket);

l2switch switch1;
switch1.set_l2switch(1,"TOR",4,10);

host client;
client.set_host(1,"client",4);
client.recv_pkt(newpacket);
//client.display_recv_pkt(newpacket);
//link simplelink;
//simplelink.properties(); // setting the transmission delay, propagation delay, bandwidth etc. 
//simplelink.attach(server, client);
//simplelink.disp_statistics();

// Transmission delay = flow_size/link_capacity
// Propagation delay = time taken to send the data via the link 

// This is how the link function should look like


// link(double length, double capacity, host server, host client ) 


mypacket sondha;
sondha.set_src_dst(&server, &client);
sondha.print_set_src_dst();

double fs=10e3;
double cap=10e9;
double len= 5 ;// in meters, this needs to be modified to be generic. 

//double td = fs/cap;
double td = sondha.size/cap;
double tp = len/c;
        cout<<"Transmission delay (in seconds): "<<td << "\n";
	cout<<"Propagation delay (in seconds): "<<tp << "\n";
	cout<<"Total delay (in seconds): "<<td+tp << "\n";


// Create a simple link 
// 
// create syn , fin and ack style packets 
// Use the parameters of congestion control algorithms to initialize 
//

    time_t end_time;
    time(&end_time);
    double duration = difftime(end_time, start_time);

  cout<< currentDateTime() << " Simulator ended. Execution time: " << duration << " seconds\n";

return 0;

}

