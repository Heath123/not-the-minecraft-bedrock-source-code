PlayerRespawnBlockRadiusRandomizer::PlayerRespawnBlockRadiusRandomizer()
PlayerRespawnBlockRadiusRandomizer::init(unsigned int, Random&)
PlayerRespawnBlockRadiusRandomizer::_getLargestPrime(unsigned int) const
PlayerRespawnBlockRadiusRandomizer::getRadius() const
PlayerRespawnBlockRadiusRandomizer::getIterationCount() const
PlayerRespawnBlockRadiusRandomizer::markAsExhausted()
PlayerRespawnBlockRadiusRandomizer::reduceIterationCount()
PlayerRespawnBlockRadiusRandomizer::getNextPosition(Vec3&, bool)
PlayerRespawnBlockRadiusRandomizer::hasMorePossibilities() const
PlayerRespawnBlockRadiusRandomizer::_isPrime(unsigned int) const
PlayerRespawnRandomizer::PlayerRespawnRandomizer()
PlayerRespawnRandomizer::init(unsigned int, GeneratorType const&)
PlayerRespawnRandomizer::performPrimaryJump(Vec3 const&, bool)
PlayerRespawnRandomizer::resetSecondary()
PlayerRespawnRandomizer::getRandomizedPosition(Vec3&)
PlayerRespawnRandomizer::isPrimaryExhausted() const
PlayerRespawnRandomizer::isSecondaryExhausted() const
PlayerRespawnRandomizer::isCompletelyExhausted() const
PlayerRespawnRandomizer::getRadius() const
PlayerRespawnRandomizer::getRadiusSquared() const
PlayerRespawnRandomizer::getLongJumpCount() const
PlayerRespawnRandomizer::getShortJumpCount() const
PlayerRespawnRandomizer::resetPrimary()
PlayerRespawnRandomizer::getPrimaryOffset() const
Player::Player(Level&, PacketSender&, GameType, NetworkIdentifier const&, unsigned char, mce::UUID, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::unique_ptr<Certificate, std::default_delete<Certificate> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Player::registerAttributes()
Player::_registerElytraLoopSound()
Player::initBodyControl()
Player::initializeComponents(Actor::InitializationMethod, VariantParameterList const&)
Player::resetPlayerLevel()
Player::getNewEnchantmentSeed()
Player::reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&)
Player::~Player()
Player::~Player()
Player::getClientId() const
Player::getClientSubId() const
Player::getCertificate() const
Player::setFieldOfViewModifier(float)
Player::isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&)
Player::isEntityRelevant(Actor const&)
Player::getMapDecorationRotation() const
Player::actuallyHurt(int, ActorDamageSource const*, bool)
Player::teleportTo(Vec3 const&, bool, int, int)
Player::isLoading() const
Player::isPlayerInitialized() const
Player::registerTrackedBoss(ActorUniqueID)
Player::unRegisterTrackedBoss(ActorUniqueID)
Player::getTrackedBosses()
Player::isCreative() const
Player::isSurvival() const
Player::forceAllowEating() const
Player::isAdventure() const
Player::isViewer() const
Player::getSpeed() const
Player::getCapePos(float)
Player::canBeSeenOnMap() const
Player::prepareRegion(ChunkSource&)
Player::destroyRegion()
Player::setContainerManager(std::shared_ptr<IContainerManager>)
Player::suspendRegion()
Player::_fireWillChangeDimension()
Player::_fireDimensionChanged()
Player::changeDimensionWithCredits(AutomaticID<Dimension, int>)
Player::shouldShowCredits() const
Player::setHasSeenCredits()
Player::isSleeping() const
Player::setSleeping(bool)
Player::startSleepInBed(BlockPos const&)
Player::setBedRespawnPosition(BlockPos const&)
Player::stopSleepInBed(bool, bool)
Player::setDefaultHeadHeight()
Player::canStartSleepInBed()
Player::getSleepTimer() const
Player::getPreviousTickSleepTimer() const
Player::setAllPlayersSleeping()
Player::isSleepingLongEnough() const
Player::getSleepRotation() const
Player::checkBed(BlockSource*, Vec3 const*)
Player::getPlatform() const
Player::getPlatformOnlineId[abi:cxx11]() const
Player::setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Player::setPlatform(BuildPlatform)
Player::setPlatformOnlineId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Player::onSynchedDataUpdate(int)
Player::onMobStatusChanged(ActorUniqueID)
Player::moveView()
Player::getChunkRadius() const
Player::moveSpawnView(Vec3 const&)
Player::isJumping() const
Player::isEmoting() const
Player::getUnderwaterLightLevel() const
Player::setUnderwaterLightLevel(float)
Player::setUsedPotion(bool)
Player::getUsedPotion()
Player::normalTick()
Player::_tickCooldowns()
Player::setEmotingStatus(bool)
Player::_applyExhaustion(Vec3 const&)
Player::moveCape()
Player::getSupplies() const
Player::stopUsingItem()
Player::_updateInteraction()
Player::isBouncing() const
Player::_setBlockedUsingShieldTimeStamp(long)
Player::_setBlockedUsingDamagedShieldTimeStamp(long)
Player::resetOnScreenAnimationTicks()
Player::onBounceStarted(BlockPos const&, Block const&)
Player::getPlayerIndex() const
Player::setPlayerIndex(int)
Player::isUsingItem() const
Player::getItemInUse() const
Player::startUsingItem(ItemStack const&, int)
Player::releaseUsingItem()
Player::setSelectedItem(ItemStack const&)
Player::feed(int)
Player::completeUsingItem()
Player::getSelectedItem() const
Player::useItem(ItemStack&, ItemUseMethod, bool)
Player::getItemUseDuration()
Player::getItemUseStartupProgress()
Player::getItemUseIntervalProgress()
Player::getTicksUsingItem()
Player::isBlocking() const
Player::getCurrentActiveShield() const
Player::isDamageBlocked(ActorDamageSource const&) const
Player::move(Vec3 const&)
Player::travel(float, float, float)
Player::stopGliding()
Player::checkMovementStats(Vec3 const&)
Player::causeFoodExhaustion(float)
Player::handleJumpEffects()
Player::jumpFromGround()
Player::isImmobile() const
Player::deleteContainerManager()
Player::resetRot()
Player::resetPos(bool)
Player::updateAi()
Player::aiStep()
Player::_touch(Actor&)
Player::updateTrackedBosses()
Player::updateInventoryTransactions()
Player::isInCreativeMode() const
Player::canUseAbility(AbilitiesIndex) const
Player::getScore()
Player::die(ActorDamageSource const&)
Player::dropCursorSelectedItem()
Player::awardKillScore(Actor&, int)
Player::isShootable()
Player::isCreativeModeAllowed()
Player::isInTrialMode()
Player::getAllHand() const
Player::getAllEquipment() const
Player::add(ItemStack&)
Player::getDestroySpeed(Block const&) const
Player::_getItemDestroySpeed(Block const&) const
Player::getDestroyProgress(Block const&) const
Player::canDestroy(Block const&) const
Player::getCommandPermissionLevel() const
Player::isOperator() const
Player::getPlayerPermissionLevel() const
Player::setPermissions(CommandPermissionLevel)
Player::canUseOperatorBlocks() const
Player::readAdditionalSaveData(CompoundTag const&, DataLoadHelper&)
Player::getXpNeededForNextLevel() const
Player::setPlayerUIItem(PlayerUISlot, ItemStack const&)
Player::addAdditionalSaveData(CompoundTag&)
Player::getPlayerLevel() const
Player::getLevelProgress() const
Player::getAgentID() const
Player::startCrafting(BlockPos const&, bool)
Player::startStonecutting(BlockPos const&)
Player::openFurnace(BlockPos const&)
Player::openBlastFurnace(BlockPos const&)
Player::openSmoker(BlockPos const&)
Player::openBrewingStand(BlockPos const&)
Player::openHopper(BlockPos const&)
Player::openHopper(ActorUniqueID const&)
Player::openDispenser(BlockPos const&, bool)
Player::openPortfolio()
Player::openBook(int, bool, int, BlockActor*)
Player::openCommandBlock(BlockPos const&)
Player::openCommandBlockMinecart(ActorUniqueID const&)
Player::openHorseInventory(ActorUniqueID const&)
Player::openNpcInteractScreen(Actor&)
Player::openInventory()
Player::openChalkboard(ChalkboardBlockActor&, bool)
Player::openTrading(ActorUniqueID const&, bool)
Player::openEnchanter(BlockPos const&)
Player::openBeacon(BlockPos const&)
Player::openStructureEditor(BlockPos const&)
Player::openLabTable(BlockPos const&)
Player::openElementConstructor(BlockPos const&)
Player::openCompoundCreator(BlockPos const&)
Player::openMaterialReducer(BlockPos const&)
Player::openLoom(BlockPos const&)
Player::openCartographyTable(BlockPos const&)
Player::openStonecutter(BlockPos const&)
Player::canOpenContainerScreen()
Player::take(Actor&, int, int)
Player::getCameraOffset() const
Player::getRidingHeight()
Player::isHurt()
Player::isHungry() const
Player::_hurt(ActorDamageSource const&, int, bool, bool)
Player::isSpawned() const
Player::_blockUsingShield(ActorDamageSource const&, float)
Player::setLastHurtBy(ActorType)
Player::interact(Actor&, Vec3 const&)
Player::getItemInteractText[abi:cxx11](Item const&) const
Player::adjustDamageAmount(int&) const
Player::attack(Actor&)
Player::recheckSpawnPosition()
Player::setBlockRespawnUntilClientMessage(bool)
Player::updateTeleportDestPos()
Player::hasRespawnPosition() const
Player::isForcedRespawn() const
Player::getBlockRespawnUntilClientMessage() const
Player::_chooseSpawnArea()
Player::_isChunkSourceLoaded(Vec3 const&, BlockSource const&) const
Player::_chooseSpawnPositionWithinArea()
Player::setTeleportDestination(Vec3 const&)
Player::_validateSpawnPositionAvailability(Vec3 const&, BlockSource*, Vec3 const*) const
Player::_isDangerousSpawn(BlockSource&, AABB const&) const
Player::_fixup4JBedSpawnPosition(Vec3&)
Player::clearRespawnPosition()
Player::checkAndfixSpawnPosition(Vec3&, std::vector<BlockSource*, std::allocator<BlockSource*> >, bool, bool, bool, bool) const
Player::_findFallbackSpawnPosition(Vec3&, std::vector<BlockSource*, std::allocator<BlockSource*> >, unsigned int)
Player::_ensureSafeSpawnPosition(Vec3&)
Player::sendMotionPacketIfNeeded()
Player::onMovePlayerPacketNormal(Vec3 const&, Vec2 const&, float)
Player::_setStartedBlockingTimeStamp(long)
Player::handleMovePlayerPacket(Player::PositionMode, Vec3 const&, Vec2 const&, float, int, int)
Player::getPlayerSessionId[abi:cxx11]() const
Player::respawn()
Player::setRespawnDimension(AutomaticID<Dimension, int>)
Player::drop(ItemStack const&, bool)
Player::dropEquipment()
Player::dropEquipment(ActorDamageSource const&, int)
Player::getCarriedItem() const
Player::setCarriedItem(ItemStack const&)
Player::remove()
Player::isHiddenFrom(Mob&) const
Player::setSpeed(float)
Player::hasResource(int)
Player::getSpawnPosition()
Player::setRespawnPosition(BlockPos const&, bool)
Player::setRespawnDimensionId(AutomaticID<Dimension, int>)
Player::crackBlock(BlockPos const&, unsigned char)
Player::openContainer(BlockPos const&)
Player::openContainer(ActorUniqueID const&)
Player::openAnvil(BlockPos const&)
Player::openGrindstone(BlockPos const&)
Player::handleEntityEvent(ActorEvent, int)
Player::_addLevels(int)
Player::sendInventory(bool)
Player::getSelectedItemSlot() const
Player::openSign(BlockPos const&)
Player::playEmote(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
Player::getAttackDamage()
Player::isLocalPlayer() const
Player::isHostingPlayer() const
Player::hasOwnedChunkSource() const
Player::tickWorld(Tick const&)
Player::tickArmor()
Player::isInRaid() const
Player::getTickingOffsets() const
Player::rideTick()
Player::getStandingPositionOnBlock(BlockPos const&)
Player::setChunkRadius(unsigned int)
Player::getPortalCooldown() const
Player::getPortalWaitTime() const
Player::setPlayerGameType(GameType)
Player::getPlayerGameType() const
Player::resetToDefaultGameMode()
Player::getUnmappedPlayerGameType()
Player::eat(ItemStack const&)
Player::eat(int, float)
Player::_crit(Actor&)
Player::getEnchantmentSeed() const
Player::setEnchantmentSeed(int)
Player::spawnExperienceOrb(Vec3 const&, int)
Player::setArmor(ArmorSlot, ItemStack const&)
Player::setOffhandSlot(ItemStack const&)
Player::isInvulnerableTo(ActorDamageSource const&) const
Player::addExperience(int)
Player::addLevels(int)
Player::_sendShieldUpdatePacket(ShieldItem const*, ItemStack const&, ItemStack const&, ContainerID, int)
Player::getAddPacket()
Player::isWorldBuilder()
_computeLevelXp(int)
Player::getXpNeededForLevelRange(int, int) const
Player::hasOpenContainer() const
Player::inventoryChanged(Container&, int, ItemStack const&, ItemStack const&)
Player::getContainerManager()
Player::getHudContainerManagerModel()
Player::getEquippedTotem() const
Player::consumeTotem()
Player::getLuck()
Player::getEventing() const
Player::getUserId() const
Player::sendEventPacket(EventPacket&) const
Player::getPlayerUIItem(PlayerUISlot)
Player::setCursorSelectedItem(ItemStack const&)
Player::setCursorSelectedItemGroup(ItemGroup const&)
Player::startGliding()
Player::startSwimming()
Player::stopSwimming()
Player::startSpinAttack()
Player::stopSpinAttack()
Player::onSuspension()
Player::onLinkedSlotsChanged()
Player::setAgent(Agent*)
Player::getAgent() const
Player::getAgentIfAllowed(bool, ActorUniqueID) const
Player::isChatAllowed()
Player::canBePulledIntoVehicle() const
Player::fireDimensionChangedEvent(AutomaticID<Dimension, int>)
Player::queueOnScreenTextureAnimation(unsigned int)
Player::getCurrentOnScreenAnimationEffectID() const
Player::getOnScreenAnimationTicks() const
Player::getBlockingStartTimeStamp() const
Player::getBlockedUsingShieldTimeStamp() const
Player::getBlockedUsingDamagedShieldTimeStamp() const
Player::getDirection() const
Player::addListener(PlayerListener&)
Player::removeListener(PlayerListener&)
Player::updateGliding()
replaceCurrentItem(Player&, ItemStack&)
addItem(Player&, ItemStack&)
Player::startCooldown(Item const*)
Player::getItemCooldownLeft(CooldownType) const
Player::isItemInCooldown(CooldownType) const
Player::canExistWhenDisallowMob() const
Player::getMapIndex()
Player::setMapIndex(int)
Player::getFormattedNameTag[abi:cxx11]() const
Player::getAlwaysShowNameTag() const
Player::_onSizeUpdated()
Player::getInteractText[abi:cxx11]() const
Player::getLastHurtBy() const
Player::clearCreativeItemList()
Player::updateCreativeItemList(std::vector<ItemInstance, std::allocator<ItemInstance> > const&)
Player::getCreativeItemList() const
Player::getFilteredCreativeItemList() const
Player::canAddRider(Actor&) const
Player::_handleCarriedItemInteractText()
Player::checkNeedAutoJump(float, float)
Player::getSkinAdjustments() const
Player::updateSkin(SerializedSkin const&, int)
Player::getSkin() const
Player::getSkin()
Player::getAttachPos(ActorLocation, float) const
Player::onResetBAI(int)
Player::reportMovementTelemetry(MovementEventType)
Player::useUIAnimationComponent(bool)
Player::getAnimationComponent()
Player::getActorRendererId() const
