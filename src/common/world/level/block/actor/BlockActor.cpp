BlockActorFactory::createBlockEntity(BlockActorType, BlockPos const&, BlockLegacy const&)
BlockActor::setId(BlockActorType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockActor::initBlockEntities()
BlockActor::shutdown()
BlockActor::BlockActor(BlockActorType, BlockPos const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockActor::_resetAABB()
BlockActor::~BlockActor()
BlockActor::~BlockActor()
BlockActor::load(Level&, CompoundTag const&, DataLoadHelper&)
BlockActor::setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BlockActor::save(CompoundTag&) const
BlockActor::saveItemInstanceData(CompoundTag&)
BlockActor::saveBlockData(CompoundTag&, BlockSource&) const
BlockActor::loadBlockData(CompoundTag const&, BlockSource&, DataLoadHelper&)
BlockActor::onCustomTagLoadDone(BlockSource&)
BlockActor::tick(BlockSource&)
BlockActor::assignBlockIfNotAssigned(BlockSource&)
BlockActor::isFinished()
BlockActor::loadStatic(Level&, CompoundTag const&, DataLoadHelper&)
BlockActor::setChanged()
BlockActor::onChanged(BlockSource&)
BlockActor::setMovable(bool)
BlockActor::isMovable(BlockSource&)
BlockActor::setCustomNameSaved(bool)
BlockActor::isCustomNameSaved()
BlockActor::distanceToSqr(Vec3 const&)
BlockActor::getUpdatePacket(BlockSource&)
BlockActor::onPlace(BlockSource&)
BlockActor::onUpdatePacket(CompoundTag const&, BlockSource&, Player const*)
BlockActor::_onUpdatePacket(CompoundTag const&, BlockSource&)
BlockActor::onMove()
BlockActor::onRemoved(BlockSource&)
BlockActor::triggerEvent(int, int)
BlockActor::clearCache()
BlockActor::isType(BlockActorType) const
BlockActor::isType(BlockActor&, BlockActorType)
BlockActor::isInWorld() const
BlockActor::onNeighborChanged(BlockSource&, BlockPos const&)
BlockActor::getShadowRadius(BlockSource&) const
BlockActor::hasAlphaLayer() const
BlockActor::stopDestroy()
BlockActor::getCrackEntity(BlockSource&, BlockPos const&)
BlockActor::getAABB() const
BlockActor::setBB(AABB)
BlockActor::getPosition() const
BlockActor::moveTo(BlockPos const&)
BlockActor::getType() const
BlockActor::isClientSideOnly() const
BlockActor::setClientSideOnly(bool)
BlockActor::getRendererId() const
BlockActor::setRendererId(BlockActorRendererId)
BlockActor::canRenderCustomName() const
BlockActor::getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, BlockPos const&)
BlockActor::getCustomName[abi:cxx11]() const
BlockActor::getFilteredCustomName[abi:cxx11](UIProfanityContext const&)
BlockActor::getName[abi:cxx11]() const
BlockActor::getDisplayName[abi:cxx11]() const
BlockActor::getImmersiveReaderText[abi:cxx11](BlockSource&)
BlockActor::getRepairCost() const
BlockActor::getBlock() const
BlockActor::getOwningPiston(BlockSource&)
BlockActor::getContainer()
BlockActor::getEntityTerrainInterlockData()
BlockActor::getEntityTerrainInterlockDataConst() const
BlockActor::onChunkLoaded(LevelChunk&)
BlockActor::onChunkUnloaded(LevelChunk&)
