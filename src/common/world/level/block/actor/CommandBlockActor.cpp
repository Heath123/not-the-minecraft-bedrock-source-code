CommandBlockActor::CommandBlockActor(BlockPos const&, CommandBlockMode)
CommandBlockActor::save(CompoundTag&) const
CommandBlockActor::isAutomatic() const
CommandBlockActor::getBaseCommandBlock() const
CommandBlockActor::saveBlockData(CompoundTag&, BlockSource&) const
CommandBlockActor::getCommandBlock(BlockSource&) const
CommandBlockActor::load(Level&, CompoundTag const&, DataLoadHelper&)
CommandBlockActor::_loadAutomatic(bool)
CommandBlockActor::getBaseCommandBlock()
CommandBlockActor::loadBlockData(CompoundTag const&, BlockSource&, DataLoadHelper&)
CommandBlockActor::getMode(BlockSource&) const
CommandBlockActor::onCustomTagLoadDone(BlockSource&)
CommandBlockActor::_setAutomatic(BlockSource&, bool, CommandBlockMode)
CommandBlockActor::getUpdatePacket(BlockSource&)
CommandBlockActor::_playerCanUpdate(Player const&) const
CommandBlockActor::_onUpdatePacket(CompoundTag const&, BlockSource&)
CommandBlockActor::onChanged(BlockSource&)
CommandBlockActor::onPlace(BlockSource&)
CommandBlockActor::_updateLastPerformedModes(bool, bool, CommandBlockMode)
CommandBlockActor::markConditionMet(BlockSource&)
CommandBlockActor::getDelayOnActivation() const
CommandBlockActor::performCommand(BlockSource&)
CommandBlockActor::markForSaving(BlockSource&)
CommandBlockActor::getTrackOutput() const
CommandBlockActor::getConditionalMode(BlockSource&) const
CommandBlockActor::isRedstoneMode() const
CommandBlockActor::updateBlock(BlockSource&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, CommandBlockMode, bool, bool, bool, int, bool)
CommandBlockActor::setAutomatic(BlockSource&, bool, CommandBlockMode)
CommandBlockActor::setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
CommandBlockActor::setPowered(bool)
CommandBlockActor::getPowered() const
CommandBlockActor::getTickDelay() const
CommandBlockActor::shouldExecuteOnFirstTick() const
CommandBlockActor::wasConditionMet()
CommandBlockActor::getSuccessCount() const
CommandBlockActor::setSuccessCount(int)
CommandBlockActor::getCommand[abi:cxx11]() const
CommandBlockActor::getLastOutput[abi:cxx11]() const
CommandBlockActor::setTrackOutput(bool)
CommandBlockActor::getLastPerformedConditionalMode() const
CommandBlockActor::getLastPerformedRedstoneMode() const
CommandBlockActor::getLastPerformedCBMode() const
CommandBlockActor::getCustomName[abi:cxx11]() const
CommandBlockActor::getFilteredCustomName[abi:cxx11](UIProfanityContext const&)
CommandBlockActor::markForSaving(BlockSource&, int, bool)
