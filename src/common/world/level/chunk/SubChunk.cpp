SubChunk::SubChunk()
SubChunk::SubChunk(Block const*, bool, bool, SpinLock&)
SubChunk::initialize(Block const*, bool, bool, SpinLock&)
SubChunk::~SubChunk()
SubChunk::shutdown()
SubChunk::operator=(SubChunk&&)
SubChunk::_replaceBlocks(unsigned char, std::unique_ptr<SubChunkBlockStorage, std::default_delete<SubChunkBlockStorage> >, std::lock_guard<SpinLock>&)
SubChunk::_resetLight(bool, bool)
SubChunk::_createLightStorage()
SubChunk::reset(Block const*, bool, bool)
SubChunk::fetchBlocksInCylinder(BlockPos const&, BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)> const&, std::vector<BlockFetchResult, std::allocator<BlockFetchResult> >&) const
SubChunk::fetchBlocksInBox(BlockPos const&, BoundingBox const&, std::function<bool (Block const&)> const&, std::vector<BlockFetchResult, std::allocator<BlockFetchResult> >&) const
SubChunk::prune()
SubChunk::_setBlock(unsigned char, unsigned short, Block const&)
SubChunk::setAllBlocks(buffer_span<Block const*>, unsigned long, unsigned long)
SubChunk::isUniform(Block const&) const
SubChunk::serialize(IDataOutput&, bool) const
SubChunk::deserialize(IDataInput&, BlockPalette const&)
