Ability::Value::Value()
Ability::Value::Value(bool)
Ability::Value::Value(float)
Ability::Ability()
Ability::Ability(bool, Ability::Options)
Ability::Ability(float, Ability::Options)
Ability::operator=(Ability const&)
Ability::operator==(Ability const&) const
Ability::operator!=(Ability const&) const
Ability::getType() const
Ability::getBool() const
Ability::setBool(bool)
Ability::reset(Ability::Type)
Ability::getFloat() const
Ability::setFloat(float)
Ability::hasOption(Ability::Options) const
Abilities::Abilities()
Abilities::_initAbilities()
Abilities::_registerAbilities()
Abilities::setPlayerPermissions(PlayerPermissionLevel)
Abilities::Abilities(Abilities const&)
Abilities::operator=(Abilities const&)
Abilities::operator==(Abilities const&) const
Abilities::operator!=(Abilities const&) const
Abilities::addSaveData(CompoundTag&) const
Abilities::forEachAbility(std::function<void (Ability const&, char const*)> const&, Ability::Options) const
Abilities::loadSaveData(CompoundTag const&)
Abilities::forEachAbility(std::function<void (Ability&, char const*)> const&, Ability::Options)
Abilities::setAbility(AbilitiesIndex, bool)
Abilities::isFlying() const
Abilities::getBool(AbilitiesIndex) const
Abilities::getCommandPermissions() const
Abilities::setCommandPermissions(CommandPermissionLevel)
Abilities::isOperator() const
Abilities::getPlayerPermissions() const
Abilities::_setCustomCachedAbility(AbilitiesIndex)
Abilities::_resetCustomAbilities()
Abilities::_resetAbilities()
Abilities::getAbility(AbilitiesIndex)
Abilities::setAbilityDiff(AbilitiesIndex, bool, bool&)
Abilities::setAbility(AbilitiesIndex, float)
Abilities::setAbility(AbilitiesIndex, Ability const&)
Abilities::getAbility(AbilitiesIndex) const
Abilities::getFloat(AbilitiesIndex) const
Abilities::getAbilityName(AbilitiesIndex)
Abilities::nameToAbilityIndex(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Abilities::onSwitchToCustom()
Abilities::getCustomAbilityFromCache(AbilitiesIndex)
Abilities::getCustomAbilityFromCache(AbilitiesIndex) const
Abilities::_registerAbility(AbilitiesIndex, Ability const&)
