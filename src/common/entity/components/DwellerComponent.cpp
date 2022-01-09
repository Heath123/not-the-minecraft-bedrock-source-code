DwellerDescription::getJsonName() const
DwellerDescription::deserializeData(Json::Value&)
DwellerDescription::serializeData(Json::Value&) const
DwellerComponent::DwellerComponent()
DwellerComponent::initFromDefinition(Actor&)
DwellerComponent::_getType(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
DwellerComponent::_getRole(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
DwellerComponent::onDeath(Actor&, ActorDamageSource const&)
DwellerComponent::getVillage(Actor const&) const
DwellerComponent::onRemove(Actor&)
DwellerComponent::setLastHurtByMob(Actor&, Mob*)
DwellerComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
DwellerComponent::addAdditionalSaveData(CompoundTag&)
DwellerComponent::getDwellerRole() const
DwellerComponent::getCanFindPOI() const
DwellerComponent::buildDebugInfo(Actor const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
DwellerComponent::hasDwelling() const
DwellerComponent::getDwellingUniqueID() const
DwellerComponent::setDwellingUniqueID(Actor&, mce::UUID)
DwellerComponent::_clearDwelling()
DwellerComponent::getDwellingUpdateInterval() const
DwellerComponent::setDwellingUpdateInterval(unsigned long)
DwellerComponent::DecrementDwellingUpdateInterval()
DwellerComponent::getFixUpRole() const
DwellerComponent::setFixUpRole(bool)
DwellerComponent::getUpdateIntervalBase() const
DwellerComponent::getUpdateIntervalVariant() const
DwellerComponent::getVillageCenter(Actor const&) const
DwellerComponent::hasPreferredProfession(Actor const&) const
DwellerComponent::_isLockedInToProfession(Actor const&) const
DwellerComponent::getPreferredProfession() const
DwellerComponent::trySetPreferredProfession(Actor const&, HashedString const&)
DwellerComponent::clearPreferredProfession()
DwellerComponent::isWithinRestriction(Actor const&) const
DwellerComponent::tryToMigrate(Actor&, Village*, Village*)
DwellerComponent::wantsToMigrate(Actor const&, Village*) const
DwellerComponent::tryToFixupRole(Actor const&, Village*)
DwellerComponent::needsToFixupVillageRole(Actor const&, Village*) const
DwellerComponent::checkandUpdateDwellingStatus(Actor const&, Village*)
