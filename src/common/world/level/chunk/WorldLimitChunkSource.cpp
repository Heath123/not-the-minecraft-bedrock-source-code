WorldLimitChunkSource::WorldLimitChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource> >, BlockPos const&)
WorldLimitChunkSource::~WorldLimitChunkSource()
WorldLimitChunkSource::~WorldLimitChunkSource()
WorldLimitChunkSource::shutdown()
WorldLimitChunkSource::createNewChunk(ChunkPos const&, ChunkSource::LoadMode)
WorldLimitChunkSource::getExistingChunk(ChunkPos const&)
WorldLimitChunkSource::isWithinWorldLimit(ChunkPos const&) const
