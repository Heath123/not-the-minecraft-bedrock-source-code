ContainerDescription::getJsonName() const
ContainerDescription::deserializeData(Json::Value&)
ContainerDescription::serializeData(Json::Value&) const
ContainerComponent::ContainerComponent()
ContainerComponent::ContainerComponent(ContainerComponent&&)
ContainerComponent::operator=(ContainerComponent&&)
ContainerComponent::_getRawContainerPtr() const
ContainerComponent::initFromDefinition(Actor&)
ContainerComponent::initFromDefinition(Actor&, ContainerDescription const&)
ContainerComponent::rebuildContainer(Actor&, ContainerType, int, bool, int, bool)
ContainerComponent::addAdditionalSaveData(CompoundTag&)
ContainerComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
ContainerComponent::containerContentChanged(int)
ContainerComponent::canOpenContainer(Actor const&, Player&) const
ContainerComponent::openContainer(Actor&, Player&)
ContainerComponent::_unpackLootTable(Level&)
ContainerComponent::canBeSiphonedFrom() const
ContainerComponent::isPrivate() const
ContainerComponent::setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ContainerComponent::hasCustomName() const
ContainerComponent::getContainerType() const
ContainerComponent::getContainerSize() const
ContainerComponent::_tryMoveInItem(BlockSource&, ItemStack&, int, int, int)
ContainerComponent::hasRoomForItem(ItemActor const&)
ContainerComponent::hasRoomForItem(ItemStack const&)
ContainerComponent::addItem(ItemStack&)
ContainerComponent::addItem(ItemActor&)
ContainerComponent::addItem(BlockSource&, ItemStack&, int, int)
ContainerComponent::setItem(int, ItemStack const&)
ContainerComponent::getItem(int) const
ContainerComponent::removeItem(int, int)
ContainerComponent::countItemsOfType(ItemStack const&) const
ContainerComponent::getSlots() const
ContainerComponent::removeItemsOfType(ItemStack const&, int)
ContainerComponent::findFirstSlotForItem(ItemStack const&) const
ContainerComponent::dropContents(BlockSource&, Vec3 const&, bool)
ContainerComponent::setLootTable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
