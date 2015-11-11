//
// Created by zerophase on 11/10/15.
//

#ifndef GAMECIRCUS_PACKETMANAGER_NETWORKCONNECTION_H
#define GAMECIRCUS_PACKETMANAGER_NETWORKCONNECTION_H

// Already implemented may be called by PacketManager
class NetworkConnection
{
public:
    static void TransmitData(unsigned char *data, int dataSize);
};


#endif //GAMECIRCUS_PACKETMANAGER_NETWORKCONNECTION_H
