GameMode::GameMode(Player&)
GameMode::~GameMode()
GameMode::~GameMode()
GameMode::interact(Actor&, Vec3 const&)
GameMode::attack(Actor&)
GameMode::_canDestroy(BlockPos const&, unsigned char)
GameMode::startDestroyBlock(BlockPos const&, unsigned char, bool&)
GameMode::_creativeDestroyBlock(BlockPos const&, unsigned char)
GameMode::destroyBlock(BlockPos const&, unsigned char)
GameMode::_destroyBlockInternal(BlockPos const&, unsigned char)
GameMode::continueDestroyBlock(BlockPos const&, unsigned char, bool&)
GameMode::getDestroyRate(Block const&)
GameMode::stopDestroyBlock(BlockPos const&)
GameMode::startBuildBlock(BlockPos const&, unsigned char)
GameMode::buildBlock(BlockPos const&, unsigned char)
GameMode::continueBuildBlock(BlockPos const&, unsigned char)
GameMode::_calculatePlacePos(BlockPos const&, unsigned char&) const
GameMode::stopBuildBlock()
GameMode::isLastBuildBlockSnappable() const
GameMode::hasStartedBuilding() const
GameMode::hasContinueDirection() const
GameMode::getContinueFacing() const
GameMode::getContinueDirection() const
GameMode::getNextContinuePos() const
GameMode::getLastBuiltBlockPos() const
GameMode::useItemOn(ItemStack&, BlockPos const&, unsigned char, Vec3 const&, Block const*)
GameMode::_canUseBlock(Block const&)
GameMode::baseUseItem(ItemStack&)
GameMode::useItem(ItemStack&)
GameMode::getPickRange(InputMode const&, bool)
GameMode::getMaxPickRange()
GameMode::getMaxPickRangeSqr()
GameMode::releaseUsingItem()
GameMode::getDestroyBlockPos()
GameMode::getOldDestroyProgress()
GameMode::getDestroyProgress()
GameMode::setTrialMode(bool)
GameMode::isInTrialMode()
GameMode::_releaseUsingItemInternal()
GameMode::tick()
GameMode::getHitProgress(float)
GameMode::registerUpsellScreenCallback(std::function<void (bool)>)
