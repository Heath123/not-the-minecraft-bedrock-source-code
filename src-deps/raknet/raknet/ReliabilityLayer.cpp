Ceil(double)
RakNet::BPSTracker::TimeAndValue2::TimeAndValue2()
RakNet::BPSTracker::TimeAndValue2::~TimeAndValue2()
RakNet::BPSTracker::TimeAndValue2::TimeAndValue2(unsigned long, unsigned long)
RakNet::BPSTracker::BPSTracker()
RakNet::BPSTracker::Reset(char const*, unsigned int)
RakNet::BPSTracker::~BPSTracker()
RakNet::BPSTracker::GetTotal1() const
RakNet::BPSTracker::ClearExpired1(unsigned long)
RakNet::SplitPacketChannelComp(unsigned short const&, RakNet::SplitPacketChannel* const&)
SplitPacketIndexComp(unsigned int const&, RakNet::InternalPacket* const&)
RakNet::ReliabilityLayer::ReliabilityLayer()
RakNet::ReliabilityLayer::InitializeVariables()
RakNet::ReliabilityLayer::~ReliabilityLayer()
RakNet::ReliabilityLayer::FreeMemory(bool)
RakNet::ReliabilityLayer::Reset(bool, int, bool)
RakNet::ReliabilityLayer::SetTimeoutTime(unsigned int)
RakNet::ReliabilityLayer::GetTimeoutTime()
RakNet::ReliabilityLayer::InitHeapWeights()
RakNet::ReliabilityLayer::FreeThreadSafeMemory()
RakNet::ReliabilityLayer::ClearPacketsAndDatagrams()
RakNet::ReliabilityLayer::FreeInternalPacketData(RakNet::InternalPacket*, char const*, unsigned int)
RakNet::ReliabilityLayer::ReleaseToInternalPacketPool(RakNet::InternalPacket*)
RakNet::ReliabilityLayer::RemoveFromDatagramHistory(RakNet::uint24_t)
RakNet::ReliabilityLayer::HandleSocketReceiveFromConnectedPlayer(char const*, unsigned int, RakNet::SystemAddress&, DataStructures::List<RakNet::PluginInterface2*>&, int, RakNet::RakNetSocket2*, RakNet::RakNetRandom*, unsigned long, RakNet::BitStream&)
RakNet::ReliabilityLayer::AllocateFromInternalPacketPool()
RakNet::ReliabilityLayer::AllocInternalPacketData(RakNet::InternalPacket*, unsigned int, bool, char const*, unsigned int)
RakNet::ReliabilityLayer::GetMessageNumberNodeByDatagramIndex(RakNet::uint24_t, unsigned long*)
RakNet::ReliabilityLayer::RemovePacketFromResendListAndDeleteOlderReliableSequenced(RakNet::uint24_t, unsigned long, DataStructures::List<RakNet::PluginInterface2*>&, RakNet::SystemAddress const&)
RakNet::ReliabilityLayer::SendAcknowledgementPacket(RakNet::uint24_t, unsigned long)
RakNet::ReliabilityLayer::CreateInternalPacketFromBitStream(RakNet::BitStream*, unsigned long)
RakNet::ReliabilityLayer::InsertIntoSplitPacketList(RakNet::InternalPacket*, unsigned long)
RakNet::ReliabilityLayer::BuildPacketFromSplitPacketList(unsigned short, unsigned long, RakNet::RakNetSocket2*, RakNet::SystemAddress&, RakNet::RakNetRandom*, RakNet::BitStream&)
RakNet::ReliabilityLayer::IsOlderOrderedPacket(RakNet::uint24_t, RakNet::uint24_t)
RakNet::ReliabilityLayer::Receive(unsigned char**)
RakNet::ReliabilityLayer::Send(char*, unsigned int, PacketPriority, PacketReliability, unsigned char, bool, int, unsigned long, unsigned int)
RakNet::ReliabilityLayer::AllocInternalPacketData(RakNet::InternalPacket*, unsigned char*)
RakNet::ReliabilityLayer::GetMaxDatagramSizeExcludingMessageHeaderBytes()
RakNet::ReliabilityLayer::GetMaxMessageHeaderLengthBits()
RakNet::ReliabilityLayer::SplitPacket(RakNet::InternalPacket*)
RakNet::ReliabilityLayer::AddToUnreliableLinkedList(RakNet::InternalPacket*)
RakNet::ReliabilityLayer::GetNextWeight(int)
RakNet::ReliabilityLayer::Update(RakNet::RakNetSocket2*, RakNet::SystemAddress&, int, unsigned long, unsigned int, DataStructures::List<RakNet::PluginInterface2*>&, RakNet::RakNetRandom*, RakNet::BitStream&)
RakNet::ReliabilityLayer::RemoveFromUnreliableLinkedList(RakNet::InternalPacket*)
RakNet::ReliabilityLayer::AckTimeout(unsigned long)
RakNet::ReliabilityLayer::SendACKs(RakNet::RakNetSocket2*, RakNet::SystemAddress&, unsigned long, RakNet::RakNetRandom*, RakNet::BitStream&)
RakNet::ReliabilityLayer::GetMaxDatagramSizeExcludingMessageHeaderBits()
RakNet::ReliabilityLayer::SendBitStream(RakNet::RakNetSocket2*, RakNet::SystemAddress&, RakNet::BitStream*, RakNet::RakNetRandom*, unsigned long)
RakNet::ReliabilityLayer::IsResendQueueEmpty() const
RakNet::ReliabilityLayer::ResetPacketsAndDatagrams()
RakNet::ReliabilityLayer::PushDatagram()
RakNet::ReliabilityLayer::PopListHead(bool)
RakNet::ReliabilityLayer::PushPacket(unsigned long, RakNet::InternalPacket*, bool)
RakNet::ReliabilityLayer::InsertPacketIntoResendList(RakNet::InternalPacket*, unsigned long, bool, bool)
RakNet::ReliabilityLayer::ResendBufferOverflow() const
RakNet::ReliabilityLayer::GetMessageHeaderLengthBits(RakNet::InternalPacket const*)
RakNet::ReliabilityLayer::AddFirstToDatagramHistory(RakNet::uint24_t, RakNet::uint24_t, unsigned long)
RakNet::ReliabilityLayer::AddSubsequentToDatagramHistory(RakNet::ReliabilityLayer::MessageNumberNode*, RakNet::uint24_t)
RakNet::ReliabilityLayer::WriteToBitStreamFromInternalPacket(RakNet::BitStream*, RakNet::InternalPacket const*, unsigned long)
RakNet::ReliabilityLayer::AddFirstToDatagramHistory(RakNet::uint24_t, unsigned long)
RakNet::ReliabilityLayer::IsOutgoingDataWaiting()
RakNet::ReliabilityLayer::AreAcksWaiting()
RakNet::ReliabilityLayer::ApplyNetworkSimulator(double, unsigned int, unsigned int)
RakNet::ReliabilityLayer::SetSplitMessageProgressInterval(int)
RakNet::ReliabilityLayer::SetUnreliableTimeout(unsigned int)
RakNet::ReliabilityLayer::IsSendThrottled(int)
RakNet::ReliabilityLayer::UpdateWindowFromPacketloss(unsigned long)
RakNet::ReliabilityLayer::UpdateWindowFromAck(unsigned long)
RakNet::ReliabilityLayer::RemoveFromList(RakNet::InternalPacket*, bool)
RakNet::ReliabilityLayer::GetSHA1(unsigned char*, unsigned int, char*)
RakNet::ReliabilityLayer::CheckSHA1(char*, unsigned char*, unsigned int)
RakNet::ReliabilityLayer::AllocInternalPacketData(RakNet::InternalPacket*, RakNet::InternalPacketRefCountedData**, unsigned char*, unsigned char*)
RakNet::ReliabilityLayer::BuildPacketFromSplitPacketList(RakNet::SplitPacketChannel*, unsigned long)
RakNet::ReliabilityLayer::CreateInternalPacketCopy(RakNet::InternalPacket*, int, int, unsigned long)
RakNet::ReliabilityLayer::AddToListTail(RakNet::InternalPacket*, bool)
RakNet::ReliabilityLayer::IsDeadConnection() const
RakNet::ReliabilityLayer::KillConnection()
RakNet::ReliabilityLayer::GetStatistics(RakNet::RakNetStatistics*)
RakNet::ReliabilityLayer::GetResendListDataSize() const
RakNet::ReliabilityLayer::GetNextSendTime() const
RakNet::ReliabilityLayer::GetTimeBetweenPackets() const
RakNet::ReliabilityLayer::TagMostRecentPushAsSecondOfPacketPair()
RakNet::ReliabilityLayer::MoveToListHead(RakNet::InternalPacket*)
RakNet::ReliabilityLayer::ValidateResendList() const
