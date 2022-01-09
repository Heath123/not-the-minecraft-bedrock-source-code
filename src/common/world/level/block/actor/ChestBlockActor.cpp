ChestBlockActor::ChestBlockActor(BlockActorType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, BlockActorRendererId, BlockPos const&, bool)
ChestBlockActor::~ChestBlockActor()
ChestBlockActor::~ChestBlockActor()
ChestBlockActor::createChestBlockEntity(BlockPos const&)
ChestBlockActor::createTrappedChestBlockEntity(BlockPos const&)
ChestBlockActor::getContainerSize() const
ChestBlockActor::isLargeChest() const
ChestBlockActor::getMaxStackSize() const
ChestBlockActor::getName[abi:cxx11]() const
ChestBlockActor::getItem(int) const
ChestBlockActor::setItem(int, ItemStack const&)
ChestBlockActor::denyNotifyPlayersChange()
ChestBlockActor::loadItems(CompoundTag const&, Level&)
ChestBlockActor::load(Level&, CompoundTag const&, DataLoadHelper&)
ChestBlockActor::_unpair()
ChestBlockActor::saveItems(CompoundTag&) const
ChestBlockActor::save(CompoundTag&) const
ChestBlockActor::_saveClientSideState(CompoundTag&) const
ChestBlockActor::saveItemInstanceData(CompoundTag&)
ChestBlockActor::clearCache()
ChestBlockActor::tick(BlockSource&)
ChestBlockActor::canPairWith(BlockActor*, BlockSource&)
ChestBlockActor::pairWith(ChestBlockActor*, bool)
ChestBlockActor::_validatePairedChest(BlockSource&)
ChestBlockActor::_tickOpenLid(BlockSource&)
ChestBlockActor::_getCenter(float&, float&, float&)
ChestBlockActor::triggerEvent(int, int)
ChestBlockActor::startOpen(Player&)
ChestBlockActor::getOpenCount() const
ChestBlockActor::forceCloseChest(BlockSource&)
ChestBlockActor::_closeChest(BlockSource&, Player*)
ChestBlockActor::_playerClosedContainer(Player&)
ChestBlockActor::stopOpen(Player&)
ChestBlockActor::onRemoved(BlockSource&)
ChestBlockActor::onChanged(BlockSource&)
ChestBlockActor::getUpdatePacket(BlockSource&)
ChestBlockActor::_onUpdatePacket(CompoundTag const&, BlockSource&)
ChestBlockActor::_tryToPairWith(BlockSource&, BlockPos const&)
ChestBlockActor::getObstructionAABB() const
ChestBlockActor::_legacyDetectBlockObstruction(BlockSource&) const
ChestBlockActor::_detectBlockObstruction(BlockSource&) const
ChestBlockActor::_detectEntityObstruction(BlockSource&) const
ChestBlockActor::onNeighborChanged(BlockSource&, BlockPos const&)
ChestBlockActor::getCrackEntity(BlockSource&, BlockPos const&)
ChestBlockActor::isMainSubchest()
ChestBlockActor::clearInventory(int)
ChestBlockActor::getContainer()
ChestBlockActor::canOpen(BlockSource&) const
ChestBlockActor::unpair(BlockSource&)
ChestBlockActor::isTrappedChest() const
ChestBlockActor::getPairedChestPosition()
ChestBlockActor::getModelOffsetX()
ChestBlockActor::openBy(Player&)
ChestBlockActor::getOpenness() const
ChestBlockActor::setOpenness(float)
ChestBlockActor::getOldOpenness() const
ChestBlockActor::setOldOpenness(float)
ChestBlockActor::setContainerChanged(int)
ChestBlockActor::canPushInItem(BlockSource&, int, int, ItemInstance const&) const
ChestBlockActor::canPullOutItem(BlockSource&, int, int, ItemInstance const&) const
ChestBlockActor::getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, BlockPos const&)
ChestBlockActor::onMove()
ChestBlockActor::addContentChangeListener(ContainerContentChangeListener*)
ChestBlockActor::removeContentChangeListener(ContainerContentChangeListener*)
ChestBlockActor::_canOpenThis(BlockSource&) const
ChestBlockActor::onMove(BlockSource&, BlockPos const&, BlockPos const&)
ChestBlockActor::onPlace(BlockSource&)
ChestBlockActor::getIsGlobalChest()
ChestBlockActor::isFindable() const
ChestBlockActor::setFindable(bool)
ChestBlockActor::playOpenSound(BlockSource&)
ChestBlockActor::playCloseSound(BlockSource&)
