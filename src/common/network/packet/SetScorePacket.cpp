SetScorePacket::SetScorePacket(ScoreboardId const&)
SetScorePacket::SetScorePacket(ScorePacketType, ScoreboardId const&, Objective const&)
SetScorePacket::SetScorePacket(std::vector<ScorePacketInfo, std::allocator<ScorePacketInfo> >)
SetScorePacket::~SetScorePacket()
SetScorePacket::~SetScorePacket()
SetScorePacket::getId() const
SetScorePacket::getName[abi:cxx11]() const
SetScorePacket::write(BinaryStream&) const
SetScorePacket::read(ReadOnlyBinaryStream&)
SetScorePacket::remove(ScoreboardId const&)
SetScorePacket::remove(ScoreboardId const&, Objective const&)
SetScorePacket::change(ScoreboardId const&, Objective const&)
SetScorePacket::change(std::vector<ScorePacketInfo, std::allocator<ScorePacketInfo> >)
