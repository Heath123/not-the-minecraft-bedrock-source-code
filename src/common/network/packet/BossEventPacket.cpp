BossEventPacket::BossEventPacket()
BossEventPacket::BossEventPacket(BossEventUpdateType, RaidBossComponent&)
BossEventPacket::BossEventPacket(BossEventUpdateType, ActorUniqueID, BossComponent&)
BossEventPacket::BossEventPacket(BossEventUpdateType, ActorUniqueID, ActorUniqueID)
BossEventPacket::getId() const
BossEventPacket::getName[abi:cxx11]() const
BossEventPacket::write(BinaryStream&) const
BossEventPacket::read(ReadOnlyBinaryStream&)
