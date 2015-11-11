//
// Created by zerophase on 11/10/15.
//

#ifndef GAMECIRCUS_PACKETMANAGER_PACKETMANAGER_H
#define GAMECIRCUS_PACKETMANAGER_PACKETMANAGER_H

// requirements
// 1. send no more than 1024 bytes at a time. Throttle
// 2. No more than 30 requests per second. Throttle
// 3. Packet max 800 bytes. Must send in entirety
// 4. All packets have same priority
// 5. Each packet needs header in network byte order containing
//      "PKT_" followed by 4-byte unsigned int, giving packet size
//      excluding the header. (similar to IFF/PNG/WAV formats)
// 6. Packets can be concatenated together for single network send
//      via TransmitData()
// 7. Packets that cannot be sent must be queued till the next opportunity
// 8. Send called when program has data to send to the server.
// 9. Update() gets called on a semi-regular basis

class PacketManager
{
public:
    void Update(float secondsSinceLastUpdate);
    void Send(unsigned char *packetData, int packetSize);
};


#endif //GAMECIRCUS_PACKETMANAGER_PACKETMANAGER_H
