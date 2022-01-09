Raid::Raid(int, int, int, Difficulty, unsigned char, std::function<bool (unsigned long, Vec3&)>&&, std::function<bool (unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<ActorUniqueID>, std::equal_to<ActorUniqueID>, std::allocator<ActorUniqueID> >&)>&&, std::function<bool (ActorUniqueID const&)>&&)
Raid::_setNumGroupsInRaidBasedOnDifficulty(Difficulty)
Raid::getBossBarFilledFraction() const
Raid::_calcBossBarFilledFraction(float, float, float) const
Raid::getRemainingRaiders() const
Raid::appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
Raid::tick()
Raid::_tickPreparingGroup()
Raid::_tickPickingSpawnPoint()
Raid::_tickSpawningGroup()
Raid::_tickGroupInPlay()
Raid::_tickAwardingRewards()
Raid::_changeState(Raid::RaidState)
Raid::readAdditionalSaveData(CompoundTag const&)
Raid::addAdditionalSaveData(CompoundTag&) const
