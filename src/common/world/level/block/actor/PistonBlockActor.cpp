PistonBlockActor::PistonBlockActor(BlockPos const&, bool)
PistonBlockActor::load(Level&, CompoundTag const&, DataLoadHelper&)
PistonBlockActor::save(CompoundTag&) const
PistonBlockActor::getUpdatePacket(BlockSource&)
PistonBlockActor::_onUpdatePacket(CompoundTag const&, BlockSource&)
PistonBlockActor::_moveCollidedEntities(BlockSource&)
PistonBlockActor::tick(BlockSource&)
PistonBlockActor::_tryFixupStickyPistonArm(BlockSource&)
PistonBlockActor::getFacingDir(BlockSource&)
PistonBlockActor::_handleRedstoneSignal(BlockSource&)
PistonBlockActor::getProgress(float)
PistonBlockActor::_checkAttachedBlocks(BlockSource&)
PistonBlockActor::_spawnMovingBlocks(BlockSource&)
PistonBlockActor::getCorrectArmBlock() const
PistonBlockActor::_getReplacementBlock(BlockSource const&, BlockPos) const
PistonBlockActor::isSticky() const
PistonBlockActor::_spawnBlocks(BlockSource&)
PistonBlockActor::_tryExpand()
PistonBlockActor::_tryRetract()
PistonBlockActor::isMoving() const
PistonBlockActor::isExpanded() const
PistonBlockActor::isExpanding() const
PistonBlockActor::isRetracted() const
PistonBlockActor::isRetracting() const
PistonBlockActor::_moveCollidedEntitiesHelper(BlockSource&, AABB const&, BlockPos const&, Actor*, unsigned int)
PistonBlockActor::moveEntityLastProgress(Actor&, Vec3)
PistonBlockActor::_attachedBlockWalker(BlockSource&, BlockPos const&, unsigned char, unsigned char)
PistonBlockActor::_hasBlockAttached(BlockPos const&)
PistonBlockActor::_handleSlimeConnections(BlockSource&, BlockPos const&, unsigned char, unsigned char)
PistonBlockActor::_canStickToEachOther(Block const&, Block const&)
PistonBlockActor::_sortAttachedBlocks(BlockSource&)
PistonBlockActor::_clearBlockInfront(BlockSource&, BlockPos const&, BlockPos const&)
PistonBlockActor::_checkInceptionAchievement(BlockActor&, BlockSource&, BlockPos const&)
PistonBlockActor::getLastProgress()
PistonBlockActor::setShouldVerifyArmType(bool)
PistonBlockActor::onRemoved(BlockSource&)
PistonBlockActor::getOwningPiston(BlockSource&)
