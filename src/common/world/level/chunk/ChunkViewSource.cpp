ChunkViewSource::ChunkViewSource(ChunkSource&, ChunkSource::LoadMode)
ChunkViewSource::ChunkViewSource(ChunkSource&, LevelChunkGridAreaElement<std::weak_ptr<LevelChunk> >&, Bounds const&)
ChunkViewSource::getExistingChunk(ChunkPos const&)
ChunkViewSource::getRandomChunk(Random&)
ChunkViewSource::acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>)
ChunkViewSource::createNewChunk(ChunkPos const&, ChunkSource::LoadMode)
ChunkViewSource::move(Bounds const&, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk> >, buffer_span<unsigned int>)>)
ChunkViewSource::move(BlockPos const&, BlockPos const&, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk> >, buffer_span<unsigned int>)>)
ChunkViewSource::move(BlockPos const&, int, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk> >, buffer_span<unsigned int>)>)
ChunkViewSource::clear()
ChunkViewSource::getArea() const
ChunkViewSource::getArea()
ChunkViewSource::enableBlockEntityAccess()
ChunkViewSource::isWithinWorldLimit(ChunkPos const&) const
