GameRule::GameRule()
GameRule::GameRule(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, bool, bool, bool)
GameRule::GameRule(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, bool, bool, bool)
GameRule::GameRule(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, float, bool, bool, bool)
GameRule::GameRule(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
GameRule::getType() const
GameRule::resetType(GameRule::Type)
GameRules::getRules() const
GameRules::getRule(GameRuleId) const
GameRules::hasRule(GameRuleId) const
GameRule::_set(GameRule::Value const&, bool*, GameRule::ValidationError*)
GameRule::compareValue(GameRule::Value const&) const
GameRule::getBool() const
GameRule::setBool(bool, bool*, GameRule::ValidationError*)
GameRule::getInt() const
GameRule::setInt(int, bool*, GameRule::ValidationError*)
GameRule::getFloat() const
GameRule::setFloat(float, bool*, GameRule::ValidationError*)
GameRule::getValue() const
GameRule::shouldSave() const
GameRule::getName[abi:cxx11]() const
GameRule::allowUseInCommand() const
GameRule::hasDefaultSet() const
GameRule::requiresCheats() const
GameRule::setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
GameRule::_setDefaultValue(bool)
GameRule::_setDefaultValue(int)
GameRule::_setDefaultValue(float)
GameRule::setShouldSave(bool)
GameRule::setAllowInCommand(bool)
GameRule::setRequiresCheats(bool)
GameRule::setTagDataNotFoundCallback(std::function<void (GameRule&)>)
GameRule::setValidateValueCallback(std::function<bool (GameRule::Value const&, GameRule::ValidationError*)>)
GameRule::tagDataNotFound()
GameRules::GameRules()
GameRules::_registerRules()
GameRules::_validateRules()
GameRules::_validateMarketplaceGameRuleTypes()
GameRules::createAllGameRulesPacket() const
GameRules::deserializeRules(GameRulesChangedPacketData const&)
GameRules::nameToGameRuleIndex(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
GameRules::setRule(GameRuleId, bool, bool, bool*, bool*, GameRule::ValidationError*)
GameRules::setRule(GameRuleId, int, bool, bool*, bool*, GameRule::ValidationError*)
GameRules::setRule(GameRuleId, float, bool, bool*, bool*, GameRule::ValidationError*)
GameRules::_registerRule(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, GameRuleId)
GameRules::_setRule(GameRuleId, GameRule::Value, GameRule::Type, bool, bool*, bool*, GameRule::ValidationError*)
GameRules::_getRule(GameRuleId)
GameRules::_createPacket(GameRule const&)
GameRules::getBool(GameRuleId) const
GameRules::getInt(GameRuleId) const
GameRules::getFloat(GameRuleId) const
GameRules::setTagData(CompoundTag&) const
GameRules::getTagData(CompoundTag const&)
GameRules::setMarketplaceOverrides()
GameRules::_getMarketplaceGameRulesDefaultMap()
GameRules::_registerEDURules()
GameRuleId::GameRuleId(int)
