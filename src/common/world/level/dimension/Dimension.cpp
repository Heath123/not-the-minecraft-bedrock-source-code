Dimension::Dimension(Level&, AutomaticID<Dimension, int>, short, Scheduler&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)
Dimension::~Dimension()
Dimension::~Dimension()
Dimension::init()
Dimension::isRedstoneTick()
Dimension::addWither(ActorUniqueID const&)
Dimension::removeWither(ActorUniqueID const&)
Dimension::removeActorByID(ActorUniqueID const&)
Dimension::getEntityIdMap() const
Dimension::getPopCap(int, bool) const
Dimension::updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool)
Dimension::backgroundTickSeasons()
Dimension::getLevel() const
Dimension::forEachPlayer(std::function<bool (Player&)>)
Dimension::startLeaveGame()
Dimension::isLeaveGameDone()
Dimension::getChunkSource() const
Dimension::getVillageManager() const
Dimension::forceSaveVillageManager()
Dimension::tickRedstone()
Dimension::tryGarbageCollectStructures()
Dimension::getWorldGenerator() const
Dimension::tick()
Dimension::getOldSkyDarken(float)
Dimension::_tickEntityChunkMoves()
Dimension::_runChunkGenerationWatchdog()
Dimension::_captureChunkMapDebugDrawData()
Dimension::transferEntityToUnloadedChunk(Vec3 const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> >)
Dimension::updateLightRamp()
Dimension::isNaturalDimension() const
Dimension::isValidSpawn(int, int) const
Dimension::getFogColor(float) const
Dimension::getMaxFogEnd() const
Dimension::getMaxFogStart() const
Dimension::isFoggyAt(int, int) const
Dimension::getCloudHeight() const
Dimension::getDefaultBiome() const
Dimension::mayRespawn() const
Dimension::hasGround() const
Dimension::getSpawnPos() const
Dimension::getSpawnYPosition() const
Dimension::hasBedrockFog()
Dimension::getClearColorScale()
Dimension::getSeasons()
Dimension::showSky() const
Dimension::isDay() const
Dimension::getTimeOfDay(float) const
Dimension::getSunAngle(float) const
Dimension::getSunlightDirection(float) const
_fakeSunHorizon(Vec3 const&)
Dimension::getSunIntensity(float, Vec3 const&, float) const
Dimension::getWeather() const
Dimension::getMoonPhase() const
Dimension::getMoonBrightness() const
Dimension::getSkyDarken(float) const
Dimension::getSkyDarken() const
Dimension::getBrightnessRamp() const
Dimension::setBrightnessRamp(unsigned int, float)
Dimension::getSunriseColor(float) const
Dimension::getSkyColor(Actor const&, float) const
Dimension::getSkyColor(BlockSource&, BlockPos const&, float) const
Dimension::getCloudColor(float)
Dimension::getStarBrightness(float)
Dimension::getId() const
Dimension::getLevelConst() const
Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD() const
Dimension::getCircuitSystem()
Dimension::getTickingAreasConst() const
Dimension::getTickingAreas()
Dimension::_onNewTickingEntity(Actor&)
Dimension::processTickingAreaRemoves()
Dimension::processTickingAreaUpdates()
Dimension::getEntityIdMapConst() const
Dimension::forEachPlayer(std::function<bool (Player const&)>) const
Dimension::findPlayer(std::function<bool (Player const&)>) const
Dimension::fetchNearestPlayer(Actor&, float)
Dimension::fetchNearestPlayer(float, float, float, float, bool)
Dimension::fetchNearestAttackablePlayer(BlockPos, float, Actor*)
Dimension::fetchNearestAttackablePlayer(Actor&, float)
Dimension::distanceToNearestPlayerSqr2D(Vec3)
Dimension::_registerEntity(Actor&)
Dimension::_unregisterEntity(Actor&)
Dimension::flagEntityforChunkMove(Actor&)
Dimension::fetchEntity(ActorUniqueID, bool)
Dimension::transferEntity(Vec3 const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> >)
Dimension::_completeEntityTransfer(BlockSource&, std::unique_ptr<Actor, std::default_delete<Actor> >)
Dimension::onNewChunk(BlockSource&, LevelChunk&)
Dimension::onChunkLoaded(LevelChunk&)
Dimension::onChunkDiscarded(LevelChunk&)
Dimension::tryAssignNewRegionAt(ChunkPos const&, Actor&)
Dimension::deserialize(CompoundTag const&)
Dimension::upgradeOldLimboEntity(CompoundTag&, LimboEntitiesVersion)
Dimension::serialize(CompoundTag&) const
Dimension::getTimeOfDay(int, float) const
Dimension::onBlockChanged(BlockSource&, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*)
Dimension::sendPacketForPosition(BlockPos const&, Packet const&, Player const*)
Dimension::onLevelDestruction(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Dimension::isUltraWarm() const
Dimension::setUltraWarm(bool)
Dimension::hasCeiling() const
Dimension::setCeiling(bool)
Dimension::hasSkylight() const
Dimension::setSkylight(bool)
Dimension::onBlockEvent(BlockSource&, int, int, int, int, int)
Dimension::sendBroadcast(Packet const&, Player*)
Dimension::sendPacketForEntity(Actor const&, Packet const&, Player const*)
Dimension::getBlockEventDispatcher()
Dimension::getBlockEventDispatcherConst() const
