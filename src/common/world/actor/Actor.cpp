Actor::Actor(ActorDefinitionGroup*, ActorDefinitionIdentifier const&)
Actor::setBaseDefinition(ActorDefinitionIdentifier const&, bool, bool)
Actor::Actor(Level&)
Actor::getStateVectorComponentNonConst()
Actor::~Actor()
Actor::~Actor()
Actor::initEntity(EntityRegistryOwned&)
Actor::removeEntity()
Actor::reload()
Actor::isRegionValid() const
Actor::updateDescription()
Actor::getLevel()
Actor::_setupServerAnimationComponent()
Actor::hasCategory(ActorCategory) const
Actor::requireReload()
Actor::reloadIfRequired()
Actor::sendActorDefinitionEventTriggered(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Actor::hasType(ActorType) const
Actor::executeEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, VariantParameterList const&)
Actor::getInitializationMethod()
Actor::reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&)
Actor::setLeashHolder(ActorUniqueID)
Actor::getLeashHolder() const
Actor::initializeComponents(Actor::InitializationMethod, VariantParameterList const&)
Actor::getStateVectorComponent() const
Actor::_getStateVectorComponentNonConst()
Actor::_defaultInitEquipmentDropChances()
Actor::setVariant(int)
Actor::setMarkVariant(int)
Actor::setSkinID(int)
Actor::setColor(PaletteColor)
Actor::setColor2(PaletteColor)
Actor::setStatusFlag(ActorFlags, bool)
Actor::getStatusFlag(ActorFlags) const
Actor::isBaby() const
Actor::updateBBFromDescription()
Actor::setCanClimb(bool)
Actor::setCanFly(bool)
Actor::setWASDControlled(bool)
Actor::setStrengthMax(int)
Actor::setStrength(int)
Actor::getAttributes()
Actor::hasTags() const
Actor::reloadComponents(Actor::InitializationMethod, VariantParameterList const&)
Actor::addDefinitionGroup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Actor::removeDefinitionGroup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Actor::hasDefinitionGroup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Actor::hasComponent(Util::HashString const&) const
Actor::_onSizeUpdated()
Actor::hasFamily(Util::HashString const&) const
Actor::hasTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Actor::addTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Actor::removeTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Actor::getTags[abi:cxx11]() const
Actor::deregisterTagsFromLevelCache()
Actor::hasUniqueID() const
Actor::hasRuntimeID() const
Actor::getRuntimeID() const
Actor::getRideRuntimeID() const
Actor::getRide() const
Actor::getUniqueID() const
Actor::setRuntimeID(ActorRuntimeID)
Actor::setUniqueID(ActorUniqueID)
Actor::migrateUniqueID(ActorUniqueID)
Actor::readAdditionalSaveData(CompoundTag const&, DataLoadHelper&)
Actor::getEntityData()
Actor::setPersistent()
Actor::addAdditionalSaveData(CompoundTag&)
Actor::isInClouds() const
Actor::isUnderWaterfall() const
Actor::canBeginOrContinueClimbingLadder(bool) const
Actor::onLadder(bool) const
Actor::canClimb() const
Actor::isClimbing() const
Actor::getVariant() const
Actor::getMarkVariant() const
Actor::getSkinID() const
Actor::canAttack(Actor*, bool) const
Actor::getTarget() const
Actor::getLevel() const
Actor::getTargetId()
Actor::setTarget(Actor*)
Actor::initParams(VariantParameterList&)
Actor::findAttackTarget()
Actor::isValidTarget(Actor*) const
Actor::attack(Actor&)
Actor::performRangedAttack(Actor&, float)
Actor::adjustDamageAmount(int&) const
Actor::calculateAttackDamage(Actor&)
Actor::hasEffect(MobEffect const&) const
Actor::getEffect(MobEffect const&) const
Actor::getEquipmentCount() const
Actor::setBlockTarget(BlockPos const&)
Actor::getBlockTarget() const
Actor::isStackable() const
Actor::isTame() const
Actor::isTrusting() const
Actor::getOwner() const
Actor::getOwnerId() const
Actor::getPlayerOwner() const
Actor::setOwner(ActorUniqueID)
Actor::isSitting() const
Actor::setSitting(bool)
Actor::isLayingDown() const
Actor::setLayingDown(bool)
Actor::isInWall() const
Actor::isImmersedInWater() const
Actor::getAABBShapeComponent() const
Actor::getRegion() const
Actor::isInWater() const
Actor::hasEnteredWater() const
Actor::isInWaterOrRain() const
Actor::getDimension() const
Actor::isPersistent() const
Actor::getOnDeathExperience()
Actor::isInLava() const
Actor::hasSubBBInLava() const
Actor::isFree(Vec3 const&, float)
Actor::isFree(Vec3 const&)
Actor::_containsSneakCollisionShapes(AABB const&)
Actor::getCollidableMobNear()
Actor::testForCollidableMobs(BlockSource&, AABB const&, std::vector<AABB, std::allocator<AABB> >&)
Actor::move(Vec3 const&)
Actor::moveBBs(Vec3 const&)
Actor::getTempted() const
Actor::testForEntityStacking(BlockSource&, AABB const&, std::vector<AABB, std::allocator<AABB> >&)
Actor::_getAABBShapeComponentNonConst()
Actor::_getBlockOnPos()
Actor::setCollidableMobNear(bool)
Actor::canMakeStepSound() const
Actor::_playMovementSound(bool)
Actor::isInScaffolding() const
Actor::playSound(LevelSoundEvent, Vec3 const&, Block const&)
Actor::playSound(LevelSoundEvent, Vec3 const&, int)
Actor::onOnewayCollision(BlockPos)
Actor::onOnewayCollision(AABB const&)
Actor::_updateOnewayCollisions(BlockSource&)
Actor::canDestroyBlock(Block const&) const
Actor::checkEntityOnewayCollision(BlockSource&, BlockPos const&)
Actor::getCollidableMob()
Actor::makeStuckInBlock(float)
Actor::isUnderLiquid(MaterialType) const
Actor::isOverWater() const
Actor::_updateOwnerChunk()
Actor::isInWorld() const
Actor::moveChunks()
Actor::setPos(Vec3 const&)
Actor::_refreshAABB()
Actor::setPosPrev(Vec3 const&)
Actor::setPosDirectLegacy(Vec3 const&)
Actor::getPos() const
Actor::getPosOld() const
Actor::getPosExtrapolated(float) const
Actor::setAABBDim(Vec2 const&)
Actor::setPreviousPosRot(Vec3 const&, Vec2 const&)
Actor::getLocator(HashedString const&)
Actor::getActorToWorldTransform(float, bool, Vec3 const&) const
Actor::getInterpolatedRotation(float) const
Actor::getAttachPos(ActorLocation, float) const
Actor::getFiringPos() const
Actor::getRadius() const
Actor::isSkyLit(float)
Actor::getCenter(float) const
Actor::getInterpolatedPosition(float) const
Actor::getBrightness(float) const
Actor::getViewVector(float) const
Actor::getViewVector2(float) const
Actor::operator==(Actor&)
Actor::remove()
Actor::setSize(float, float)
_rotationWrapWithInterpolation(float&, float&)
Actor::setRot(Vec2 const&)
Actor::setEnforceRiderRotationLimit(bool)
Actor::getSpeedInMetersPerSecond() const
Actor::getVerticalSpeedInMetersPerSecond() const
Actor::getYawSpeedInDegreesPerSecond() const
Actor::getInterpolatedWalkAnimSpeed(float) const
Actor::getInterpolatedRidingOffset(float) const
Actor::enforceRiderRotationLimit() const
Actor::getAddPacket()
Actor::_damageNearbyMobs()
Actor::_doAutoAttackOnTouch(Actor&)
Actor::normalTick()
Actor::getDamageNearbyMobs() const
Actor::updateInBubbleColumnState()
Actor::baseTick()
Actor::isFireImmune() const
Actor::burn(int, bool)
Actor::rideTick()
Actor::tick(BlockSource&)
Actor::isGlobal() const
Actor::setRegion(BlockSource&)
Actor::hasTickingArea() const
Actor::refreshComponents()
Actor::isControlledByLocalInstance() const
Actor::isSwimming() const
Actor::_manageRiders(BlockSource&)
Actor::updateTickingData()
Actor::isRiding() const
Actor::isRemoved() const
Actor::getLinks() const
Actor::_sendLinkPacket(ActorLink const&) const
Actor::_getTallestCollisionShape(AABB const&, AABB const&, Vec3 const&)
Actor::updateBBFromDescription(CollisionBoxDescription const&)
Actor::removeAllRiders(bool, bool)
Actor::positionAllRiders()
Actor::positionRider(Actor&, float)
Actor::getRideRoot() const
Actor::getFirstRider() const
Actor::hasRider() const
Actor::hasFishingHook() const
Actor::fetchFishingHook()
Actor::clearFishingHookID()
Actor::setFishingHookID(ActorUniqueID)
Actor::_tryPlaceAt(Vec3 const&)
Actor::getCommandPermissionLevel() const
Actor::_exitRide(Actor const&, float)
Actor::getRotation() const
Actor::moveTo(Vec3 const&, Vec2 const&)
Actor::getRidingHeight()
Actor::addRider(Actor&)
Actor::_sendDirtyActorData()
Actor::flagRiderToRemove(Actor&)
Actor::getExitTip(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, InputMode) const
Actor::_removeRider(ActorUniqueID const&, bool, bool)
Actor::isRider(ActorUniqueID const&) const
Actor::_setAABB(AABB const&)
Actor::_setAABBDim(Vec2 const&)
Actor::_setHeightOffset(float)
Actor::_setPos(Vec3 const&)
Actor::_setPosPrev(Vec3 const&)
Actor::startRiding(Actor&)
Actor::stopRiding(bool, bool, bool)
Actor::startSwimming()
Actor::stopSwimming()
Actor::setScared(bool)
Actor::isScared() const
Actor::setSeatDescription(Vec3 const&, SeatDescription const&)
Actor::buildDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
Actor::buildDebugGroupInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
Actor::outOfWorld()
Actor::checkFallDamage(float, bool)
Actor::spawnDustParticles(int)
Actor::causeFallDamage(float)
Actor::handleFallDistanceOnServer(float, bool)
Actor::getCameraOffset() const
Actor::moveRelative(float, float, float, float)
Actor::hasTeleported() const
Actor::_isValidBlockToTeleportOnto(Block const&, bool) const
Actor::teleportTo(Vec3 const&, bool, int, int)
Actor::tryTeleportTo(Vec3 const&, bool, bool, int, int)
Actor::teleportRidersTo(Vec3 const&, int, int)
Actor::chorusFruitTeleport(Vec3&)
Actor::distanceTo(Actor const&) const
Actor::distanceTo(Vec3 const&) const
Actor::distanceToSqr(Vec3 const&) const
Actor::distanceToSqr(Actor const&) const
Actor::distanceSqrToBlockPosCenter(BlockPos const&) const
Actor::playerTouch(Player&)
Actor::onAboveBubbleColumn(bool)
Actor::onInsideBubbleColumn(bool)
Actor::markHurt()
Actor::wasHurt()
Actor::hurt(ActorDamageSource const&, int, bool, bool)
Actor::_hurt(ActorDamageSource const&, int, bool, bool)
Actor::isInvulnerableTo(ActorDamageSource const&) const
Actor::doFireHurt(int)
Actor::onLightningHit()
Actor::spawnTamingParticles(bool)
Actor::_randomHeartPos()
Actor::_spawnPukeParticles()
Actor::_spawnTreasureHuntingParticles()
Actor::onTame()
Actor::onFailedTame()
Actor::isInLove() const
Actor::isBribed() const
Actor::canMate(Actor const&) const
Actor::isAngry() const
Actor::isSheared() const
Actor::isChested() const
Actor::isIgnited() const
Actor::hasSaddle() const
Actor::isDancing() const
Actor::setDancing(bool)
Actor::isCharged() const
Actor::setCharged(bool)
Actor::isPowered() const
Actor::setPowered(bool)
Actor::setTempted(bool)
Actor::setTradeInterest(bool)
Actor::getTradeInterest() const
Actor::setSaddle(bool)
Actor::setClimbing(bool)
Actor::setDamageNearbyMobs(bool)
Actor::isWalker() const
Actor::setWalker(bool)
Actor::isSwimmer() const
Actor::setSwimmer(bool)
Actor::isDoorBreaker() const
Actor::setDoorBreaker(bool)
Actor::isDoorOpener() const
Actor::setDoorOpener(bool)
Actor::isBreakingObstruction() const
Actor::setBreakingObstruction(bool)
Actor::getSwimAmount(float) const
Actor::getCurrentSwimAmount() const
Actor::canCurrentlySwim() const
Actor::canFly() const
Actor::isMoving() const
Actor::setMoving(bool)
Actor::isResting() const
Actor::setResting(bool)
Actor::isStanding() const
Actor::setStanding(bool)
Actor::isWASDControlled()
Actor::isDelayedAttacking() const
Actor::setDelayedAttacking(bool)
Actor::canPowerJump() const
Actor::setCanPowerJump(bool)
Actor::isEnchanted() const
Actor::setEnchanted(bool)
Actor::getJumpDuration() const
Actor::setJumpDuration(int)
Actor::rideLanded(Vec3 const&, Vec3 const&)
Actor::getControllingSeat()
Actor::setControllingSeat(int)
Actor::getInventorySize() const
Actor::getEquipSlots() const
Actor::getChestSlots() const
Actor::getStrength() const
Actor::isOverScaffolding() const
Actor::handleEntityEvent(ActorEvent, int)
Actor::spawnDeathParticles()
Actor::spawnEatParticles(ItemStack const&, int)
Actor::spawnBalloonPopParticles()
Actor::feed(int)
Actor::getColor() const
Actor::reset()
Actor::getRegionConst() const
Actor::getDimensionConst() const
Actor::resetRegion()
Actor::intersects(Vec3 const&, Vec3 const&) const
Actor::isPickable()
Actor::isFishable() const
Actor::isSleeping() const
Actor::isShootable()
Actor::awardKillScore(Actor&, int)
Actor::shouldRender() const
Actor::getAmbientSoundIntervalMin(float&) const
Actor::getAmbientSoundIntervalRange(float&) const
Actor::getAmbientSoundEvent() const
Actor::isCreativeModeAllowed()
Actor::isSurfaceMob() const
Actor::isTargetable() const
Actor::getShadowHeightOffs()
Actor::getShadowRadius() const
Actor::isAlive() const
Actor::lerpTo(Vec3 const&, Vec2 const&, int)
Actor::getPickRadius()
Actor::getActorRendererId() const
Actor::setActorRendererId(HashedString)
Actor::pickUpItem(ItemActor&)
Actor::pickUpItem(ItemActor&, int)
Actor::lerpMotion(Vec3 const&)
Actor::actuallyHurt(int, ActorDamageSource const*, bool)
Actor::animateHurt()
Actor::setArmor(ArmorSlot, ItemStack const&)
Actor::hasLevel() const
Actor::getArmor(ArmorSlot) const
Actor::getArmorContainer()
Actor::getArmorContainer() const
Actor::getArmorMaterialTypeInSlot(ArmorSlot) const
Actor::getArmorMaterialTextureTypeInSlot(ArmorSlot) const
Actor::getArmorColorInSlot(ArmorSlot, int) const
Actor::getCarriedItem() const
Actor::setCarriedItem(ItemStack const&)
Actor::getHandContainer()
Actor::getHandContainer() const
Actor::setOffhandSlot(ItemStack const&)
Actor::getOffhandSlot() const
Actor::hasPriorityAmmunition() const
Actor::hasTotemEquipped() const
Actor::getEquippedTotem() const
Actor::consumeTotem()
Actor::setEquippedSlot(ArmorSlot, int, int)
Actor::setEquippedSlot(ArmorSlot, ItemStack const&)
Actor::isSneaking() const
Actor::setSneaking(bool)
Actor::isBlocking() const
Actor::isDamageBlocked(ActorDamageSource const&) const
Actor::save(CompoundTag&)
Actor::_serializeComponents(CompoundTag&)
Actor::saveLinks() const
Actor::saveWithoutId(CompoundTag&)
Actor::saveEntityFlags(CompoundTag&)
Actor::getColor2() const
Actor::getStrengthMax() const
Actor::isOrphan() const
Actor::loadEntityFlags(CompoundTag const&, DataLoadHelper&)
Actor::_convertOldSave(CompoundTag const&)
Actor::load(CompoundTag const&, DataLoadHelper&)
Actor::getActorIdentifier() const
Actor::loadLinks(CompoundTag const&, std::vector<ActorLink, std::allocator<ActorLink> >&, DataLoadHelper&)
Actor::setChanged()
Actor::getEntityData() const
Actor::getEntityTypeId() const
Actor::_setActorTypeId(ActorType)
Actor::getSpatialNetworkData() const
Actor::getSpatialNetworkData()
Actor::queryEntityRenderer() const
Actor::spawnAtLocation(int, int)
Actor::spawnAtLocation(int, int, float)
Actor::spawnAtLocation(Block const&, int)
Actor::spawnAtLocation(Block const&, int, float)
Actor::spawnAtLocation(ItemStack const&, float)
Actor::despawn()
Actor::killed(Actor&)
Actor::isDebugging() const
Actor::isOnFire() const
Actor::isOnHotBlock() const
Actor::interactPreventDefault()
Actor::canExistInPeaceful() const
Actor::isInvisible() const
Actor::canShowNameTag() const
Actor::setNameTagVisible(bool)
Actor::getNameTag[abi:cxx11]() const
Actor::getNameTagAsHash() const
Actor::getFormattedNameTag[abi:cxx11]() const
Actor::filterFormattedNameTag(UIProfanityContext const&)
Actor::setNameTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Actor::getAlwaysShowNameTag() const
Actor::setScoreTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Actor::getScoreTag[abi:cxx11]() const
Actor::isImmobile() const
Actor::isSilent()
Actor::getSourceUniqueID() const
Actor::getOwnerEntityType()
Actor::_playStepSound(BlockPos const&, Block const&)
Actor::_playFlySound(BlockPos const&, Block const&)
Actor::_makeFlySound() const
Actor::playSynchronizedSound(LevelSoundEvent, Vec3 const&, Block const&, bool)
Actor::playSynchronizedSound(LevelSoundEvent, Vec3 const&, int, bool)
Actor::onSynchedDataUpdate(int)
Actor::canSee(Actor const&) const
Actor::canSee(Vec3 const&) const
Actor::getRandomPointInAABB(Random&)
Actor::checkBlockCollisions()
Actor::isInsideBorderBlock(float) const
Actor::checkBlockCollisions(AABB const&)
Actor::setOnFire(int)
Actor::hasPlayerRider() const
Actor::canAddRider(Actor&) const
Actor::isRider(Actor const&) const
Actor::getRiderIndex(Actor&) const
Actor::getFirstAvailableSeatPos(Actor&, Vec3&) const
Actor::getShakeTime() const
Actor::setShakeTime(int)
Actor::pullInEntity(Actor&)
Actor::canBePulledIntoVehicle() const
Actor::isRiding(Actor*) const
Actor::inCaravan() const
Actor::isLeashed() const
Actor::getRenderLeashHolder()
Actor::_initializeLeashRopeSystem()
Actor::dropLeash(bool, bool)
Actor::tickLeash()
Actor::forEachLeashedActor(std::function<void (Actor*)>)
Actor::getAirSupply() const
Actor::getTotalAirSupply() const
Actor::sendMotionPacketIfNeeded()
Actor::isAutoSendEnabled() const
Actor::sendMotionToServer()
Actor::canSynchronizeNewEntity() const
Actor::setGlobal(bool)
Actor::isAutonomous() const
Actor::setAutonomous(bool)
Actor::checkInsideBlocks(float)
Actor::pushOutOfBlocks(Vec3 const&)
Actor::updateWaterState()
Actor::doWaterSplashEffect()
Actor::spawnTrailBubbles()
Actor::updateInsideBlock()
Actor::getHealth() const
Actor::isInsidePortal()
Actor::enableAutoSendPosRot(bool)
Actor::renderDebugServerState(Options const&)
Actor::getEntityTerrainInterlockData()
Actor::reloadLootTable()
Actor::reloadLootTable(EquipmentTableDescription const*)
Actor::kill()
Actor::die(ActorDamageSource const&)
Actor::_tryPlantWitherRose()
Actor::getHurtColor() const
Actor::_setDimension(Dimension&)
Actor::getInterpolatedRidingPosition(float) const
Actor::getInterpolatedBodyRot(float) const
Actor::getInterpolatedHeadRot(float) const
Actor::getInterpolatedBodyYaw(float) const
Actor::buildForward() const
Actor::getHandleWaterAABB() const
Actor::handleInsidePortal(BlockPos const&)
Actor::getPortalCooldown() const
Actor::getPortalWaitTime() const
Actor::getPortalEntranceAxis() const
Actor::getDimensionId() const
Actor::canChangeDimensions() const
Actor::changeDimension(AutomaticID<Dimension, int>, bool)
Actor::_setNetherPortalData(AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, int)
Actor::changeDimension(ChangeDimensionPacket const&)
Actor::getControllingPlayer() const
Actor::_setLevelPtr(Level*)
Actor::getRandom() const
Actor::isClient() const
Actor::getMutableAttribute(Attribute const&)
Actor::getAttribute(Attribute const&) const
Actor::hasAttributeBuff(AttributeBuffType) const
Actor::getDeathTime() const
Actor::getMaxHealth() const
Actor::serializationSetHealth(int)
Actor::heal(int)
Actor::healEffects(int)
Actor::isInvertedHealAndHarm() const
Actor::addEffect(MobEffectInstance const&)
Actor::removeEffect(int)
Actor::removeAllEffects()
Actor::removeEffectParticles()
Actor::removeEffectNoUpdate(int)
Actor::getActiveEffectCount() const
Actor::canBeAffected(MobEffectInstance const&) const
Actor::canBeAffected(int) const
Actor::canBeAffectedByArrow(MobEffectInstance const&) const
Actor::hasAnyVisibleEffects() const
Actor::hasAnyEffects() const
Actor::getAllEffects() const
Actor::onEffectAdded(MobEffectInstance&)
Actor::onEffectUpdated(MobEffectInstance const&)
Actor::onEffectRemoved(MobEffectInstance&)
Actor::setInvisible(bool)
Actor::updateInvisibilityStatus()
Actor::getEconomyTradeableComponent() const
Actor::resetClientAnimations()
Actor::getAnimationComponent()
Actor::hasPersistingTrade() const
Actor::getPersistingTradeOffers()
Actor::getPersistingTradeRiches()
Actor::savePersistingTrade(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> >, int)
Actor::removePersistingTrade()
Actor::isTickingEntity() const
Actor::getTickingArea()
Actor::transferTickingArea(Dimension&)
Actor::hasOutputSignal(unsigned char) const
Actor::getOutputSignal() const
Actor::canOpenContainer(Player&) const
Actor::openContainerComponent(Player&)
Actor::useItem(ItemStack&, ItemUseMethod, bool)
Actor::getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&)
Actor::setLastHitBB(Vec3 const&, Vec3 const&)
Actor::getLootTable()
Actor::isWithinRestriction() const
Actor::isWithinRestriction(BlockPos const&) const
Actor::hasRestriction() const
Actor::restrictTo(BlockPos const&, float)
Actor::getRestrictCenter() const
Actor::getRestrictRadius() const
Actor::clearRestriction()
Actor::getMapDecorationRotation() const
Actor::getRiderYRotation(Actor const&) const
Actor::getYHeadRot() const
Actor::isWorldBuilder()
Actor::isCreative() const
Actor::isAdventure() const
Actor::add(ItemStack&)
Actor::drop(ItemStack const&, bool)
Actor::dropTowards(ItemStack const&, Vec3)
Actor::lovePartnerId() const
Actor::setInLove(Actor*)
Actor::calcCenterPos() const
Actor::hasEnoughFoodToBreed()
Actor::_countFood(int)
Actor::hasExcessFood()
Actor::wantsMoreFood()
Actor::doEnchantDamageEffects(Mob&, Mob&)
Actor::getInteraction(Player&, ActorInteraction&, Vec3 const&)
Actor::setChainedDamageEffects(bool)
Actor::getChainedDamageEffects() const
Actor::getTradeOffers()
Actor::getSlotAllowedItems(int)
Actor::setEquipFromPacket(UpdateEquipPacket const&)
Actor::createUpdateEquipPacket(int)
Actor::setOffersFromPacket(UpdateTradePacket const&)
Actor::createUpdateTradePacket(int)
Actor::setCollidableMob(bool)
Actor::breaksFallingBlocks() const
Actor::setExperimental(bool)
Actor::isExperimental() const
Actor::blockedByShield(ActorDamageSource const&, Actor&)
Actor::wasLastHitByPlayer()
Actor::setTradingPlayer(Player*)
Actor::getTradingPlayer() const
Actor::isTrading() const
Actor::pushBackActionEventToActionQueue(ActionEvent)
Actor::getNextActionEvent(ActionEvent&)
Actor::clearActionQueue()
Actor::isActionQueueEmpty() const
Actor::setLimitedLife(int)
Actor::getLifeSpan() const
Actor::onChunkDiscarded()
Actor::shouldOrphan(BlockSource&)
Actor::onOrphan()
Actor::setStructuralIntegrity(int)
Actor::getStructuralIntegrity() const
Actor::setHurtTime(int)
Actor::getHurtTime() const
Actor::setHurtDir(int)
Actor::getHurtDir() const
Actor::wobble()
Actor::isSafeToSleepNear() const
Actor::shouldTick() const
Actor::fetchNearbyActorsSorted(Vec3 const&, ActorType)
Actor::getMolangVariables()
Actor::updateMolangVariables(RenderParams&)
Actor::updateEntitySpecificMolangVariables(RenderParams&)
Actor::cacheComponentData()
Actor::isInPrecipitation() const
Actor::isInRain() const
Actor::isInSnow() const
Actor::isInThunderstorm() const
