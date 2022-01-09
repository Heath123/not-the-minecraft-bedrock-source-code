WanderingTraderScheduler::WanderingTraderScheduler(Level&)
WanderingTraderScheduler::readSaveData()
WanderingTraderScheduler::~WanderingTraderScheduler()
WanderingTraderScheduler::tick()
WanderingTraderScheduler::_isTimeToTestIfSpawning()
WanderingTraderScheduler::_testIfSpawning()
WanderingTraderScheduler::_isTimeToSpawnWanderingTrader() const
WanderingTraderScheduler::_getRandomPlayerInOverworld() const
WanderingTraderScheduler::_doesWanderingTraderExist() const
WanderingTraderScheduler::_canWanderingTraderBeMoved() const
WanderingTraderScheduler::_getSpawnPosFromNearestVillageToPlayerPos(BlockPos const&, BlockSource&)
WanderingTraderScheduler::_shouldWanderingTraderSpawnInWildernessNow() const
WanderingTraderScheduler::_getRandomWildernessPosAroundSpecifiedPos(BlockPos const&, BlockSource&)
WanderingTraderScheduler::_canSpawnAtPosition(BlockPos const&, BlockSource&) const
WanderingTraderScheduler::_despawnManagedWanderingTrader()
WanderingTraderScheduler::_spawnWanderingTraderAtPos(BlockPos const&, BlockSource&)
WanderingTraderScheduler::writeSaveData() const
WanderingTraderScheduler::isWanderingTraderCurrentlyManaged(Actor const&)
WanderingTraderScheduler::_getSpawnChance(unsigned long) const
WanderingTraderScheduler::_getRandomXZAroundPos(BlockPos const&, int, bool)
WanderingTraderScheduler::_findClosestSpawnablePositionInColumn(BlockPos const&, BlockSource&)
WanderingTraderScheduler::_isPosSafeForSpawning(BlockPos const&, BlockSource&)
WanderingTraderScheduler::_createWanderingTrader(BlockPos const&)
WanderingTraderScheduler::_addWanderingTraderToLevel(std::unique_ptr<Actor, std::default_delete<Actor> >, BlockSource&)
