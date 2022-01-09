Block::getBurnOdds() const
Block::setFlammable(int, int) const
Block::getFlameOdds() const
Block::getLight() const
Block::isSolid() const
Block::ignoreBlockForInsideCubeRenderer() const
Block::pushesOutItems() const
Block::shouldRandomTick() const
Block::shouldRandomTickExtraLayer() const
Block::getTranslucency() const
Block::getLightEmission() const
Block::hasVariableLighting() const
Block::Block(unsigned short, WeakPtr<BlockLegacy>&)
Block::canSlide(BlockSource&, BlockPos const&) const
Block::canInstatick() const
Block::getCreativeCategory() const
Block::getGravity() const
Block::getMaterial() const
Block::getMapColor(BlockSource&, BlockPos const&) const
Block::getMapColor() const
Block::getFriction() const
Block::getDestroySpeed() const
Block::tick(BlockSource&, BlockPos const&, Random&) const
Block::animateTick(BlockSource&, BlockPos const&, Random&) const
Block::clip(BlockSource&, BlockPos const&, Vec3 const&, Vec3 const&, bool, AABB const&) const
Block::clip(BlockSource&, BlockPos const&, Vec3 const&, Vec3 const&, bool) const
Block::spawnResources(BlockSource&, BlockPos const&, Block const&, float, int) const
Block::spawnResources(BlockSource&, BlockPos const&, float, int) const
Block::popResource(BlockSource&, BlockPos const&, ItemInstance const&) const
Block::spawnBurnResources(BlockSource&, float, float, float) const
Block::destroy(BlockSource&, BlockPos const&, Actor*) const
Block::playerWillDestroy(Player&, BlockPos const&) const
Block::getIgnoresDestroyPermissions(Actor&, BlockPos const&) const
Block::randomlyModifyPosition(BlockPos const&, int&) const
Block::randomlyModifyPosition(BlockPos const&) const
Block::addCollisionShapes(BlockSource&, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB> >&, Actor*) const
Block::addAABBs(BlockSource&, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB> >&) const
Block::addAABB(AABB const&, AABB const*, std::vector<AABB, std::allocator<AABB> >&) const
Block::isUnbreakable() const
Block::isHeavy() const
Block::isStrippable(Block const&) const
Block::getStrippedBlock() const
Block::canBeBrokenFromFalling() const
Block::canProvideSupport(unsigned char, BlockSupportType) const
Block::canConnect(Block const&, unsigned char, Block const&) const
Block::getConnectedDirections(BlockPos const&, BlockSource&, bool&, bool&, bool&, bool&) const
Block::getAABB(BlockSource&, BlockPos const&, AABB&, bool) const
Block::getOutline(BlockSource&, BlockPos const&, AABB&) const
Block::getLiquidClipVolume(BlockSource&, BlockPos const&, AABB&) const
Block::mayPick() const
Block::mayPick(BlockSource&, bool) const
Block::getResourceCount(Random&, int) const
Block::asItemInstance(BlockSource&, BlockPos const&) const
Block::getExplosionResistance(Actor*) const
Block::isInteraction() const
Block::use(Player&, BlockPos const&) const
Block::getPlacementBlock(Actor&, BlockPos const&, unsigned char, Vec3 const&, int) const
Block::calcVariant(BlockSource&, BlockPos const&) const
Block::isAttachedTo(BlockSource&, BlockPos const&, BlockPos&) const
Block::attack(Player*, BlockPos const&) const
Block::handleEntityInside(BlockSource&, BlockPos const&, Actor*, Vec3&) const
Block::isAuxValueRelevantForPicking() const
Block::getColor() const
Block::getColor(BlockSource&, BlockPos const&) const
Block::getColorAtPos(BlockSource&, BlockPos const&) const
Block::getColorForParticle(BlockSource&, BlockPos const&, Block const&) const
Block::isSeasonTinted(BlockSource&, BlockPos const&) const
Block::isSignalSource() const
Block::canBeOriginalSurface() const
Block::getDirectSignal(BlockSource&, BlockPos const&, int) const
Block::entityInside(BlockSource&, BlockPos const&, Actor&) const
Block::getSilkTouchItemInstance() const
Block::playerDestroy(Player&, BlockPos const&) const
Block::canSurvive(BlockSource&, BlockPos const&) const
Block::getExperienceDrop(Random&) const
Block::canBeBuiltOver(BlockSource&, BlockPos const&) const
Block::getDescriptionId[abi:cxx11]() const
Block::buildDescriptionName[abi:cxx11]() const
Block::buildDescriptionId[abi:cxx11]() const
Block::getSerializationId() const
Block::buildSerializationId(unsigned int)
Block::getRuntimeId() const
Block::hasRuntimeId() const
Block::toDebugString[abi:cxx11]() const
Block::setRuntimeId(unsigned int const&) const
Block::triggerEvent(BlockSource&, BlockPos const&, int, int) const
Block::getAllowsRunes() const
Block::telemetryVariant(BlockSource&, BlockPos const&) const
Block::getVariant() const
Block::getMappedFace(unsigned char) const
Block::mayPlaceOn(BlockSource&, BlockPos const&) const
Block::mayPlace(BlockSource&, BlockPos const&) const
Block::mayPlace(BlockSource&, BlockPos const&, unsigned char) const
Block::tryToPlace(BlockSource&, BlockPos const&, ActorBlockSyncMessage const*) const
Block::breaksFallingBlocks() const
Block::neighborChanged(BlockSource&, BlockPos const&, BlockPos const&) const
Block::getSecondPart(BlockSource&, BlockPos const&, BlockPos&) const
Block::DEPRECATEDcallOnGraphicsModeChanged(bool, bool, bool)
Block::checkIsPathable(Actor&, BlockPos const&, BlockPos const&) const
Block::shouldDispense(BlockSource&, Container&) const
Block::dispense(BlockSource&, Container&, int, Vec3 const&, unsigned char) const
Block::onPlace(BlockSource&, BlockPos const&) const
Block::onRemove(BlockSource&, BlockPos const&) const
Block::onExploded(BlockSource&, BlockPos const&, Actor*) const
Block::onStepOn(Actor&, BlockPos const&) const
Block::onFallOn(BlockSource&, BlockPos const&, Actor*, float) const
Block::onProjectileHit(BlockSource&, BlockPos const&, Actor const&) const
Block::transformOnFall(BlockSource&, BlockPos const&, Actor*, float) const
Block::movedByPiston(BlockSource&, BlockPos const&) const
Block::updateEntityAfterFallOn(Actor&) const
Block::ignoreEntitiesOnPistonMove() const
Block::onFertilized(BlockSource&, BlockPos const&, Actor*, FertilizerType) const
Block::mayConsumeFertilizer(BlockSource&) const
Block::getIconYOffset() const
Block::isWaterBlocking() const
Block::canBeSilkTouched() const
Block::getMobToSpawn(SpawnConditions const&, BlockSource&) const
Block::isBounceBlock() const
Block::isAlphaTested() const
Block::isSolidBlockingBlock() const
Block::isMotionBlockingBlock() const
Block::isSolidBlockingBlockAndNotSignalSource() const
Block::isEmpty() const
Block::isCropBlock() const
Block::isStemBlock() const
Block::isContainerBlock() const
Block::isCraftingBlock() const
Block::isInteractiveBlock() const
Block::isHurtableBlock() const
Block::isFenceBlock() const
Block::isFenceGateBlock() const
Block::isThinFenceBlock() const
Block::isWallBlock() const
Block::isStairBlock() const
Block::isDoorBlock() const
Block::isButtonBlock() const
Block::isSlabBlock() const
Block::isRailBlock() const
Block::canHurtAndBreakItem() const
Block::getBlockEntityType() const
Block::hasBlockEntity() const
Block::getRenderLayer(BlockSource&, BlockPos const&) const
Block::getRenderLayer() const
Block::getExtraRenderLayers() const
Block::getThickness() const
Block::getFlexibility(BlockSource&, BlockPos const&) const
Block::isObstructingChests(BlockSource&, BlockPos const&) const
Block::getVisualShapeInWorld(BlockSource&, BlockPos const&, AABB&, bool) const
Block::getVisualShape(AABB&, bool) const
Block::getUIShape(AABB&) const
Block::getCollisionShape(AABB&, BlockSource&, BlockPos const&, Actor*) const
Block::calcGroundFriction(Mob&, BlockPos const&) const
Block::canHaveExtraData() const
Block::hasComparatorSignal() const
Block::getComparatorSignal(BlockSource&, BlockPos const&, unsigned char) const
Block::shouldStopFalling(Actor&) const
Block::pushesUpFallingBlocks() const
Block::hasProperty(BlockProperty) const
Block::getProperties() const
Block::keepState(ItemState const&) const
Block::copyState(Block const&, ItemState const&) const
Block::getShadeBrightness() const
Block::getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, BlockPos const&) const
Block::getParticleQuantityScalar() const
Block::isStandingSign() const
Block::dealsContactDamage(Actor const&, bool) const
Block::hasTag(BlockSource&, BlockPos const&, Block const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Block::getPlacementFacingAll(Actor&, BlockPos const&, float)
Block::getPlacementFacingAllExceptAxisY(Actor&, BlockPos const&, float)
