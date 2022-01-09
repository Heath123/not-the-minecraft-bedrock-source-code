MovingBlockActor::MovingBlockActor(BlockPos const&)
MovingBlockActor::~MovingBlockActor()
MovingBlockActor::~MovingBlockActor()
MovingBlockActor::load(Level&, CompoundTag const&, DataLoadHelper&)
MovingBlockActor::save(CompoundTag&) const
MovingBlockActor::getUpdatePacket(BlockSource&)
MovingBlockActor::_onUpdatePacket(CompoundTag const&, BlockSource&)
MovingBlockActor::getDrawPos(BlockSource&, float)
MovingBlockActor::_validPistonPos(BlockSource&) const
MovingBlockActor::setBlock(Block const&)
MovingBlockActor::getBlock()
MovingBlockActor::setExtraBlock(Block const&)
MovingBlockActor::getExtraBlock()
MovingBlockActor::setBlockEntity(std::shared_ptr<BlockActor>)
MovingBlockActor::aquireBlockEntity()
MovingBlockActor::getBlockEntity()
MovingBlockActor::registerPiston(BlockSource&, BlockPos const&)
MovingBlockActor::moveCollidedEntities(PistonBlockActor&, BlockSource&)
MovingBlockActor::getOwningPiston(BlockSource&)
MovingBlockActor::tick(BlockSource&)