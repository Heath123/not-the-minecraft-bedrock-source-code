Level::createUniqueLevelID[abi:cxx11](int)
Level::createRandomSeed()
Level::Level(SoundPlayer&, std::unique_ptr<LevelStorage, std::default_delete<LevelStorage> >, IMinecraftEventing&, bool, Scheduler&, StructureManager&, ResourcePackManager&, IEntityRegistryOwner&, std::unique_ptr<BlockComponentFactory, std::default_delete<BlockComponentFactory> >, std::unique_ptr<BlockDefinitionGroup, std::default_delete<BlockDefinitionGroup> >)
Level::initialize(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, LevelSettings const&, LevelData*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*)
Level::addListener(LevelListener&)
Level::setRemotePlayerEventCoordinator(std::unique_ptr<PlayerEventCoordinator, std::default_delete<PlayerEventCoordinator> >&&)
Level::setServerPlayerEventCoordinator(std::unique_ptr<ServerPlayerEventCoordinator, std::default_delete<ServerPlayerEventCoordinator> >&&)
Level::setClientPlayerEventCoordinator(std::unique_ptr<ClientPlayerEventCoordinator, std::default_delete<ClientPlayerEventCoordinator> >&&)
Level::setActorEventCoordinator(std::unique_ptr<ActorEventCoordinator, std::default_delete<ActorEventCoordinator> >&&)
Level::_setClientLevelEventCoordinator(std::unique_ptr<ClientLevelEventCoordinator, std::default_delete<ClientLevelEventCoordinator> >&&)
Level::_setServerLevelEventCoordinator(std::unique_ptr<ServerLevelEventCoordinator, std::default_delete<ServerLevelEventCoordinator> >&&)
Level::setBlockEventCoordinator(std::unique_ptr<BlockEventCoordinator, std::default_delete<BlockEventCoordinator> >&&)
Level::setItemEventCoordinator(std::unique_ptr<ItemEventCoordinator, std::default_delete<ItemEventCoordinator> >&&)
Level::getBiomeRegistry()
Level::getSurfaceBuilderRegistry()
Level::getFeatureRegistry()
Level::setDefaultGameType(GameType)
Level::_resetBiomeData()
Level::_loadBiomeData()
Level::getCurrentTick() const
Level::createPhotoStorage()
Level::_loadAutonomousEntities()
Level::~Level()
Level::~Level()
Level::startLeaveGame()
Level::getEventing()
Level::saveGameData()
Level::saveVillages()
Level::saveBiomeData()
Level::setNetEventCallback(NetEventCallback*)
Level::setPacketSender(PacketSender*)
Level::_removeAllPlayers()
Level::isLeaveGameDone()
Level::createDimension(AutomaticID<Dimension, int>)
Level::getDimension(AutomaticID<Dimension, int>) const
Level::getDimensionFactory()
Level::forEachDimension(std::function<bool (Dimension&)>)
Level::forEachDimension(std::function<bool (Dimension const&)>) const
Level::getChunkTickRange() const
Level::getLevelData() const
Level::getPortalForcer()
Level::requestPlayerChangeDimension(Player&, std::unique_ptr<ChangeDimensionRequest, std::default_delete<ChangeDimensionRequest> >)
Level::_handleChangeDimensionRequests()
Level::entityChangeDimension(Actor&, AutomaticID<Dimension, int>)
Level::getDimensionConversionData() const
Level::_playerChangeDimension(Player*, ChangeDimensionRequest&)
Level::forceRemoveEntity(Actor&)
Level::getSharedSpawnPos()
Level::getPlayer(ActorUniqueID) const
Level::isPlayerSuspended(Player&) const
Level::_handlePlayerSuspension()
Level::_suspendPlayer(mce::UUID const&)
Level::_resumePlayer(mce::UUID const&)
Level::_fixEntitiesRegion(std::vector<Actor*, std::allocator<Actor*> >&, BlockSource const&, Dimension&)
Level::checkAndHandleMaterial(AABB const&, MaterialType, Actor*)
Level::checkMaterial(AABB const&, MaterialType, Actor*)
Level::updateSleepingPlayerList()
Level::_syncTime(int)
Level::isClientSide() const
Level::_cleanupDisconnectedPlayers()
Level::_getServerLevelEventCoordinator()
Level::onPlayerDeath(Player&, ActorDamageSource const&)
Level::fetchEntity(ActorUniqueID, bool) const
Level::getGameRules()
Level::tick()
Level::tickEntities()
Level::setTime(int)
Level::getTime() const
Level::forEachPlayer(std::function<bool (Player&)>)
Level::getActivePlayerCount() const
Level::tickEntitySystems()
Level::_saveSomeChunks()
Level::_isSavingRequired() const
Level::_pollSaveGameStatistics()
Level::directTickEntities(BlockSource&)
Level::saveDirtyChunks()
Level::findPath(Actor&, int, int, int, NavigationComponent&)
Level::findPath(Actor&, Actor&, NavigationComponent&)
Level::broadcastLevelEvent(LevelEvent, Vec3 const&, int, Player*)
Level::broadcastLevelEvent(LevelEvent, CompoundTag const&, Player*)
Level::playSound(BlockSource&, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool)
Level::getPrimaryLocalPlayer() const
Level::playSound(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool)
Level::playSynchronizedSound(BlockSource&, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool)
Level::playSynchronizedSound(BlockSource&, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool)
Level::broadcastSoundEvent(BlockSource&, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool)
Level::broadcastSoundEvent(BlockSource&, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool)
Level::broadcastDimensionEvent(BlockSource&, LevelEvent, Vec3 const&, int, Player*)
Level::broadcastDimensionEvent(BlockSource&, LevelEvent, Vec3 const&, Block const&, Player*)
Level::handleLevelEvent(LevelEvent, Vec3 const&, int)
Level::handleLevelEvent(LevelEvent, CompoundTag const&)
Level::handleSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool)
Level::handleSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Vec3 const&, float, float)
Level::handleStopSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Level::handleStopAllSounds()
Level::addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool)
Level::sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int)
Level::addGlobalEntity(BlockSource&, std::unique_ptr<Actor, std::default_delete<Actor> >)
Level::addAutonomousEntity(BlockSource&, std::unique_ptr<Actor, std::default_delete<Actor> >)
Level::addEntity(BlockSource&, std::unique_ptr<Actor, std::default_delete<Actor> >)
Level::getDifficulty() const
Level::getNextRuntimeID()
Level::getActorEventCoordinator()
Level::addPlayer(std::unique_ptr<Player, std::default_delete<Player> >)
Level::_validatePlayerName(Player&)
Level::getNewPlayerId() const
Level::suspendPlayer(Player&)
Level::resumePlayer(Player&)
Level::removeAllNonPlayerEntities(ActorUniqueID)
Level::takeEntity(ActorUniqueID)
Level::borrowEntity(ActorUniqueID, LevelChunk*)
Level::getRuntimeEntity(ActorRuntimeID, bool) const
Level::findPlayer(std::function<bool (Player const&)>) const
Level::removeEntityReferences(Actor&, bool)
Level::getScoreboard()
Level::forceFlushRemovedPlayers()
Level::loadFunctionManager()
Level::levelCleanupQueueEntityRemoval(std::unique_ptr<Actor, std::default_delete<Actor> >&&, bool)
Level::queueEntityRemoval(std::unique_ptr<Actor, std::default_delete<Actor> >&&, bool)
Level::registerTemporaryPointer(_TickPtr&)
Level::unregisterTemporaryPointer(_TickPtr&)
Level::getMob(ActorUniqueID) const
Level::removeListener(LevelListener&)
Level::_tickTemporaryPointers()
Level::_clientHandleAddOwnedEntity(EntityNetId)
Level::_clientHandleAddWeakRefEntity(EntityNetId, WeakRefT<EntityRefTraits> const&)
Level::_clientHandleRemoveOwnedEntity(EntityNetId)
Level::_clientHandleRemoveWeakRefEntity(EntityNetId)
Level::explode(BlockSource&, Actor*, Vec3 const&, float, bool, bool, float, bool)
Level::spawnParticleEffect(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Vec3 const&, Dimension*)
Level::spawnParticleEffect(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Actor const&, Vec3 const&)
Level::denyEffect(Vec3 const&)
Level::potionSplash(Vec3 const&, Color const&, bool)
Level::extinguishFire(BlockSource&, BlockPos const&, unsigned char)
Level::setDifficulty(Difficulty)
Level::saveLevelData()
Level::setMultiplayerGameIntent(bool)
Level::getMultiplayerGameIntent() const
Level::setMultiplayerGame(bool)
Level::isMultiplayerGame() const
Level::setLANBroadcastIntent(bool)
Level::getLANBroadcastIntent() const
Level::setLANBroadcast(bool)
Level::getLANBroadcast() const
Level::setXBLBroadcastIntent(Social::GamePublishSetting)
Level::getXBLBroadcastIntent() const
Level::hasXBLBroadcastIntent() const
Level::setXBLBroadcastMode(Social::GamePublishSetting)
Level::getXBLBroadcastMode() const
Level::hasXBLBroadcast() const
Level::setPlatformBroadcastIntent(Social::GamePublishSetting)
Level::getPlatformBroadcastIntent() const
Level::hasPlatformBroadcastIntent() const
Level::setPlatformBroadcastMode(Social::GamePublishSetting)
Level::getPlatformBroadcastMode() const
Level::hasPlatformBroadcast() const
Level::setHasLockedBehaviorPack(bool)
Level::setHasLockedResourcePack(bool)
Level::setCommandsEnabled(bool)
Level::setWorldTemplateOptionsUnlocked()
Level::animateTick(Actor&)
Level::getSeed()
Level::setDefaultSpawn(BlockPos const&)
Level::getDefaultSpawn() const
Level::getDefaultGameType() const
Level::getRemotePlayerEventCoordinator()
Level::getServerPlayerEventCoordinator()
Level::getClientPlayerEventCoordinator()
Level::getBlockEventCoordinator()
Level::_getClientLevelEventCoordinator()
Level::getItemEventCoordinator()
Level::broadcastEntityEvent(Actor*, ActorEvent, int)
Level::addBossEventListener(BossEventListener*)
Level::removeBossEventListener(BossEventListener*)
Level::broadcastBossEvent(BossEventUpdateType, ActorUniqueID const&, BossEventPacket const&)
Level::broadcastBossEvent(BossEventUpdateType)
Level::areBossEventListenersReady()
Level::hasLevelStorage() const
Level::getLevelStorage()
Level::getLevelStorage() const
Level::getLevelData()
Level::getPhotoStorage()
Level::_saveAllMapData()
Level::savePlayers()
Level::_saveAutonomousEntities()
Level::saveAdditionalData()
Level::deferTimedStorageActions(bool)
Level::_checkUserStorage()
Level::getTickingAreasMgr()
Level::getTickingArea(mce::UUID const&) const
Level::getPlayerNames[abi:cxx11]()
Level::getPlayer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Level::getPlayer(mce::UUID const&) const
Level::getPlayerByXuid(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Level::getPlayerFromUnknownIdentifier(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Level::getNextPlayer(ActorUniqueID const&, bool)
Level::getPrevPlayer(ActorUniqueID const&, bool)
Level::getNumRemotePlayers()
Level::getPlatformPlayer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Level::getPlayerFromServerId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Level::getRuntimePlayer(ActorRuntimeID) const
Level::getRandomPlayer()
Level::getRandom() const
Level::getBiomeRegistry() const
Level::getBlockPalette() const
Level::getBlockPalette()
Level::getFeatureRegistry() const
Level::getFeatureTypeFactory() const
Level::getFeatureTypeFactory()
Level::getJigsawStructureRegistry() const
Level::getJigsawStructureRegistry()
Level::getStructureManager()
Level::getStructureManager() const
Level::getBiomeComponentFactory() const
Level::getBiomeComponentFactory()
Level::getSurfaceBuilderRegistry() const
Level::getDimensionFactory() const
Level::getPlayerColor(Player const&) const
Level::onSourceCreated(BlockSource&)
Level::onSourceDestroyed(BlockSource&)
Level::onNewChunk(BlockSource&, LevelChunk&)
Level::onNewChunkFor(Player&, LevelChunk&)
Level::onChunkLoaded(LevelChunk&)
Level::onChunkDiscarded(LevelChunk&)
Level::removeAutonomousEntity(Actor*, LevelChunk*)
Level::forEachPlayer(std::function<bool (Player const&)>) const
Level::getUserCount() const
Level::getUsers()
Level::getUsers() const
Level::_getValidatedPlayerName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Level::destroyBlock(BlockSource&, BlockPos const&, bool)
Level::getSpawner() const
Level::getProjectileFactory() const
Level::getEntityDefinitions() const
Level::getBlockDefinitions() const
Level::getBlockComponentFactory()
Level::getBlockComponentFactory() const
Level::getActorAnimationGroup() const
Level::getActorAnimationControllerGroup() const
Level::getSpawnRules() const
Level::getSpawnGroupRegistry() const
Level::getSpawnRulesMutable() const
Level::getBehaviorTreeGroup() const
Level::getBehaviorFactory() const
Level::isUsableLevel(Level*)
Level::getTearingDown() const
Level::getPlayerList()
Level::getPlayerList() const
Level::getPlayerXUID[abi:cxx11](mce::UUID const&) const
Level::getPlayerPlatformOnlineId[abi:cxx11](mce::UUID const&) const
Level::getGlobalEntities()
Level::getAutonomousEntities()
Level::getAutonomousActiveEntity(ActorUniqueID) const
Level::getAutonomousInactiveEntity(ActorUniqueID) const
Level::getAutonomousEntity(ActorUniqueID) const
Level::getAutonomousLoadedEntities()
Level::getPacketSender() const
Level::getNetEventCallback() const
Level::getHitResult()
Level::getLiquidHitResult()
Level::getAdventureSettings()
Level::getGameRules() const
Level::getDefaultAbilities()
Level::getWireframeQueue() const
Level::getWireframeQueue()
Level::hasStartWithMapEnabled() const
Level::setFinishedInitializing()
Level::getLootTables()
Level::updateWeather(float, int, float, int)
Level::takePicture(cg::ImageBuffer&, Actor*, Actor*, ScreenshotOptions&)
Level::upgradeStorageVersion(StorageVersion)
Level::save()
Level::suspendAndSave()
Level::waitAsyncSuspendWork()
Level::_destroyEffect(BlockPos const&, Block const&, int)
Level::addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&)
Level::addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&)
Level::addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float)
Level::addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float)
Level::addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool)
Level::hasCommandsEnabled() const
Level::hasExperimentalGameplayEnabled() const
Level::useMsaGamertagsOnly() const
Level::setMsaGamertagsOnly(bool)
Level::getSpecialMultiplier(AutomaticID<Dimension, int>)
Level::getNewUniqueID()
Level::isExporting() const
Level::setIsExporting(bool)
Level::getSavedData() const
Level::getScreenshotsFolder[abi:cxx11]() const
Level::getLevelId[abi:cxx11]() const
Level::setLevelId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)
Level::isEdu() const
Level::runCommand(HashedString const&, CommandOrigin&, CommandOriginSystem, CurrentCmdVersion)
Level::getClientResourcePackManager() const
Level::getServerResourcePackManager() const
Level::addEntryToTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Level::dropEntryFromTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Level::clearTagCache()
Level::decrementTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, TagRegistry&)
Level::incrementTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, TagRegistry&)
Level::getCurrentServerTick() const
Level::getMapSavedData(ActorUniqueID)
Level::_loadMapData(ActorUniqueID const&)
Level::getMapSavedData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&)
Level::requestMapInfo(ActorUniqueID)
Level::createMapSavedData(ActorUniqueID const&, BlockPos const&, AutomaticID<Dimension, int>, int)
Level::createMapSavedData(std::vector<ActorUniqueID, std::allocator<ActorUniqueID> > const&, BlockPos const&, AutomaticID<Dimension, int>, int)
Level::_createMapSavedData(ActorUniqueID const&)
Level::copyAndLockMap(ActorUniqueID, ActorUniqueID)
Level::expandMapByID(ActorUniqueID, bool)
Level::getNetherScale() const
Level::getPlayerAbilities(ActorUniqueID const&)
Level::setPlayerAbilities(ActorUniqueID const&, Abilities)
Level::sendAllPlayerAbilities(Player const&)
Level::tickedMob()
Level::getTickedMobCountPrevious() const
Level::getGlobalBlockPalette() const
Level::getRecipes() const
Level::getTagRegistry()
Level::registerBorderBlock(BlockLegacy const&)
Level::getEducationLevelSettings() const
Level::setEducationLevelSettings(EducationLevelSettings)
Level::saveEducationLevelSettings()
Level::getServerAuthoritativeMovement() const
Level::setServerAuthoritativeMovement(bool)
Level::shouldCorrectPlayerMovement() const
Level::setCorrectPlayerMovement(bool)
Level::getPlayerMovementScoreThreshold() const
Level::setPlayerMovementScoreThreshold(float)
Level::getPlayerMovementDistanceThreshold() const
Level::getPlayerMovementDistanceThresholdSqr() const
Level::setPlayerMovementDistanceThreshold(float)
Level::getPlayerMovementDurationThreshold() const
Level::setPlayerMovementDurationThreshold(std::chrono::duration<long, std::ratio<1l, 1000l> >)
Level::canUseSkin(SerializedSkin const&, NetworkIdentifier const&, mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
PendingRemovalInfo::PendingRemovalInfo(std::unique_ptr<Actor, std::default_delete<Actor> >, int)
PendingRemovalInfo::~PendingRemovalInfo()
