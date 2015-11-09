#include <iostream>

class link
{
	public:
		double bandwidth;
		double transmission_delay;
		double propagation_latency;
		double loss_rate;
		host *source;
	        host *destination;	
		
                //void link_properties(); // setting the transmission delay, propagation delay, bandwidth etc. 
		link* attach( host server, host client, double bandwidth, double length);
		void disp_statistics();



};
