BlockPalette::BlockPalette(BlockPalette::ConstructorToken)
BlockPalette::BlockPalette(Level&)
BlockPalette::initFromBlockDefinitions()
BlockPalette::assignBlockRuntimeIds()
BlockPalette::clear()
BlockPalette::appendBlock(Block const&)
BlockPalette::getBlockLegacy(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
BlockPalette::getBlockLegacy(CompoundTag const&) const
BlockPalette::getBlock(CompoundTag const&) const
BlockPalette::getBlock(unsigned int const&) const
BlockPalette::getBlockFromLegacyData(NewBlockID, unsigned int) const
BlockPalette::shouldWarnFor(NewBlockID, unsigned short) const
BlockPalette::switchBlock(Block const&, BlockLegacy const&) const
BlockPalette::convertLegacyBlock(BlockID, unsigned short) const
BlockPalette::convertLegacyBlocks(buffer_span_mut<Block const*>, buffer_span<BlockID>, buffer_span<NibblePair>, unsigned long) const
BlockPalette::getNumBlockRuntimeIds() const
