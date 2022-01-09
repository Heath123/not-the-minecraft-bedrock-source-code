MinecraftPackets::createPacket(MinecraftPacketIds)
MinecraftPackets::channelForPacket(MinecraftPacketIds)
PacketHeader::getChannel() const
Packet::writeWithHeader(unsigned char, BinaryStream&) const
Packet::readNoHeader(ReadOnlyBinaryStream&, unsigned char const&)
Packet::handle(NetworkIdentifier const&, NetEventCallback&, std::shared_ptr<Packet>&)
PacketUtil::degreesToByte(float)
PacketUtil::byteToDegrees(signed char)
