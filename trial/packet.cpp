#include "packet.h"

uint32_t Packet::instance_count = 0;

Packet::Packet(
        double sending_time, 
        uint32_t seq_no, 
        uint32_t pf_priority,
        uint32_t size 
    ) {
    this->sending_time = sending_time;
    this->seq_no = seq_no;
    this->pf_priority = pf_priority;
    this->size = size;

    this->type = NORMAL_PACKET;
    this->unique_id = Packet::instance_count++;
    this->total_queuing_delay = 0;
}


