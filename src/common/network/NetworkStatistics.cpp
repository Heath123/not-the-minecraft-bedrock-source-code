NetworkStatistics::NetworkStatistics(NetworkHandler&, TrackerType, std::function<bool (RakNet::RakNetStatistics&)>&&)
NetworkStatistics::_initRakNetProfileTracking()
NetworkStatistics::reset()
NetworkStatistics::~NetworkStatistics()
NetworkStatistics::pushStatsToProfiler() const
NetworkStatistics::~NetworkStatistics()
NetworkStatistics::_clearRakNetProfilingStats()
NetworkStatistics::_clearCSVStats()
NetworkStatistics::packetSentTo(NetworkIdentifier const&, Packet const&, unsigned int)
NetworkStatistics::getStats(int)
NetworkStatistics::packetReceivedFrom(NetworkIdentifier const&, Packet const&, unsigned int)
NetworkStatistics::dataSentTo(NetworkIdentifier const&, gsl::basic_string_span<char const, -1l>)
NetworkStatistics::dataReceivedFrom(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
NetworkStatistics::tick(std::vector<Player*, std::allocator<Player*> > const*)
NetworkStatistics::_logPeerConnectionInfo(std::vector<Player*, std::allocator<Player*> > const&, bool) const
NetworkStatistics::_logPacketInfo() const
NetworkStatistics::updateCSV(double)
operator<<(std::ostream&, FriendlySize const&)
NetworkStatistics::getVerboseInfo[abi:cxx11]() const
NetworkStatistics::getTotalPreviousSecond() const
NetworkStatistics::getAverageLast10Seconds() const
