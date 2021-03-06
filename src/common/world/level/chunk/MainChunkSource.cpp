MainChunkSource::MainChunkSource(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource> >)
MainChunkSource::~MainChunkSource()
MainChunkSource::~MainChunkSource()
MainChunkSource::getExistingChunk(ChunkPos const&)
MainChunkSource::getRandomChunk(Random&)
MainChunkSource::createNewChunk(ChunkPos const&, ChunkSource::LoadMode)
MainChunkSource::acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>)
MainChunkSource::getStorage() const
MainChunkSource::clearDeletedEntities()
MainChunkSource::getChunkMap()
