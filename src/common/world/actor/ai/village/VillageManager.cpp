VillageManager::VillageManager(Dimension&)
VillageManager::_loadPOIBlueprints()
VillageManager::~VillageManager()
VillageManager::tick(Tick const&)
VillageManager::_removeVillages()
VillageManager::_processNextUnclusteredPOIQuery()
VillageManager::_clusterPOIs()
VillageManager::tickVillages(Tick const&, Vec3 const&, BlockSource&)
VillageManager::submitFindPOIQuery(BlockPos const&)
VillageManager::_hasPOIQuery(BlockPos const&) const
VillageManager::isWanderingTraderManagedByScheduler(Actor const&)
VillageManager::loadAllVillages()
VillageManager::saveAllVillages()
VillageManager::_createOrGetVillage(mce::UUID const&)
VillageManager::_unclusterDerelictPOIs(std::vector<std::weak_ptr<POIInstance>, std::allocator<std::weak_ptr<POIInstance> > >&)
VillageManager::fetchClosestVillage(BlockPos const&, int, unsigned int)
VillageManager::_fetchClosestVillage(BlockPos const&, int, unsigned int)
VillageManager::getClosestVillageWithRaid(BlockPos const&)
VillageManager::getVillageByID(mce::UUID const&) const
VillageManager::_addPOIWithinRadius(BlockPos const&, BlockSource&)
VillageManager::_assignPOIOrCreateVillage(std::shared_ptr<POIInstance>&&)
VillageManager::insertPOI(std::shared_ptr<POIInstance>&&)
VillageManager::_assignPOIOnly(std::shared_ptr<POIInstance>&&)
VillageManager::getPOI(BlockPos const&) const
VillageManager::_createPOI(BlockPos const&, Block const&)
VillageManager::hasPOI(BlockPos const&, POIType) const
VillageManager::getPOIBlueprint(Block const&)
VillageManager::removePOI(std::weak_ptr<POIInstance>)
VillageManager::isRegisteredPOI(Block const&) const
VillageManager::isValidPOIType(BlockPos const&, Block const&) const
VillageManager::getPOITypeFromBlueprint(Block const&) const
VillageManager::getPOINameFromBlueprint(Block const&) const
