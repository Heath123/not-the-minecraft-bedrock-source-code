SpawnData::SpawnData()
SpawnData::SpawnData(CompoundTag const&)
SpawnData::SpawnData(int, ActorDefinitionIdentifier)
SpawnData::SpawnData(SpawnData const&)
SpawnData::save()
SpawnData::~SpawnData()
SpawnData::~SpawnData()
BaseMobSpawner::BaseMobSpawner(ActorDefinitionIdentifier)
BaseMobSpawner::setEntityId(ActorDefinitionIdentifier)
BaseMobSpawner::~BaseMobSpawner()
BaseMobSpawner::~BaseMobSpawner()
BaseMobSpawner::getSpawnTypeId() const
BaseMobSpawner::getNextSpawnData() const
BaseMobSpawner::setNextSpawnData(std::unique_ptr<SpawnData, std::default_delete<SpawnData> >)
BaseMobSpawner::isNearPlayer(BlockSource&)
BaseMobSpawner::_delay(BlockSource&)
BaseMobSpawner::tick(BlockSource&)
BaseMobSpawner::getDisplayEntity(BlockSource&)
BaseMobSpawner::load(CompoundTag const&)
BaseMobSpawner::save(CompoundTag&)
BaseMobSpawner::getSpin() const
BaseMobSpawner::getOSpin() const
