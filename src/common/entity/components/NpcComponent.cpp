NpcGUIOffset::NpcGUIOffset()
NpcGUIOffset::NpcGUIOffset(Json::Value const&)
NpcDescription::getJsonName() const
NpcDescription::deserializeData(Json::Value&)
NpcDescription::serializeData(Json::Value&) const
NpcComponent::NpcComponent()
NpcComponent::initFromDefinition(Actor&)
NpcComponent::_defineEntityDataString(Actor&, ActorDataIDs)
NpcComponent::_deserializeData()
NpcComponent::addAdditionalSaveData(Actor&, CompoundTag&) const
NpcComponent::getNameRawText[abi:cxx11](Actor const&) const
NpcComponent::getInteractiveRawText[abi:cxx11](Actor const&) const
NpcComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
NpcComponent::loadActions(Actor&)
NpcComponent::_serializeActions[abi:cxx11]() const
NpcComponent::getInteraction(Actor&, Player&, ActorInteraction&)
NpcComponent::hasEditPermission(Player&) const
NpcComponent::getCommandPermissionLevel() const
NpcComponent::getButtonCounts() const
NpcComponent::getActionCount() const
NpcComponent::getUrlCount() const
NpcComponent::getName[abi:cxx11](Actor const&) const
NpcComponent::getInteractiveText[abi:cxx11](Actor&) const
NpcComponent::_isClientSide(Actor&) const
NpcComponent::getPortraitOffset() const
NpcComponent::getPickerOffset() const
NpcComponent::setInteractiveTextFilter(std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > (std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)>, bool)
NpcComponent::removeInteractiveTextFilter()
NpcComponent::getSelectedSkinData() const
NpcComponent::getSkinData(int) const
NpcComponent::getSkinIndex() const
NpcComponent::getSkinCount() const
NpcComponent::setName(Actor&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
NpcComponent::_sendNpcRequest(Actor&, NpcRequestPacket) const
NpcComponent::setInteractiveText(Actor&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
NpcComponent::setSkinIndex(Actor&, int, bool)
NpcComponent::_isServerSide(Actor&) const
NpcComponent::setSkin(Actor&)
NpcComponent::_loadActions(std::vector<std::unique_ptr<NpcAction, std::default_delete<NpcAction> >, std::allocator<std::unique_ptr<NpcAction, std::default_delete<NpcAction> > > >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
NpcComponent::loadNPCData(Actor&)
NpcComponent::_loadData(Actor&)
NpcComponent::setActions(Actor&, std::vector<std::unique_ptr<NpcAction, std::default_delete<NpcAction> >, std::allocator<std::unique_ptr<NpcAction, std::default_delete<NpcAction> > > >&&)
NpcComponent::syncActionsWithClient(Actor&)
NpcComponent::executeCommandAction(Actor&, int)
NpcComponent::getActionAt(unsigned long)
NpcComponent::compileCommand(Actor&, CommandOrigin const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
NpcComponent::executeClosingCommands(Actor&)
NpcComponent::handleNpcRequest(Actor&, Player const&, NpcRequestPacket const&)
NpcComponent::_setActions(Actor&, Player const&, NpcRequestPacket const&)
NpcComponent::requestClosingCommandActions(Actor&) const
NpcComponent::requestCommandAction(Actor&, int) const
NpcComponent::syncActionsWithServer(Actor&) const
NpcComponent::addAction(std::unique_ptr<NpcAction, std::default_delete<NpcAction> >)
NpcComponent::removeActionAt(unsigned long)
NpcComponent::getActionAt(unsigned long) const
NpcComponent::getUpdatedActions(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::unique_ptr<NpcAction, std::default_delete<NpcAction> >, std::allocator<std::unique_ptr<NpcAction, std::default_delete<NpcAction> > > >&, bool&, bool&)
NpcComponent::_getCommands(Actor&)
NpcComponent::_defineEntityDataInt(Actor&, ActorDataIDs)
NpcComponent::loadNameRawText(Actor&)
NpcComponent::loadInteractiveRawText(Actor&)
