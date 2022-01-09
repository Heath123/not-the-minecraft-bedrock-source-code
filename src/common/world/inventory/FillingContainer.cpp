FillingContainer::FillingContainer(Player*, int, ContainerType)
FillingContainer::~FillingContainer()
FillingContainer::~FillingContainer()
FillingContainer::_isCreative() const
FillingContainer::_getEmptySlotsCount(int, int) const
FillingContainer::_trySetInSlot(ItemStack&, int const&, int const&, int&)
FillingContainer::_fixBackwardCompabilityItem(ItemStack&)
FillingContainer::_setSlotIfValid(CompoundTag*, int&, bool, int, int, int)
FillingContainer::_tryGetTag(ListTag const&, int)
FillingContainer::clearInventory(int)
FillingContainer::_release(int)
FillingContainer::getAndRemoveResource(ItemStack&, bool, bool)
FillingContainer::getSlotWithItem(ItemStack const&, bool, bool) const
FillingContainer::removeResource(int)
FillingContainer::_getSlot(int) const
FillingContainer::removeResource(ItemStack const&)
FillingContainer::removeResource(ItemStack const&, bool, bool, int)
FillingContainer::hasResource(int)
FillingContainer::swapSlots(int, int)
FillingContainer::add(ItemStack&)
FillingContainer::_addResource(ItemStack const&)
FillingContainer::_getFreeSlot() const
FillingContainer::canAdd(ItemStack const&) const
FillingContainer::_getSlotWithRemainingSpace(ItemStack const&) const
FillingContainer::removeItem(int, int)
FillingContainer::setItem(int, ItemStack const&)
FillingContainer::save()
FillingContainer::load(ListTag const&, SemVersion const&, Level&)
FillingContainer::getHotbarSize() const
FillingContainer::getItem(int) const
FillingContainer::getMaxStackSize() const
FillingContainer::getContainerSize() const
FillingContainer::dropSlot(int, bool, bool, bool)
FillingContainer::dropAll(bool)
FillingContainer::dropAll(int, int, bool)
FillingContainer::startOpen(Player&)
FillingContainer::stopOpen(Player&)
FillingContainer::getEmptySlotsCount() const
FillingContainer::getItemCount(ItemDescriptor const&)
FillingContainer::clearSlot(int)
FillingContainer::replace(std::vector<ItemStack, std::allocator<ItemStack> >, int)
FillingContainer::doDrop(ItemStack&, bool)
