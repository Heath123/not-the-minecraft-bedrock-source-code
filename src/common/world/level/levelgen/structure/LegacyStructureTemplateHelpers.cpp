RotationUtil::getRotated(Rotation, Rotation)
RotationUtil::rotate(Rotation, unsigned char)
RotationUtil::rotate(BlockPos const&, Rotation)
RotationUtil::getShuffledRotations(Random&)
RotationUtil::getRandomRotation(Random&)
LegacyStructureBlockInfo::LegacyStructureBlockInfo(BlockPos const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> >, Block const&, Block const&)
LegacyStructureActorInfo::LegacyStructureActorInfo(Vec3 const&, BlockPos const&, CompoundTag)
LegacyStructureBlockPalette::LegacyStructureBlockPalette()
LegacyStructureBlockPalette::clearMap()
LegacyStructureBlockPalette::getSize()
LegacyStructureBlockPalette::addMapping(int, Block const&)
LegacyStructureBlockPalette::getBlock(int)
LegacyStructureBlockPalette::getId(Block const&)
LegacyStructureSettings::LegacyStructureSettings()
LegacyStructureSettings::LegacyStructureSettings(Mirror, Rotation, Block const*, BoundingBox const&)
LegacyStructureSettings::retrieveRandom(Random&) const
LegacyStructureSettings::setMirror(Mirror)
LegacyStructureSettings::setRotation(Rotation)
LegacyStructureSettings::setIgnoreBlock(Block const*)
LegacyStructureSettings::addSwapAuxValue(int, int)
LegacyStructureSettings::setSeed(unsigned int)
LegacyStructureSettings::setIntegrity(float)
LegacyStructureSettings::setProjection(Projection)
LegacyStructureSettings::setBlockRules(std::vector<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule> >, std::allocator<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule> > > > const*)
LegacyStructureSettings::setBlockTagRules(std::vector<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule> >, std::allocator<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule> > > > const*)
LegacyStructureSettings::getIgnoreBlock() const
LegacyStructureSettings::getSwappedBlock(BlockPalette const&, Block const&) const
LegacyStructureSettings::setChunkPos(ChunkPos const&)
LegacyStructureSettings::setBoundingBox(BoundingBox const&)
LegacyStructureSettings::getMirror() const
LegacyStructureSettings::ignoreStructureBlocks(bool)
LegacyStructureSettings::placeWaterBelowSeaLevel(bool)
LegacyStructureSettings::getRotation() const
LegacyStructureSettings::getChunkPos() const
LegacyStructureSettings::isIgnoreBlock() const
LegacyStructureSettings::getBoundingBox()
LegacyStructureSettings::updateBoundingBoxFromChunkPos()
LegacyStructureSettings::getBoundingBoxConst() const
LegacyStructureSettings::isIgnoreStructureBlocks() const
LegacyStructureSettings::isIgnoreJigsawBlocks() const
LegacyStructureSettings::isPlacingWaterBelowSeaLevel() const
LegacyStructureSettings::_calculateBoundingBox(ChunkPos const&)
LegacyStructureSettings::getSeed() const
LegacyStructureSettings::getIntegrity() const
LegacyStructureSettings::getProjection() const
LegacyStructureSettings::getBlockRules() const
LegacyStructureSettings::getBlockTagRules() const
LegacyBlockPlacementProcessor::LegacyBlockPlacementProcessor(LegacyStructureSettings const&)
LegacyBlockPlacementProcessor::canPlace()
LegacyBlockPlacementProcessor::applyGravity(BlockSource&, int, BlockPos&) const
LegacyBlockPlacementProcessor::applyBlockRules(BlockSource&, BlockPos&, Block const*)
JigsawJunction::JigsawJunction(int, int, int, int, Projection, Projection)
JigsawJunction::getSourcePos() const
JigsawJunction::getDeltaSourceY() const
JigsawJunction::getSourceProjection() const
JigsawJunction::getDeltaTargetY() const
JigsawJunction::getTargetProjection() const
