ServerLevel::ServerLevel(SoundPlayer&, std::unique_ptr<LevelStorage, std::default_delete<LevelStorage> >, IMinecraftEventing&, ResourcePackManager&, ResourcePackManager&, StructureManager&, MinecraftCommands&, Scheduler&, IEntityRegistryOwner&, std::unique_ptr<BlockComponentFactory, std::default_delete<BlockComponentFactory> >, std::unique_ptr<BlockDefinitionGroup, std::default_delete<BlockDefinitionGroup> >)
ServerLevel::~ServerLevel()
ServerLevel::~ServerLevel()
ServerLevel::initialize(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, LevelSettings const&, LevelData*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*)
ServerLevel::_registerScoreboardCallbacks(ServerScoreboard&)
ServerLevel::updateSleepingPlayerList()
ServerLevel::awakenAllPlayers()
ServerLevel::stopWeather()
ServerLevel::allPlayersSleeping() const
ServerLevel::setShouldSendSleepMessage(bool)
ServerLevel::shouldSendSleepMessage() const
ServerLevel::tick()
ServerLevel::setCommandsEnabled(bool)
ServerLevel::setWorldTemplateOptionsUnlocked()
ServerLevel::getClientResourcePackManager() const
ServerLevel::getServerResourcePackManager() const
ServerLevel::getTradeTables()
ServerLevel::addEntryToTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerLevel::dropEntryFromTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerLevel::clearTagCache()
ServerLevel::decrementTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, TagRegistry&)
ServerLevel::incrementTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, TagRegistry&)
ServerLevel::runCommand(HashedString const&, CommandOrigin&, CommandOriginSystem, CurrentCmdVersion)
ServerLevel::getCommands()
ServerLevel::getFunctionManager()
ServerLevel::loadFunctionManager()
ServerLevel::saveAdditionalData()
ServerLevel::getMobEvents()
ServerLevel::getMobEvents() const
ServerLevel::setDifficulty(Difficulty)
ServerLevel::getLevelEventCoordinator()
