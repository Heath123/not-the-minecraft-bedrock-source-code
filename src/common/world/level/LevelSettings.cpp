LevelSettings::LevelSettings()
LevelSettings::LevelSettings(LevelSummary const&)
LevelSettings::LevelSettings(LevelData const&, AutomaticID<Dimension, int>)
LevelSettings::LevelSettings(unsigned int, GameType, Difficulty, AutomaticID<Dimension, int>, GeneratorType, BlockPos const&, bool, int, EducationEditionOffer, float, float, bool, bool, bool, Social::GamePublishSetting, Social::GamePublishSetting, bool, bool, bool, bool, bool, bool, GameRules, bool, bool, Abilities, unsigned int, bool, bool, bool, BaseGameVersion const&)
LevelSettings::setEducationFeaturesEnabled(bool)
LevelSettings::getDefaultSpawn() const
LevelSettings::getSeed() const
LevelSettings::getGameType() const
LevelSettings::getDimension() const
LevelSettings::getGameDifficulty() const
LevelSettings::getTime() const
LevelSettings::setForceGameType(bool)
LevelSettings::forceGameType() const
LevelSettings::hasAchievementsDisabled() const
LevelSettings::getGenerator() const
LevelSettings::getRainLevel() const
LevelSettings::getLightningLevel() const
LevelSettings::isEducationEditionWorld() const
LevelSettings::getEducationEditionOffer() const
LevelSettings::setEducationEditionOffer(EducationEditionOffer)
LevelSettings::educationFeaturesEnabled() const
LevelSettings::setImmutableWorld(bool)
LevelSettings::getImmutableWorld() const
LevelSettings::getGameRules() const
LevelSettings::hasConfirmedPlatformLockedContent() const
LevelSettings::getMultiplayerGameIntent() const
LevelSettings::getLanBroadcastIntent() const
LevelSettings::hasXBLBroadcastIntent() const
LevelSettings::getXBLBroadcastIntent() const
LevelSettings::hasPlatformBroadcastIntent() const
LevelSettings::getPlatformBroadcastIntent() const
LevelSettings::hasCommandsEnabled() const
LevelSettings::isTexturepacksRequired() const
LevelSettings::hasLockedBehaviorPack() const
LevelSettings::hasLockedResourcePack() const
LevelSettings::isFromLockedTemplate() const
LevelSettings::useMsaGamertagsOnly() const
LevelSettings::hasBonusChestEnabled() const
LevelSettings::hasStartWithMapEnabled() const
LevelSettings::getServerChunkTickRange() const
LevelSettings::getDefaultAbilities() const
LevelSettings::setOverrideSavedSettings(bool)
LevelSettings::shouldOverrideSavedSettings() const
LevelSettings::overrideSavedSettings(LevelData&) const
LevelSettings::achievementsWillBeDisabledOnLoad() const
LevelSettings::setNewWorldBehaviorPackIdentities(std::vector<PackInstanceId, std::allocator<PackInstanceId> > const&)
LevelSettings::getNewWorldBehaviorPackIdentities() const
LevelSettings::setNewWorldResourcePackIdentities(std::vector<PackInstanceId, std::allocator<PackInstanceId> > const&)
LevelSettings::getNewWorldResourcePackIdentities() const
LevelSettings::setForceExperimentalGameplay(bool)
LevelSettings::shouldForceExperimentalGameplay() const
LevelSettings::isFromWorldTemplate() const
LevelSettings::isWorldTemplateOptionLocked() const
LevelSettings::getOnlySpawnV1Villagers() const
LevelSettings::setOnlySpawnV1Villagers(bool)
LevelSettings::getBaseGameVersion() const
LevelSettings::setBaseGameVersion(BaseGameVersion const&)
LevelSettings::setEducationLevelSettings(EducationLevelSettings)
LevelSettings::getEducationLevelSettings() const
LevelSettings::validateGameDifficulty(Difficulty)
LevelSettings::generatorTypeToString[abi:cxx11](GeneratorType)
LevelSettings::parseSeedString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, unsigned int)
