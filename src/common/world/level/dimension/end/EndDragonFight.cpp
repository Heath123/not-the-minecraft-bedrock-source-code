EndDragonFight::GateWayGenerator::GateWayGenerator()
EndDragonFight::GateWayGenerator::GateWayGenerator(bool, std::unique_ptr<ChunkViewSource, std::default_delete<ChunkViewSource> >, BlockPos)
EndDragonFight::GateWayGenerator::~GateWayGenerator()
EndDragonFight::EndDragonFight(BlockSource&)
EndDragonFight::loadData(CompoundTag const&)
EndDragonFight::_setRespawnStage(RespawnAnimation)
EndDragonFight::saveData(CompoundTag&)
EndDragonFight::tick()
EndDragonFight::_assignAndExecuteNextGatewayTask()
EndDragonFight::_canSpawnNewGateway(ChunkViewSource*, BlockPos const&) const
EndDragonFight::_placeAndLinkNewGatewayPair()
EndDragonFight::_setEndGatewayExitPositions()
EndDragonFight::_dragonAndPortalChunksLoaded() const
EndDragonFight::tryRespawn()
EndDragonFight::_tickRespawnAnimation(std::vector<ActorUniqueID, std::allocator<ActorUniqueID> > const&, int)
EndDragonFight::_createNewDragon()
EndDragonFight::_spawnExitPortal(bool)
EndDragonFight::_updateCrystalCount()
EndDragonFight::_hasExitPortal() const
EndDragonFight::_findExitPortal()
EndDragonFight::setDragonKilled(EnderDragon&)
EndDragonFight::_spawnNewGatewayPair()
EndDragonFight::spawnNewGatewayChunks(BlockPos const&, bool, bool)
EndDragonFight::_spawnNewGatewayChunksTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator>&)
EndDragonFight::verifyExitPositions(EndGatewayBlockActor&)
EndDragonFight::_verifyExitPositionsTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator>&)
EndDragonFight::_makeEndIslandFeature(BlockSource&, BlockPos)
EndDragonFight::_setEndGatewayBlockActorExitPosition(BlockSource&, BlockSource&, BlockPos const&, BlockPos const&, bool)
EndDragonFight::_areaIsLoaded(ChunkPos const&, ChunkViewSource&, int) const
EndDragonFight::getCrystalsAlive() const
EndDragonFight::onCrystalDestroyed(EnderCrystal const&, ActorDamageSource const&)
EndDragonFight::resetSpikeCrystals() const
EndDragonFight::hasPreviouslyKilledDragon()
EndDragonFight::_respawnDragon(std::vector<ActorUniqueID, std::allocator<ActorUniqueID> > const&)
