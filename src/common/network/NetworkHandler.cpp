NetworkHandler::NetworkHandler(Scheduler&, NetworkHandler::NetworkStatisticsConfig)
NetworkHandler::getPrimaryNetworkId() const
NetworkHandler::~NetworkHandler()
NetworkHandler::~NetworkHandler()
NetworkHandler::host(ConnectionDefinition const&)
NetworkHandler::connect(Social::GameConnectionInfo, Social::GameConnectionInfo)
NetworkHandler::disconnect()
NetworkHandler::update(std::vector<Player*, std::allocator<Player*> > const*)
NetworkHandler::Connection::update()
NetworkHandler::runEvents(bool)
NetworkHandler::registerClientInstance(NetEventCallback&, unsigned char)
NetworkHandler::registerServerInstance(NetEventCallback&)
NetworkHandler::unregisterClientOrServerInstance(unsigned char const&)
NetworkHandler::Connection::setChannelPaused(unsigned int, bool)
NetworkHandler::_getConnectionFromId(NetworkIdentifier const&) const
NetworkHandler::Connection::receivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
NetworkHandler::_sortAndPacketizeEvents(NetworkHandler::Connection&, std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l> > >)
NetworkHandler::onConnectionClosed(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
NetworkHandler::cleanupResourcePackManager(NetworkIdentifier const&)
NetworkHandler::onAllConnectionsClosed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
NetworkHandler::onNewIncomingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>)
NetworkHandler::onNewOutgoingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>)
NetworkHandler::onOutgoingConnectionFailed()
NetworkHandler::onWebsocketRequest(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::function<void ()>)
NetworkHandler::onNewIncomingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>)
NetworkHandler::onNewOutgoingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>)
NetworkHandler::useIPv4Only() const
NetworkHandler::useIPv6Only() const
NetworkHandler::setUseIPv6Only(bool)
NetworkHandler::setDefaultGamePort(unsigned short)
NetworkHandler::getDefaultGamePort() const
NetworkHandler::setDefaultGamePortv6(unsigned short)
NetworkHandler::getDefaultGamePortv6() const
NetworkHandler::enableAsyncFlush(NetworkIdentifier const&)
NetworkHandler::getPingTimeForConnection(Social::GameConnectionInfo const&, std::function<void (unsigned int)>)
NetworkHandler::getNetworkStatistics() const
NetworkHandler::getConnectionInfo() const
NetworkHandler::getPeerForUser(NetworkIdentifier const&)
NetworkHandler::getEncryptedPeerForUser(NetworkIdentifier const&)
NetworkHandler::getNetworkPacketRecorderForUser(NetworkIdentifier const&)
NetworkHandler::isServer() const
NetworkHandler::isLocalConnectionId(NetworkIdentifier const&) const
NetworkHandler::isHostingPlayer(NetworkIdentifier const&, unsigned char const&) const
NetworkHandler::setHostingPlayerIdentity(NetworkIdentifier const&, unsigned char const&)
NetworkHandler::getServerId() const
NetworkHandler::resetLocalNetworkId()
NetworkHandler::getLocalNetworkId() const
NetworkHandler::send(NetworkIdentifier const&, Packet const&, unsigned char)
NetworkHandler::_sendInternal(NetworkIdentifier const&, Packet const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
NetworkHandler::sendToMultiple(std::vector<NetworkIdentifierWithSubId, std::allocator<NetworkIdentifierWithSubId> > const&, Packet const&)
NetworkHandler::flush(NetworkIdentifier const&, std::function<void ()>&&)
NetworkHandler::getConnections() const
NetworkHandler::getResourcePackUploadManager(PacketSender&, NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
NetworkHandler::getResourcePackDownloadManager(PacketSender&, NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
NetworkHandler::getResourcePackDownloadManager(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
NetworkHandler::getServerLocator()
NetworkHandler::getConnector()
NetworkHandler::getUPnPInterface()
NetworkHandler::setCloseConnection(NetworkIdentifier const&)
NetworkHandler::setConnectionChannelPaused(NetworkIdentifier const&, unsigned int, bool)
NetworkHandler::closeConnection(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
NetworkHandler::Connection::Connection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>, std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l> > >, bool, PacketObserver*, Scheduler&)
