BlockSource::BlockSource(Level&, Dimension&, ChunkSource&, bool, bool)
BlockSource::addListener(BlockSourceListener&)
BlockSource::~BlockSource()
BlockSource::~BlockSource()
BlockSource::getLevel() const
BlockSource::getLevel()
BlockSource::getChunkSource()
BlockSource::checkBlockDestroyPermissions(Actor&, BlockPos const&, ItemStack const&, bool)
BlockSource::getBlock(BlockPos const&) const
BlockSource::_getBlockPermissions(BlockPos const&, bool)
BlockSource::checkBlockPermissions(Actor&, BlockPos const&, unsigned char, ItemStack const&, bool)
BlockSource::hasBorderBlock(BlockPos)
BlockSource::getLevelConst() const
BlockSource::getDimension() const
BlockSource::getDimension()
BlockSource::getDimensionId() const
BlockSource::getDimensionConst() const
BlockSource::removeListener(BlockSourceListener&)
BlockSource::clearDeletedEntities()
BlockSource::getChunk(int, int) const
BlockSource::getChunk(ChunkPos const&) const
BlockSource::addToTickingQueue(BlockPos const&, Block const&, int, int)
BlockSource::_addToTickingQueue(BlockPos const&, Block const&, int, int, TickingQueueType)
BlockSource::addToRandomTickingQueuePercentChance(BlockPos const&, Block const&, float, int)
BlockSource::addToRandomTickingQueue(BlockPos const&, Block const&, int, int)
BlockSource::removeFromTickingQueue(BlockPos const&, Block const&)
BlockSource::_removeFromTickingQueue(BlockPos const&, Block const&, TickingQueueType)
BlockSource::removeFromRandomTickingQueue(BlockPos const&, Block const&)
BlockSource::isInstaticking(BlockPos const&) const
BlockSource::_getTickingQueue(BlockPos const&, TickingQueueType) const
BlockSource::hasTickInCurrentTick(BlockPos const&) const
BlockSource::hasTickInCurrentTick(BlockPos const&, TickingQueueType) const
BlockSource::hasTickInPendingTicks(BlockPos const&) const
BlockSource::hasTickInPendingTicks(BlockPos const&, TickingQueueType) const
BlockSource::getNextTickUpdateForPos(BlockPos const&, TickingQueueType, Tick&) const
BlockSource::ticksFromNow(BlockPos const&, TickingQueueType, int) const
BlockSource::setTickingQueue(BlockTickingQueue&)
BlockSource::setRandomTickingQueue(BlockTickingQueue&)
BlockSource::getWritableChunk(ChunkPos const&)
BlockSource::shouldFireEvents(LevelChunk&) const
BlockSource::hasBlock(BlockPos const&) const
BlockSource::getChunkAt(BlockPos const&) const
BlockSource::_hasChunksAt(Bounds const&) const
BlockSource::hasChunksAt(Bounds const&) const
BlockSource::hasChunksAt(AABB const&) const
BlockSource::hasChunksAt(BlockPos const&, int) const
BlockSource::hasChunksAt(int, int, int, int) const
BlockSource::hasChunksAt(BlockPos const&, BlockPos const&) const
BlockSource::areChunksFullyLoaded(BlockPos const&, int)
BlockSource::getBlock(BlockPos const&, unsigned int) const
BlockSource::getExtraBlock(BlockPos const&) const
BlockSource::countBlocksOfType(BlockLegacy const&, BlockPos const&, BlockPos const&, unsigned long) const
BlockSource::getChunkAt(int, int, int) const
BlockSource::getBlock(int, int, int) const
BlockSource::setBlock(int, int, int, Block const&, int)
BlockSource::setBlock(BlockPos const&, Block const&, int, ActorBlockSyncMessage const*)
BlockSource::setBlock(BlockPos const&, Block const&, int, std::shared_ptr<BlockActor>, ActorBlockSyncMessage const*)
BlockSource::setBlock(int, int, int, Block const&, int, std::shared_ptr<BlockActor>)
BlockSource::setBlockNoUpdate(int, int, int, Block const&)
BlockSource::setBlockNoUpdate(BlockPos const&, Block const&)
BlockSource::setBorderBlock(BlockPos const&, bool)
BlockSource::_blockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*)
BlockSource::setExtraBlock(BlockPos const&, Block const&, int)
BlockSource::getLiquidBlock(BlockPos const&) const
BlockSource::getAllocatedHeightAt(BlockPos const&)
BlockSource::getLightColor(BlockPos const&, Brightness)
BlockSource::getBrightnessPair(BlockPos const&) const
BlockSource::getBrightness(BlockPos const&) const
BlockSource::getRawBrightness(BlockPos const&, bool, bool) const
BlockSource::_getSkyDarken() const
BlockSource::getAboveTopSolidBlock(BlockPos const&, bool, bool)
BlockSource::canSeeSky(BlockPos const&) const
BlockSource::getMaterial(BlockPos const&) const
BlockSource::getHeightmap(BlockPos const&) const
BlockSource::getHeightmapPos(BlockPos const&) const
BlockSource::isSolidBlockingBlockAndNotSignalSource(BlockPos const&)
BlockSource::isSolidBlockingBlock(int, int, int) const
BlockSource::isSolidBlockingBlock(BlockPos const&) const
BlockSource::isMotionBlockingBlock(int, int, int) const
BlockSource::isMotionBlockingBlock(BlockPos const&) const
BlockSource::isConsideredSolidBlock(int, int, int)
BlockSource::isConsideredSolidBlock(BlockPos const&)
BlockSource::mayPlace(Block const&, BlockPos const&, unsigned char, Actor*, bool)
BlockSource::isUnobstructedByEntities(AABB const&, Actor*)
BlockSource::neighborChanged(BlockPos const&, BlockPos const&)
BlockSource::updateNeighborsAt(BlockPos const&)
BlockSource::updateNeighborsAt(BlockPos const&, BlockPos const&)
BlockSource::updateNeighborsAtExceptFromFacing(BlockPos const&, BlockPos const&, int)
BlockSource::fireBlockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*)
BlockSource::setLiquidBlock(BlockPos const&, Block const&, bool, int)
BlockSource::removeBlock(int, int, int)
BlockSource::removeBlock(BlockPos const&)
BlockSource::getBlockEntity(BlockPos const&)
BlockSource::removeBlockEntity(BlockPos const&)
BlockSource::blockEvent(int, int, int, int, int)
BlockSource::fireBlockEvent(int, int, int, int, int)
BlockSource::blockEvent(BlockPos const&, int, int)
BlockSource::fetchEntities(Actor*, AABB const&)
BlockSource::fetchEntities(buffer_span<Actor*>, AABB const&)
BlockSource::fetchEntities(ActorType, AABB const&, Actor*)
BlockSource::fetchActors(ActorDefinitionIdentifier const&, AABB const&)
BlockSource::fetchBlockEntities(AABB const&, std::vector<BlockActor*, std::allocator<BlockActor*> >&)
BlockSource::fetchBlockEntities(AABB const&)
BlockSource::fetchBlocks(BlockPos const&, BlockVolume&) const
BlockSource::areAllChunksLoaded(BlockPos const&, BlockVolume&) const
BlockSource::fetchEntities2(ActorType, AABB const&, bool)
BlockSource::fetchNearestEntityOfType(Actor*, AABB const&, ActorType)
BlockSource::fetchNearestEntityOfType(Actor*, Vec3 const&, float, ActorType)
BlockSource::fetchNearestEntityNotOfType(Actor*, Vec3 const&, float, ActorType)
BlockSource::isUnobstructedByEntities(AABB const&, buffer_span<Actor*>)
BlockSource::fetchAABBs(AABB const&, bool)
BlockSource::addUnloadedChunksAABBs(AABB const&)
BlockSource::addVoidFloor(AABB const&)
BlockSource::hasBlock(int, int, int)
BlockSource::_fetchBorderBlockCollisions(AABB const&, Actor*, bool)
BlockSource::fetchCollisionShapes(AABB const&, float*, bool, Actor*)
BlockSource::containsAnyLiquid(AABB const&)
BlockSource::containsAnySolidBlocking(AABB const&)
BlockSource::containsAny(BlockPos const&, BlockPos const&)
BlockSource::containsAnyBlockOfType(BlockPos const&, BlockPos const&, Block const&)
BlockSource::containsFireBlock(AABB const&)
BlockSource::getMaterial(int, int, int) const
BlockSource::isOnTopOfBlock(AABB const&, BlockLegacy const&)
BlockSource::isOnTopOfBlock(AABB const&, std::function<bool (Block const&)>)
BlockSource::containsMaterial(AABB const&, MaterialType)
BlockSource::containsLiquid(AABB const&, MaterialType)
BlockSource::clip(Vec3 const&, Vec3 const&, bool, bool, int, bool, bool)
BlockSource::getSeenPercent(Vec3 const&, AABB const&)
BlockSource::canProvideSupport(BlockPos const&, unsigned char, BlockSupportType) const
BlockSource::isInWall(Vec3 const&)
BlockSource::isUnderWater(BlockPos const&) const
BlockSource::isUnderWater(Vec3 const&, Block const&) const
BlockSource::isTouchingMaterial(BlockPos const&, MaterialType) const
BlockSource::onChunkDiscarded(LevelChunk&)
BlockSource::clearCachedLastChunk()
BlockSource::fireAreaChanged(BlockPos const&, BlockPos const&)
BlockSource::fireBrightnessChanged(BlockPos const&)
BlockSource::fireBlockEntityChanged(BlockActor&)
BlockSource::fireBlockEntityAboutToBeRemoved(std::shared_ptr<BlockActor>)
BlockSource::fireEntityChanged(Actor&)
BlockSource::isEmptyBlock(BlockPos const&)
BlockSource::isEmptyWaterBlock(BlockPos const&) const
BlockSource::allowsRunes(BlockPos const&)
BlockSource::isEmptyBlock(int, int, int)
BlockSource::getTopBlock(int, int&, int)
BlockSource::tryGetBiome(BlockPos const&) const
BlockSource::getBiome(BlockPos const&)
BlockSource::getConstBiome(BlockPos const&) const
BlockSource::setGrassColor(int, BlockPos const&, int)
BlockSource::setWaterColor(int, BlockPos const&, int)
BlockSource::getGrassColor(BlockPos const&) const
BlockSource::getWaterColor(BlockPos const&) const
BlockSource::getHardcodedEntitySpawn(BlockPos const&, ActorType) const
BlockSource::findNextTopSolidBlockUnder(BlockPos&)
BlockSource::findNextTopSolidBlockAbove(BlockPos&)
BlockSource::findNextSpawnBlockUnder(BlockPos&, MaterialType)
BlockSource::canSeeSkyFromBelowWater(BlockPos const&)
BlockSource::getRawBrightness(int, int, int, bool)
BlockSource::getAboveTopSolidBlock(int, int, bool, bool)
BlockSource::canSeeSky(int, int, int) const
BlockSource::getHeightmap(int, int)
BlockSource::getBlockEntity(int, int, int)
BlockSource::isOwnerThread() const
BlockSource::_getLiquidHeight(BlockPos const&, MaterialType, bool)
BlockSource::getVisualLiquidHeight(Vec3 const&)
BlockSource::fetchBlocksInCylinder(BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)>)
BlockSource::fetchBlocksInCylinderSorted(BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)>)
BlockSource::fetchBlocksInBox(BoundingBox const&, std::function<bool (Block const&)>)
BlockSource::fetchBlocksInBoxSorted(BoundingBox const&, std::function<bool (Block const&)>)
BlockSource::isPositionUnderLiquid(Vec3 const&, MaterialType)
BlockSource::getPublicSource() const
BlockSource::isNearUnloadedChunks(ChunkPos const&)
BlockSource::generateUnloadedChunkAABB(ChunkPos const&)
