CommandBlockDescription::getJsonName() const
CommandBlockDescription::deserializeData(Json::Value&)
CommandBlockDescription::serializeData(Json::Value&) const
CommandBlockComponent::CommandBlockComponent()
CommandBlockComponent::addAdditionalSaveData(CompoundTag&)
CommandBlockComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
CommandBlockComponent::initFromDefinition(Actor&)
CommandBlockComponent::getTicking() const
CommandBlockComponent::setTicking(bool)
CommandBlockComponent::_updateTickCount()
CommandBlockComponent::getCurrentTickCount() const
CommandBlockComponent::decrementTickCount()
CommandBlockComponent::getBaseCommandBlock() const
CommandBlockComponent::getBaseCommandBlock()
CommandBlockComponent::setTrackOutput(Actor&, bool)
CommandBlockComponent::setName(Actor&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
CommandBlockComponent::onCommandBlockUpdate(Actor&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, bool)
CommandBlockComponent::setLastOutput(Actor&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
CommandBlockComponent::resetCurrentTick()
