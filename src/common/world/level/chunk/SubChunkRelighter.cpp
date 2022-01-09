SubChunkRelighter::computeOuterEdgeOfComputationBits()
SubChunkRelighter::computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits()
SubChunkLightIndex::SubChunkLightIndex(SubChunkLightIndex const&)
SubChunkLightIndex::SubChunkLightIndex(unsigned int)
SubChunkLightIndex::SubChunkLightIndex(Pos const&)
SubChunkLightIndex::computeInternalIndexFromPos(Pos const&)
SubChunkLightIndex::operator unsigned int() const
SubChunkLightIndex::nextX() const
SubChunkLightIndex::prevX() const
SubChunkLightIndex::nextY() const
SubChunkLightIndex::prevY() const
SubChunkLightIndex::nextZ() const
SubChunkLightIndex::prevZ() const
SubChunkLightIndex::computeSubChunkIndex() const
SubChunkLightIndex::computeSubChunkCoordinates(unsigned int&, unsigned int&, unsigned int&) const
SubChunkLightIndex::computeSubChunkIndexAndCoordinates(unsigned int&, unsigned int&, unsigned int&) const
SubChunkLightIndex::operator=(SubChunkLightIndex const&)
SubtractiveLightInfo::SubtractiveLightInfo()
SubtractiveLightInfo::SubtractiveLightInfo(SubChunkLightIndex, Brightness)
SubtractiveLightInfo::SubtractiveLightInfo(SubtractiveLightInfo const&)
SubtractiveLightInfo::operator=(SubtractiveLightInfo const&)
SubtractiveLightInfo::operator<(SubtractiveLightInfo const&)
SubChunkRelighter::initializeStatics()
SubChunkRelighter::shutdownStatics()
SubChunkRelighter::getTouchedSubChunks(std::vector<Pos, std::allocator<Pos> >&)
SubChunkRelighter::getBlock(Pos const&, Block const*&, Block const*&)
SubChunkRelighter::_getBlock(SubChunkLightIndex, Block const*&, Block const*&) const
SubChunkRelighter::getLightPair(Pos const&) const
SubChunkRelighter::_getLightPair(SubChunkLightIndex) const
SubChunkRelighter::setSkyLight(Pos const&, Brightness, Brightness, Brightness, Brightness)
SubChunkRelighter::_setSkyLight(SubChunkLightIndex, Brightness, Brightness, Brightness, Brightness)
SubChunkRelighter::setBlockLight(Pos const&, Brightness, Brightness, Brightness, Brightness)
SubChunkRelighter::_setBlockLight(SubChunkLightIndex, Brightness, Brightness, Brightness, Brightness)
SubChunkRelighter::_getAbsorption(SubChunkLightIndex, unsigned char&) const
SubChunkRelighter::_getAbsorption(SubChunkLightIndex, unsigned char&, unsigned int&)
SubChunkRelighter::_getBlock(SubChunkLightIndex, Block const*&, Block const*&, unsigned int&) const
SubChunkRelighter::_getAbsorptionAndEmissiveness(SubChunkLightIndex, unsigned char&, unsigned char&) const
SubChunkRelighter::_getAbsorptionAndEmissivenessAndSubChunkIndex(SubChunkLightIndex, unsigned char&, unsigned char&, unsigned int&) const
SubChunkRelighter::update(BlockPos const&, unsigned long)
SubChunkRelighter::_propagateSubtractiveSkyLight()
SubChunkRelighter::_propagateSkyLight()
SubChunkRelighter::_propagateSubtractiveBlockLight()
SubChunkRelighter::_propagateBlockLight()
SubChunkRelighter::_propagateSubtractiveSkyLight(SubChunkLightIndex, unsigned char)
SubChunkRelighter::_resetToDo(SubChunkRelighter::SubChunkToDoBitsClearMode)
SubChunkRelighter::_getLight(SubChunkLightIndex)
SubChunkRelighter::_propagateSubtractiveBlockLight(SubChunkLightIndex, unsigned char)
SubChunkRelighter::_dirtySubChunk(SubChunkLightIndex, unsigned int&)
SubChunkRelighter::_setPropagatedSkyLightValue(SubChunkLightIndex, unsigned char)
SubChunkRelighter::_propagateSkyLight(SubChunkLightIndex, unsigned char)
SubChunkRelighter::_setPropagatedBlockLightValue(SubChunkLightIndex, unsigned char)
SubChunkRelighter::_propagateBlockLight(SubChunkLightIndex, unsigned char)
SubChunkRelighter::getFullyLitSubChunk()
SubChunkRelighter::getFullyDarkSubChunk()
SubChunkRelighter::SubChunkRelighter(BlockSource&, unsigned long, ChunkPos const&, bool, bool)
SubChunkRelighter::~SubChunkRelighter()
SubChunkRelighter::getCentralSubchunkOrigin()
SubChunkRelighter::_createSubChunk(unsigned int, unsigned int, unsigned int)
SubChunkRelighter::_getBlock(SubChunkLightIndex, Block const*&, Block const*&, unsigned int&, unsigned int&, unsigned int&, unsigned int&)
SubChunkRelighter::_getSubChunk(SubChunkLightIndex, unsigned int&)
