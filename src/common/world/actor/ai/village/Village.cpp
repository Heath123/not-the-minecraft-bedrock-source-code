Village::_sendSoundTheAlarmAchievement(Player const&) const
Village::_addPoiToVillage(ActorUniqueID const&, std::weak_ptr<POIInstance>)
Village::_calcPOIDist()
Village::Village(Dimension&, mce::UUID, BlockPos const&)
Village::_setDefaultBoundsAround(BlockPos const&)
Village::~Village()
Village::getBounds() const
Village::getRaidBounds() const
Village::tick(Tick, BlockSource&)
Village::_updateAggressors()
Village::_updateDwellerTimers()
Village::_updateClaimedPOIs(BlockSource&)
Village::_shouldUpdate() const
Village::_updateUnclaimedPOIs(BlockSource&)
Village::_claimUnclaimedPOIs()
Village::getBedPOICount() const
Village::getPopulationSize() const
Village::_getDwellerMap(DwellerRole)
Village::findRandomSpawnPos(BlockSource&, BlockPos const&, BlockPos const&)
Village::getCenter() const
Village::addActorToVillage(DwellerRole, ActorUniqueID const&)
Village::_spawnPassiveDwellers(BlockSource&, int)
Village::_ringBells(BlockSource&, Random&) const
Village::isVillageHeroActive() const
Village::_applyHeroOfTheVillageEffect(BlockSource&, AABB const&)
Village::_shouldSave() const
Village::saveEntireVillage()
Village::debugDraw()
Village::getUniqueID() const
Village::withinVillageBounds(Vec3 const&, float) const
Village::canSpawnAt(BlockSource&, BlockPos const&, BlockPos const&)
Village::canSpawnAt(BlockSource&, int, int, int, int, int, int)
Village::getApproximateRadius() const
Village::getPOICount() const
Village::getDwellerRoleCount(DwellerRole) const
Village::getIdealPopulationSize() const
Village::checkNeedMoreVillagers() const
Village::isBreedTimerOk() const
Village::getUnclaimedPOIs() const
Village::fetchOwnedPOI(ActorUniqueID const&, POIType)
Village::clearOwnedPOIs()
Village::removeVillageSavedData()
Village::_getUniqueVillageKey[abi:cxx11]() const
Village::canAddPOI(std::weak_ptr<POIInstance>) const
Village::hasPOI(std::weak_ptr<POIInstance>) const
Village::addPOI(std::weak_ptr<POIInstance>)
Village::addVillager(ActorUniqueID const&)
Village::removeActorFromVillage(DwellerRole, ActorUniqueID const&)
Village::removeVillager(ActorUniqueID const&)
Village::removeAllInstancesofActorFromVillage(ActorUniqueID const&)
Village::_clearVillagerPOIs(ActorUniqueID const&)
Village::hasSpecificDweller(DwellerRole, ActorUniqueID const&) const
Village::_getDwellerMap(DwellerRole) const
Village::_findAvailablePOI(unsigned long, Level&, Random&, ActorUniqueID)
Village::_findPreferredPOI(std::vector<std::weak_ptr<POIInstance>, std::allocator<std::weak_ptr<POIInstance> > >&, HashedString const&, ActorUniqueID)
Village::_findWeightedPOI(std::vector<std::weak_ptr<POIInstance>, std::allocator<std::weak_ptr<POIInstance> > >&, Random&, ActorUniqueID)
Village::_getType(POIType)
Village::_findClosestDweller(Actor*, Actor*&, float&, std::unordered_map<ActorUniqueID, Tick, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<std::pair<ActorUniqueID const, Tick> > > const&) const
Village::_createRaid()
Village::_sendRaidUpdateToPlayersInVillage(bool) const
Village::_findSpawnableRegion(Vec3, int) const
Village::_findSpawnableRegion(Vec3, int, bool&) const
Village::_chooseRaidSpawnPosition(unsigned long, Vec3&) const
Village::_findSpawnPointForRaid(Vec3&, float, float, bool, bool) const
Village::_findPlayerCentricSpawnPointForRaid(Vec3&, bool) const
Village::_chooseRandomDirectionFromVillage(Random&) const
Village::_chooseRandomPosAtDistance(Random&, Vec3 const&, float) const
Village::_spawnAndReadyRaidGroup(unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID> >&)
Village::_spawnRaidGroup(Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID> >&) const
Village::_readyRaidGroup(std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID> >&)
Village::loadDataByKey(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, CompoundTag const&)
Village::_loadVillageData(CompoundTag const&)
Village::_loadVillagePlayerStanding(CompoundTag const&)
Village::_loadVillageDwellers(CompoundTag const&)
Village::_loadVillagePOIs(CompoundTag const&)
Village::_loadVillageRaid(CompoundTag const&)
Village::_saveVillageData() const
Village::_saveVillagePlayerStanding() const
Village::_saveVillageDwellers() const
Village::_saveVillagePOIs() const
Village::_saveVillageRaid() const
Village::_helpLocateRaiders(Raid const&)
Village::_playSoundFrom(Vec3 const&, LevelSoundEvent)
Village::villagerLivesHere(ActorUniqueID const&) const
Village::onRemovedFromManager()
Village::canRemove() const
Village::addAggressor(Mob const&)
Village::getClosestAggressor(Actor*)
Village::hasAggressors() const
Village::getClosestBadStandingPlayer(Actor*)
Village::isVeryBadStanding(ActorUniqueID const&)
Village::getClosestPOI(POIType, BlockPos const&)
Village::isVillagePOI(BlockSource const&, BlockPos const&)
Village::isValidRegisteredPOI(BlockSource&, BlockPos const&)
Village::hasInvalidRole(ActorUniqueID const&, DwellerRole const&)
Village::getStanding(ActorUniqueID const&)
Village::modifyStanding(ActorUniqueID const&, int)
Village::isGoodStanding(ActorUniqueID const&)
Village::isBadStanding(ActorUniqueID const&)
Village::rewardAllPlayers(int)
Village::resetNoBreedTimer()
Village::startVillageHeroTimer()
Village::resetDwellerTimer(DwellerRole, ActorUniqueID const&)
Village::triggerRaid()
Village::hasRaid() const
Village::getRaid() const
Village::clearRaid()
Village::fireSoundTheAlarm()
Village::isVillagePOI(VillageManager const&, Block const&)
Village::isValidBedPOI(Block const&)
Village::isValidRegisteredPOI(BlockSource&, Block const&, BlockPos const&)
