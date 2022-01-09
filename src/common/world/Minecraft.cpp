Minecraft::Minecraft(IMinecraftApp&, GameCallbacks&, Whitelist&, PermissionsFile*, Core::FilePathManager*, std::chrono::duration<long, std::ratio<1l, 1l> >, IMinecraftEventing&, NetworkHandler&, PacketSender&, unsigned char, Timer&, Timer&, ContentTierManager const&, ServerMetrics*)
Minecraft::~Minecraft()
Minecraft::resetGameSession()
Minecraft::~Minecraft()
Minecraft::clearThreadCallbacks()
Minecraft::updateScreens()
Minecraft::initAsDedicatedServer()
Minecraft::init()
Minecraft::getGameModuleServer()
Minecraft::initCommands()
Minecraft::isInitialized() const
Minecraft::startLeaveGame(bool)
Minecraft::isLeaveGameDone() const
Minecraft::clientReset()
Minecraft::setGameModeReal(GameType)
Minecraft::update()
Minecraft::getServerNetworkHandler()
Minecraft::disconnectClient(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Minecraft::tickSimtime(int, int)
Minecraft::tickRealtime(int, int)
Minecraft::getLevel() const
Minecraft::setSimTimePause(bool)
Minecraft::setSimTimeScale(float)
Minecraft::getSimPaused() const
Minecraft::isModded()
Minecraft::isOnlineClient()
Minecraft::getNetworkStatistics() const
Minecraft::hostMultiplayer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::unique_ptr<Level, std::default_delete<Level> >, Player*, mce::UUID const&, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback> >, int, bool, bool, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, ConnectionDefinition const&, std::unordered_map<PackIdVersion, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > const&, Scheduler&, TextFilteringProcessor*)
Minecraft::getClientSubId() const
Minecraft::setupServerCommands(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Minecraft::usesNonLocalConnection(NetworkIdentifier const&)
Minecraft::getNetworkHandler()
Minecraft::startClientGame(std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback> >)
Minecraft::joinWorldInProgress(std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback> >)
Minecraft::activateWhitelist()
Minecraft::getCommands()
Minecraft::hasCommands()
Minecraft::getNetEventCallback()
Minecraft::getServerLocator()
Minecraft::getServerLocator() const
Minecraft::getNetworkHandler() const
Minecraft::getEventing() const
Minecraft::onClientCreatedLevel(std::unique_ptr<Level, std::default_delete<Level> >)
Minecraft::getTimer()
Minecraft::getLastTimestep()
Minecraft::getResourceLoader()
Minecraft::getStructureManager()
Minecraft::getEntityRegistry()
