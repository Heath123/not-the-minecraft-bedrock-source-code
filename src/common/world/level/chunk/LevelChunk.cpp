LevelChunk::createNew(Dimension&, ChunkPos, bool)
LevelChunk::createNewNoCustomDeleter(Dimension&, ChunkPos, bool)
LevelChunk::LevelChunk(Dimension&, ChunkPos const&, bool)
LevelChunk::_reassignSubChunks(buffer_span_mut<SubChunk>)
LevelChunk::_createSubChunk(unsigned long, bool, SubChunkInitMode)
LevelChunk::operator=(LevelChunk&&)
LevelChunk::_assertBlockEntityAccess() const
LevelChunk::~LevelChunk()
LevelChunk::_placeBlockEntity(std::shared_ptr<BlockActor>)
_needsToCreateBlockEntity(Block const*, Block const*)
_needsToRemoveBlockEntity(Block const*, Block const*)
LevelChunk::_createBlockEntity(BlockPos const&, BlockSource*, Block const&, Block const&)
LevelChunk::_setLight(ChunkBlockPos const&, Brightness)
LevelChunk::_lightingCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource*)
LevelChunk::getHeightmap(ChunkBlockPos const&) const
LevelChunk::_recalcHeight(ChunkBlockPos const&, BlockSource*)
LevelChunk::placeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource*, std::shared_ptr<BlockActor>)
LevelChunk::trySetLightingTaskActive()
LevelChunk::resetLightingTaskActive()
LevelChunk::_removeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource*)
LevelChunk::getBlock(ChunkBlockPos const&) const
LevelChunk::setBlock(ChunkBlockPos const&, Block const&, BlockSource*, std::shared_ptr<BlockActor>)
LevelChunk::setExtraBlock(ChunkBlockPos const&, Block const&, BlockSource*)
LevelChunk::getExtraBlock(ChunkBlockPos const&) const
LevelChunk::fetchBlocks(BlockPos const&, BlockVolume&) const
LevelChunk::getPosition() const
LevelChunk::isBlockInChunk(BlockPos const&) const
LevelChunk::borderBlocksAreEnabled()
LevelChunk::getBorder(ChunkBlockPos const&) const
LevelChunk::setBorder(ChunkBlockPos const&, bool)
LevelChunk::addHardcodedSpawningArea(BoundingBox const&, HardcodedSpawnAreaType)
LevelChunk::getMin() const
LevelChunk::getMax() const
LevelChunk::removeHardcodedSpawningArea(HardcodedSpawnAreaType)
LevelChunk::findHardcodedSpawnAt(BlockPos const&)
LevelChunk::getSpawningAreas() const
LevelChunk::getPreWorldGenHeightmap(ChunkBlockPos const&) const
LevelChunk::setPreWorldGenHeightMap(std::unique_ptr<std::vector<short, std::allocator<short> >, std::default_delete<std::vector<short, std::allocator<short> > > >)
LevelChunk::getTickQueue()
LevelChunk::getTickQueue() const
LevelChunk::getRandomTickQueue()
LevelChunk::getRandomTickQueue() const
LevelChunk::getBrightness(ChunkBlockPos const&) const
LevelChunk::getBrightness(ChunkBlockPos const&, Brightness) const
LevelChunk::getRawBrightness(ChunkBlockPos const&, Brightness) const
LevelChunk::hasEntity(Actor&)
LevelChunk::addEntity(std::unique_ptr<Actor, std::default_delete<Actor> >)
LevelChunk::removeEntity(Actor&)
LevelChunk::removeBlockEntity(BlockPos const&)
LevelChunk::isSkyLit(ChunkBlockPos const&) const
LevelChunk::tryChangeState(ChunkState, ChunkState)
LevelChunk::changeState(ChunkState, ChunkState)
LevelChunk::_changeTerrainDataState(ChunkTerrainDataState, ChunkTerrainDataState)
LevelChunk::_onTickingQueueChanged()
LevelChunk::_onRandomTickingQueueChanged()
LevelChunk::createSubchunk(unsigned long, bool, SubChunkInitMode)
LevelChunk::getConvertedInterpolantBool(unsigned long, unsigned long) const
LevelChunk::enableBlockEntityAccessForThisThread() const
LevelChunk::getEntities(Actor*, AABB const&, std::vector<Actor*, std::allocator<Actor*> >&) const
LevelChunk::getEntities(buffer_span<Actor*>, AABB const&, std::vector<Actor*, std::allocator<Actor*> >&) const
LevelChunk::getEntities(ActorType, AABB const&, std::vector<Actor*, std::allocator<Actor*> >&, bool) const
LevelChunk::getEntity(ActorUniqueID const&) const
LevelChunk::getEntities() const
LevelChunk::getBlockEntities() const
LevelChunk::getBlockEntity(ChunkBlockPos const&)
LevelChunk::hasBlockEntity(ChunkBlockPos const&)
findHighestNonAirBlock(buffer_span<Block const*>, short)
LevelChunk::setAllBlocks(buffer_span<Block const*>, short)
LevelChunk::setAllLegacyBlockIDAndData(buffer_span<BlockID>, buffer_span<NibblePair>)
LevelChunk::tick(BlockSource&, Tick const&)
LevelChunk::_deserializeEntity(BlockSource&, IDataInput&, std::vector<ActorLink, std::allocator<ActorLink> >&)
LevelChunk::setUnsaved()
LevelChunk::tickBlocks(BlockSource&)
LevelChunk::tickBlockEntities(BlockSource&)
LevelChunk::tickRedstoneBlocks(BlockSource&)
LevelChunk::tickEntitiesDirty()
LevelChunk::findLightningTarget(BlockPos const&, BlockSource&)
LevelChunk::serialize2DMaps(IDataOutput&) const
LevelChunk::serializeBiomes(IDataOutput&) const
LevelChunk::serializeBorderBlocks(IDataOutput&) const
LevelChunk::serializeTicks(IDataOutput&) const
LevelChunk::serializeRandomTicks(IDataOutput&) const
LevelChunk::serializeFinalization(IDataOutput&) const
LevelChunk::serializeHardcodedSpawners(IDataOutput&) const
LevelChunk::deserializeHardcodedSpawners(IDataInput&)
LevelChunk::serializeBlockEntities(IDataOutput&) const
LevelChunk::serializeBiomeStates(IDataOutput&) const
LevelChunk::serializeEntities(IDataOutput&) const
LevelChunk::legacyDeserializeTerrain(IDataInput&)
LevelChunk::checkBiomeStates()
LevelChunk::deserialize2DMaps(IDataInput&)
LevelChunk::deserializeBiomes(IDataInput&)
LevelChunk::deserialize2DMapsLegacy(IDataInput&)
LevelChunk::deserializeBlockEntities(IDataInput&)
LevelChunk::deserializeBorderBlocks(IDataInput&)
LevelChunk::legacyDeserializeBlockExtraData(IDataInput&)
LevelChunk::deserializeBiomeStates(IDataInput&)
LevelChunk::deserializeTicks(IDataInput&)
LevelChunk::deserializeRandomTicks(IDataInput&)
LevelChunk::deserializeSubChunk(unsigned char, IDataInput&)
LevelChunk::deserializeFinalization(IDataInput&)
LevelChunk::deserializeConversionData(IDataInput&)
LevelChunk::deserializeLoadedVersion(IDataInput&)
LevelChunk::_deserializeVersion(IDataInput&)
LevelChunk::isSubChunkKey(gsl::basic_string_span<char const, -1l>) const
LevelChunk::deserializeKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)
isTopSolid(Material const*, bool, bool)
LevelChunk::getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool)
LevelChunk::isAABBOverlappingChunk(BlockPos const&, BlockPos const&) const
LevelChunk::isAABBFullyInChunk(BlockPos const&, BlockPos const&) const
LevelChunk::needsSaving(int, int) const
LevelChunk::isDirty() const
LevelChunk::getBiome(ChunkBlockPos const&) const
LevelChunk::setBiome(Biome const&, ChunkBlockPos const&)
LevelChunk::setGrassColor(int, ChunkBlockPos const&)
LevelChunk::setWaterColor(int, ChunkBlockPos const&)
LevelChunk::getGrassColor(ChunkBlockPos const&)
LevelChunk::getWaterColor(ChunkBlockPos const&)
LevelChunk::setCachedTemperatureNoise(ChunkBlockPos const&, signed char)
LevelChunk::getCachedTemperatureNoise(ChunkBlockPos const&)
LevelChunk::wasTickedThisTick(Tick const&) const
LevelChunk::_generateOriginalLightingSubChunk(BlockSource&, unsigned long, bool)
LevelChunk::generateOriginalLighting(ChunkViewSource&, bool)
LevelChunk::getDimension() const
LevelChunk::_generateOriginalLighting(ChunkViewSource&, bool)
LevelChunk::runtimeRelightSubchunk(BlockSource&, unsigned long, std::vector<SubChunkLightUpdate, std::allocator<SubChunkLightUpdate> >*, std::vector<BlockPos, std::allocator<BlockPos> >&)
LevelChunk::recomputeHeightMap(bool)
LevelChunk::getTopRainBlockPos(ChunkBlockPos const&)
LevelChunk::clearDeletedEntities()
LevelChunk::setPendingEntities(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
LevelChunk::hasEntitiesToSerialize() const
LevelChunk::hasEntitiesPendingToLoad() const
LevelChunk::getState() const
LevelChunk::_getTerrainDataState() const
LevelChunk::setSaved()
LevelChunk::onDiscarded()
LevelChunk::onBlockEntityChanged()
LevelChunk::setupRedstoneCircuit(BlockSource&)
LevelChunk::isRedstoneSetupDone() const
LevelChunk::needsUpgradeFix() const
LevelChunk::getLoadedFormat() const
LevelChunk::applySeasonsPostProcess(BlockSource&)
LevelChunk::checkSeasonsPostProcessDirty()
LevelChunk::key() const
LevelChunk::getLastTick() const
LevelChunk::isReadOnly() const
LevelChunk::getGenerator() const
LevelChunk::_setGenerator(ChunkSource*)
LevelChunk::getLevel() const
LevelChunk::setFinalized(LevelChunk::Finalization)
LevelChunk::hasAnyBiomeStates() const
LevelChunk::updateCachedData(BlockSource&)
LevelChunk::_enableBlockEntityAccessForThisThread() const
LevelChunk::_disableBlockEntityAccessForThisThread() const
