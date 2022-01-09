FurnaceBlockActor::isFuel(ItemInstance const&)
FurnaceBlockActor::getBurnDuration(ItemInstance const&, int)
FurnaceBlockActor::FurnaceBlockActor(BlockPos const&)
FurnaceBlockActor::FurnaceBlockActor(BlockActorType, BlockPos const&, Util::HashString const&, LevelSoundEvent, ContainerType, int, Block const&, Block const&)
FurnaceBlockActor::getItem(int) const
FurnaceBlockActor::setItem(int, ItemStack const&)
FurnaceBlockActor::resetBurnProgress()
FurnaceBlockActor::getName[abi:cxx11]() const
FurnaceBlockActor::getMaxStackSize() const
FurnaceBlockActor::getContainerSize() const
FurnaceBlockActor::startOpen(Player&)
FurnaceBlockActor::stopOpen(Player&)
FurnaceBlockActor::canPushInItem(BlockSource&, int, int, ItemInstance const&) const
FurnaceBlockActor::canPullOutItem(BlockSource&, int, int, ItemInstance const&) const
FurnaceBlockActor::getContainer()
FurnaceBlockActor::load(Level&, CompoundTag const&, DataLoadHelper&)
FurnaceBlockActor::_correctXpValue(short) const
FurnaceBlockActor::onCustomTagLoadDone(BlockSource&)
FurnaceBlockActor::_refreshFurnaceBlockLitState(BlockSource&)
FurnaceBlockActor::save(CompoundTag&) const
FurnaceBlockActor::isFinished()
FurnaceBlockActor::tick(BlockSource&)
FurnaceBlockActor::isLit()
FurnaceBlockActor::_tryBroadcastBurnSound(BlockSource&)
FurnaceBlockActor::canBurn(Recipes const&)
FurnaceBlockActor::checkForAlternativeFuelAchievement(BlockSource&, ItemStack const&)
FurnaceBlockActor::burn(Recipes const&)
FurnaceBlockActor::getBurnProgress(int)
FurnaceBlockActor::getLitProgress(int)
FurnaceBlockActor::isSlotEmpty(int)
FurnaceBlockActor::isEmptiedByHopper(BlockSource&)
FurnaceBlockActor::_getPositionOfNeighbor(int)
FurnaceBlockActor::isSlotDirty(int)
FurnaceBlockActor::resetSlotsDirty()
FurnaceBlockActor::_resetAuxValueIfInvalid(ItemInstance&) const
FurnaceBlockActor::getLitTime() const
FurnaceBlockActor::setLitTime(int)
FurnaceBlockActor::getLitDuration() const
FurnaceBlockActor::setLitDuration(int)
FurnaceBlockActor::getTickCount() const
FurnaceBlockActor::setTickCount(int)
FurnaceBlockActor::getStoredXP() const
FurnaceBlockActor::setStoredXP(int)
FurnaceBlockActor::getLastFuelItem() const
FurnaceBlockActor::getXPRewardFromSmeltingItems(ItemInstance const&, int) const
FurnaceBlockActor::_roundXPReward(float) const
FurnaceBlockActor::_getXPRewardMultiplier(ItemInstance const&) const
FurnaceBlockActor::storeXPRewardForRemovingWithHopper(ItemInstance const&, int)
FurnaceBlockActor::withdrawStoredXPReward()
FurnaceBlockActor::onNeighborChanged(BlockSource&, BlockPos const&)
FurnaceBlockActor::checkForSmeltEverythingAchievement(BlockSource&)
FurnaceBlockActor::onMove()
FurnaceBlockActor::onFurnaceBlockRemoved(BlockSource&)
FurnaceBlockActor::getUpdatePacket(BlockSource&)
FurnaceBlockActor::_onUpdatePacket(CompoundTag const&, BlockSource&)
