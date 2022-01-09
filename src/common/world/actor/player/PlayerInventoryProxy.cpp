PlayerInventoryProxy::PlayerInventoryProxy(std::unique_ptr<Inventory, std::default_delete<Inventory> >)
PlayerInventoryProxy::~PlayerInventoryProxy()
PlayerInventoryProxy::~PlayerInventoryProxy()
PlayerInventoryProxy::init(std::weak_ptr<HudContainerManagerModel>)
PlayerInventoryProxy::addListener(ContainerContentChangeListener*)
PlayerInventoryProxy::removeListener(ContainerContentChangeListener*)
PlayerInventoryProxy::setContainerChanged(int)
PlayerInventoryProxy::containerSizeChanged(int)
PlayerInventoryProxy::containerContentChanged(int)
PlayerInventoryProxy::add(ItemStack&, bool)
PlayerInventoryProxy::canAdd(ItemStack const&) const
PlayerInventoryProxy::getSlotWithItem(ItemStack const&, bool, bool) const
PlayerInventoryProxy::getFirstEmptySlot() const
PlayerInventoryProxy::getEmptySlotsCount() const
PlayerInventoryProxy::getSlots() const
PlayerInventoryProxy::getComplexItems(ContainerID) const
PlayerInventoryProxy::getSlotCopies(ContainerID) const
PlayerInventoryProxy::_getHudContainer() const
PlayerInventoryProxy::setContainerSize(int, ContainerID)
PlayerInventoryProxy::getContainerSize(ContainerID) const
PlayerInventoryProxy::getHotbarSize() const
PlayerInventoryProxy::getItemCount(ItemDescriptor const&)
PlayerInventoryProxy::hasResource(int)
PlayerInventoryProxy::getAndRemoveResource(ItemStack&, bool, bool)
PlayerInventoryProxy::removeResource(int)
PlayerInventoryProxy::removeResource(ItemStack const&)
PlayerInventoryProxy::removeResource(ItemStack const&, bool, bool, int)
PlayerInventoryProxy::swapSlots(int, int)
PlayerInventoryProxy::clearSlot(int, ContainerID)
PlayerInventoryProxy::clearInventory(int)
PlayerInventoryProxy::clearInventoryWithDefault(bool)
PlayerInventoryProxy::load(ListTag const&, SemVersion const&, Level&)
PlayerInventoryProxy::save()
PlayerInventoryProxy::dropSlot(int, bool, bool, ContainerID, bool)
PlayerInventoryProxy::dropAll(bool)
PlayerInventoryProxy::tick()
PlayerInventoryProxy::setItem(int, ItemStack const&, ContainerID)
PlayerInventoryProxy::setItemWithoutSlotLinking(int, ItemStack const&, ContainerID)
PlayerInventoryProxy::getItem(int, ContainerID) const
PlayerInventoryProxy::removeItem(int, int, ContainerID)
PlayerInventoryProxy::_getHudContainerManagerModel()
PlayerInventoryProxy::_getInventoryContainer()
PlayerInventoryProxy::createTransactionContext(std::function<void (Container&, int, ItemStack const&, ItemStack const&)>, std::function<void ()>)
PlayerInventoryProxy::getSelectedSlot() const
PlayerInventoryProxy::getSelectedContainerId()
PlayerInventoryProxy::selectSlot(int, ContainerID)
PlayerInventoryProxy::getSelectedItem()
PlayerInventoryProxy::setSelectedItem(ItemStack const&)
PlayerInventoryProxy::getAllContainerIds()
