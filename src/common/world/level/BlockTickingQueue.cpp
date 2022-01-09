BlockTickingQueue::setOwningChunk(LevelChunk*)
BlockTickingQueue::add(BlockSource&, BlockPos const&, Block const&, int, int)
BlockTickingQueue::_onQueueChanged() const
BlockTickingQueue::remove(BlockPos const&, Block const&)
BlockTickingQueue::TickDataSet::remove(BlockPos const&, Block const&)
BlockTickingQueue::remove(std::function<bool (TickNextTickData const&)>&&)
BlockTickingQueue::TickDataSet::remove(std::function<bool (TickNextTickData const&)>&&)
BlockTickingQueue::tickPendingTicks(BlockSource&, Tick const&, int, bool)
BlockTickingQueue::tickAllPendingTicks(BlockSource&)
BlockTickingQueue::isInstaticking() const
BlockTickingQueue::isEmpty() const
BlockTickingQueue::hasTickInCurrentTick(BlockPos const&) const
BlockTickingQueue::hasTickInPendingTicks(BlockPos const&) const
BlockTickingQueue::load(CompoundTag const&, BlockPalette const&)
BlockTickingQueue::save(CompoundTag&) const
BlockTickingQueue::_saveQueue(ListTag&, BlockTickingQueue::TickDataSet const&) const
BlockTickingQueue::getTickDelaysInArea(BoundingBox const&) const
BlockTickingQueue::ticksFromNow(int) const
BlockTickingQueue::getNextUpdateForPos(BlockPos const&, Tick&) const
BlockTickingQueue::eliminateDuplicatesOf(BlockLegacy const&)
BlockTickingQueue::BlockTick::BlockTick(BlockPos const&, Block const&, Tick const&, int)
BlockTickingQueue::BlockTick::operator==(BlockTickingQueue::BlockTick const&) const
BlockTickingQueue::BlockTick::operator<(BlockTickingQueue::BlockTick const&) const
BlockTickingQueue::BlockTick::operator>(BlockTickingQueue::BlockTick const&) const
BlockTickingQueue::HashBlockTick::operator()(BlockTickingQueue::BlockTick const&) const
