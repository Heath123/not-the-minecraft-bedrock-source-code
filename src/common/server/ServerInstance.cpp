ServerInstance::ServerInstance(IMinecraftApp&, ServerInstanceEventCoordinator&)
ServerInstance::initializeServer(IMinecraftApp&, Whitelist&, PermissionsFile*, Core::FilePathManager*, std::chrono::duration<long, std::ratio<1l, 1l> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, LevelSettings, int, bool, ConnectionDefinition, bool, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, mce::UUID const&, IMinecraftEventing&, ResourcePackRepository&, ContentTierManager const&, ResourcePackManager&, std::function<std::unique_ptr<LevelStorage, std::default_delete<LevelStorage> > (Scheduler&)>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, LevelData*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::unique_ptr<EducationOptions, std::default_delete<EducationOptions> >, ResourcePackManager*, std::function<void ()>, std::function<void ()>, ServerMetrics*, DebugEndPoint*, bool, std::shared_ptr<Core::FileStorageArea>, unsigned short)
ServerInstance::~ServerInstance()
ServerInstance::~ServerInstance()
ServerInstance::startLeaveGame()
ServerInstance::_threadSafeExecute(std::function<void ()>)
ServerInstance::leaveGameSync()
ServerInstance::isLeaveGameDone() const
ServerInstance::stop()
ServerInstance::_update()
ServerInstance::_running() const
ServerInstance::setWakeupFrequency(int)
ServerInstance::startServerThread()
ServerInstance::queueForServerThread(std::function<void ()>)
ServerInstance::suspend()
ServerInstance::resume()
ServerInstance::onLowMemory()
ServerInstance::getLevelId[abi:cxx11]()
ServerInstance::getEventCoordinator()
ServerInstance::getScriptEngine()
ServerInstance::disconnectRemoteClientsWithMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)
ServerInstance::disconnectAllClientsWithMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)
ServerInstance::onLevelCorrupt()
