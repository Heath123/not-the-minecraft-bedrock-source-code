Mob::Mob(ActorDefinitionGroup*, ActorDefinitionIdentifier const&)
Mob::registerAttributes()
Mob::_initHardCodedComponents()
Mob::calculateAmbientSoundTime(int)
Mob::Mob(Level&)
Mob::reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&)
Mob::reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&)
Mob::initBodyControl()
Mob::initializeComponents(Actor::InitializationMethod, VariantParameterList const&)
Mob::resetAttributes()
Mob::playBornSound()
Mob::playSpawnSound()
Mob::~Mob()
Mob::~Mob()
Mob::hasComponent(Util::HashString const&) const
Mob::createAIGoals()
Mob::createAI(std::vector<GoalDefinition, std::allocator<GoalDefinition> >)
Mob::stopAI()
Mob::isPickable()
Mob::getAmbientSoundPostponeTicks()
Mob::getAmbientSoundPostponeTicksRange()
Mob::_isHeadInWater()
Mob::_isFloorDamaging(BlockPos const&)
Mob::_isNewEntityAttack(ActorDamageCause) const
Mob::_tryApplyingLevitation(Vec3&) const
Mob::checkTotemDeathProtection(ActorDamageSource const&)
Mob::hasBoundOrigin() const
Mob::getBoundOrigin() const
Mob::setBoundOrigin(BlockPos)
Mob::playAmbientSound()
Mob::getAmbientSound()
Mob::baseTick()
Mob::tickBlockDamage()
Mob::tickAttributes()
Mob::tickEffects()
Mob::_updateSprintingState()
Mob::frostWalk()
Mob::isFrostWalking() const
Mob::setSleeping(bool)
Mob::tickDeath()
Mob::spawnAnim()
Mob::setInterpolation(bool)
Mob::lerpTo(Vec3 const&, Vec2 const&, int)
Mob::lerpTo(Vec3 const&, Vec2 const&, float, int)
Mob::lerpToRotation(Vec2 const&, int)
Mob::normalTick()
Mob::isGliding() const
Mob::doFireHurt(int)
Mob::getMeleeWeaponDamageBonus(Mob*)
Mob::getMeleeKnockbackBonus()
Mob::_hurt(ActorDamageSource const&, int, bool, bool)
Mob::hurtEffects(ActorDamageSource const&, int, bool, bool)
Mob::actuallyHurt(int, ActorDamageSource const*, bool)
Mob::_playStepSound(BlockPos const&, Block const&)
Mob::knockback(Actor*, int, float, float, float, float, float)
Mob::kill()
Mob::die(ActorDamageSource const&)
Mob::resolveDeathLoot(int, ActorDamageSource const&)
Mob::playerTouch(Player&)
Mob::causeFallDamage(float)
Mob::getTravelType()
Mob::calcMoveRelativeSpeed(Mob::TravelType)
Mob::goDownInWater()
Mob::travel(float, float, float)
Mob::getXxa() const
Mob::getYya() const
Mob::getZza() const
Mob::getJumpMultiplier()
Mob::getJumpPrevention()
Mob::emitJumpPreventedEvent(BlockPos const&)
Mob::shouldApplyWaterGravity()
Mob::applyFinalFriction(float, bool)
Mob::updateWalkAnim()
Mob::isShootable()
Mob::onBorn(Actor&, Actor&)
Mob::addAdditionalSaveData(CompoundTag&)
Mob::saveMainhand() const
Mob::_saveArmor()
Mob::saveOffhand() const
Mob::isPregnant() const
Mob::readAdditionalSaveData(CompoundTag const&, DataLoadHelper&)
Mob::loadMainhand(ListTag const*)
Mob::loadOffhand(ListTag const*)
Mob::_loadArmor(ListTag const*)
Mob::_verifyAttributes()
Mob::setIsPregnant(bool)
Mob::animateHurt()
Mob::isAlive() const
Mob::_applyRidingRotationLimits()
Mob::_updateMobTravel()
Mob::aiStep()
Mob::updateAttackAnim()
Mob::setJumping(bool)
Mob::updateAi()
Mob::newServerAiStep()
Mob::_serverAiMobStep()
Mob::isImmobile() const
Mob::jumpFromGround()
Mob::isJumpOnBlockPrevented(BlockPos const&)
Mob::addRider(Actor&)
Mob::startRiding(Actor&)
Mob::stopRiding(bool, bool, bool)
Mob::canPickUpLoot(ItemStack const&) const
Mob::getMaxHeadXRot()
Mob::lookAt(Actor*, float, float)
Mob::isLookingAtAnEntity()
Mob::checkSpawnRules(bool)
Mob::checkSpawnObstruction() const
Mob::outOfWorld()
Mob::getAttackAnim(float)
Mob::handleEntityEvent(ActorEvent, int)
Mob::getItemUseDuration()
Mob::getItemUseStartupProgress()
Mob::getItemUseIntervalProgress()
Mob::getItemuseIntervalAxis()
Mob::getSpeed() const
Mob::setSpeed(float)
Mob::getYHeadRot() const
Mob::snapToYHeadRot(float)
Mob::snapToYBodyRot(float)
Mob::setYHeadRot(float)
Mob::setRiderLockedBodyRot(float)
Mob::getRiderLockedBodyRot() const
Mob::getRiderRotLimit() const
Mob::setRiderRotLimit(float)
Mob::getGlidingTicks() const
Mob::isTransitioningSitting() const
Mob::setTransitioningSitting(bool)
Mob::isEating() const
Mob::setEating(bool)
Mob::getEatCounter() const
Mob::setEatCounter(int)
Mob::setWantsToBeJockey(bool)
Mob::wantsToBeJockey() const
Mob::isJumping() const
Mob::setJumpVelRedux(bool)
Mob::getJumpPower() const
Mob::getYawSpeedInDegreesPerSecond() const
Mob::setSprinting(bool)
Mob::setSpeedModifier(float)
Mob::isSprinting() const
Mob::_doSprintParticleEffect()
Mob::useNewAi() const
Mob::getCurrentSwingDuration()
Mob::swing()
Mob::ate()
Mob::isBlocking() const
Mob::getDamageAfterEnchantReduction(ActorDamageSource const&, int)
Mob::_getDamageAfterAbsorb(int, int)
Mob::getDamageAfterArmorAbsorb(ActorDamageSource const&, int)
Mob::getDamageAfterMagicAbsorb(ActorDamageSource const&, int)
Mob::getItemSlot(EquipmentSlot) const
Mob::setItemSlot(EquipmentSlot, ItemStack const&)
Mob::getArmorValue()
Mob::getArmorCoverPercentage() const
Mob::getAllArmor() const
Mob::getAllArmorID() const
Mob::getAllHand() const
Mob::getAllEquipment() const
Mob::setEquippedSlot(ArmorSlot, int, int)
Mob::setEquippedSlot(ArmorSlot, ItemStack const&)
Mob::hurtArmor(int)
Mob::getArmorMaterialTypeInSlot(ArmorSlot) const
Mob::getArmorMaterialTextureTypeInSlot(ArmorSlot) const
Mob::getArmorColorInSlot(ArmorSlot, int) const
Mob::getDeathTime() const
Mob::getArmorTypeHash()
Mob::setOnFire(int)
Mob::sendInventory(bool)
Mob::sendArmor()
Mob::containerChanged(int)
Mob::updateEquipment()
Mob::clearEquipment()
Mob::dropEquipment()
Mob::dropEquipment(ActorDamageSource const&, int)
Mob::getItemInHandIcon(ItemStack const&, int)
Mob::canBeControlledByRider()
Mob::leaveCaravan()
Mob::getFirstCaravanHead()
Mob::getCaravanSize() const
Mob::joinCaravan(Mob*)
Mob::hasCaravanTail() const
Mob::inCaravan() const
Mob::getCaravanHead() const
Mob::rideTick()
Mob::blockedByShield(ActorDamageSource const&, Actor&)
Mob::getLastHurtByMob()
Mob::_updateMobId(ActorUniqueID&)
Mob::setLastHurtByMob(Mob*)
Mob::setTarget(Actor*)
Mob::getLastHurtByPlayer()
Mob::setLastHurtByPlayer(Player*)
Mob::setLastHurtMob(Actor*)
Mob::getLastHurtMobTimestamp()
Mob::getLastHurtByMobTimestamp()
Mob::getLastHurtMob()
Mob::attack(Actor&)
Mob::isAlliedTo(Mob*)
Mob::doHurtTarget(Actor*)
Mob::pushActors()
Mob::shouldDespawn() const
Mob::getNoActionTime() const
Mob::teleportTo(Vec3 const&, bool, int, int)
Mob::setSpawnMethod(MobSpawnMethod)
Mob::getSpawnMethod()
Mob::canExistWhenDisallowMob() const
Mob::attackAnimation(Actor*, float)
Mob::getAttackTime()
Mob::_getWalkTargetValue(BlockPos const&)
Mob::onPlayerJump(int)
Mob::buildDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
Mob::setXxa(float)
Mob::setYya(float)
Mob::setZza(float)
Mob::getYRotA() const
Mob::setYRotA(float)
Mob::incrementArrowCount(int)
Mob::setNaturallySpawned(bool)
Mob::isNaturallySpawned() const
Mob::setSurfaceMob(bool)
Mob::isSurfaceMob() const
Mob::_addSpeedBonus(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, float)
Mob::_removeSpeedBonus(mce::UUID const&)
Mob::getFlightSpeed()
Mob::setFlightSpeed(float)
Mob::onPlayerDimensionChanged(Player*, AutomaticID<Dimension, int>)
Mob::getVillageLegacy() const
Mob::updateGliding()
Mob::canBePulledIntoVehicle() const
Mob::getInterpolatedBodyRot(float) const
Mob::getInterpolatedHeadRot(float) const
Mob::getInterpolatedBodyYaw(float) const
Mob::dropContainer()
Mob::dropBags()
Mob::_endJump()
Mob::_removeRider(ActorUniqueID const&, bool, bool)
Mob::canPowerJump() const
Mob::_onSizeUpdated()
Mob::isLayingEgg() const
Mob::setIsLayingEgg(bool)
Mob::renderDebugServerState(Options const&)
Mob::getFrictionModifier() const
Mob::setFrictionModifier(float)
Mob::getRollCounter() const
Mob::isRolling() const
Mob::setRolling(bool)
Mob::isSleeping() const
Mob::updateEntitySpecificMolangVariables(RenderParams&)
Mob::ascendLadder()
Mob::ascendScaffolding()
Mob::descendScaffolding()
Mob::_allowAscendingScaffolding() const
Mob::setTargetCaptain(ActorUniqueID)
Mob::getTargetCaptain() const
