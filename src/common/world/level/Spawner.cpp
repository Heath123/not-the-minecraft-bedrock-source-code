Spawner::spawnMob(BlockSource&, ActorDefinitionIdentifier const&, Actor*, Vec3 const&, bool, bool, bool)
Spawner::spawnItem(BlockSource&, ItemStack const&, Actor*, Vec3 const&, int)
Spawner::spawnProjectile(BlockSource&, ActorDefinitionIdentifier const&, Actor*, Vec3 const&, Vec3 const&)
Spawner::Spawner(Level&)
Spawner::popCapAllows(Dimension const&, MobSpawnerData const&, bool, bool) const
Spawner::spawnMobGroup(BlockSource&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Vec3 const&, bool, std::function<void (Mob&)>&&)
Spawner::isSpawnPositionOk(MobSpawnRules const&, BlockSource&, BlockPos const&)
Spawner::_permuteId(ActorDefinitionIdentifier&, MobSpawnRules const&, Random&) const
Spawner::_updateMobCounts(BlockSource&, ActorDefinitionIdentifier const&, SpawnConditions const&)
Spawner::_sendHerdEvents(MobSpawnHerdInfo const&, std::vector<Mob*, std::allocator<Mob*> >&) const
Spawner::_updateGroupPersistence(MobSpawnRules const&, std::vector<Mob*, std::allocator<Mob*> >&)
Spawner::_spawnMobCluster(BlockSource&, BlockPos&, SpawnConditions&)
Spawner::_handlePopulationCap(MobSpawnerData const*, SpawnConditions const&, int)
Spawner::_spawnMobInCluster(BlockSource&, ActorDefinitionIdentifier, BlockPos&, SpawnConditions&, std::vector<Mob*, std::allocator<Mob*> >&)
Spawner::_spawnStructureMob(BlockSource&, LevelChunk::HardcodedSpawningArea const&, SpawnConditions&)
Spawner::_updateBaseTypeCount(BlockSource&, ChunkPos const&)
Spawner::tick(BlockSource&, LevelChunk&)
Spawner::tickDespawn(BlockSource&, LevelChunk&)
Spawner::postProcessSpawnMobs(BlockSource&, int, int, Random&)
