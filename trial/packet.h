#ifndef PACKET_H
#define PACKET_H

// This is a wonderful night
// This is a wondel night
// This is a wonderful day
// This is a wondeful night
// This is a wonderful ay

#include <stdint.h>
// TODO: Change to Enum
#define NORMAL_PACKET 0
#define ACK_PACKET 1

#define RTS_PACKET 3
#define CTS_PACKET 4
#define OFFER_PACKET 5
#define DECISION_PACKET 6
#define CAPABILITY_PACKET 7
#define STATUS_PACKET 8
#define FASTPASS_RTS 9
#define FASTPASS_SCHEDULE 10

class FastpassEpochSchedule;

class Packet {

    public:
        Packet(double sending_time, uint32_t seq_no, uint32_t pf_priority,
                uint32_t size, unsigned long long start_time, unsigned long long end_time);
        double sending_time;
        uint32_t seq_no;
        uint32_t pf_priority;
        uint32_t size;
        uint32_t unique_id;
        static uint32_t instance_count;
        int remaining_pkts_in_batch;
        int capability_seq_num_in_data;

        uint32_t type; // Normal or Ack packet
        double total_queuing_delay;
        double last_enque_time;

        int capa_data_seq;
	unsigned long long start_time;
	unsigned long long end_time;
};


#endif

