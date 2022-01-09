ItemTransferAmount::ItemTransferAmount(int)
ItemTransferAmount::ItemTransferAmount(ItemTakeType)
ItemTransferAmount::ItemTransferAmount(ItemPlaceType)
ItemTransferAmount::ItemTransferAmount(ItemTransferAmount const&, bool)
ItemTransferAmount::fromMaxStackSize() const
ContainerItemStack::ContainerItemStack()
ContainerItemStack::ContainerItemStack(ItemStack const&)
ContainerItemStack::ContainerItemStack(ItemInstance const&)
ContainerItemStack::operator-(ContainerItemStack const&)
ContainerItemStack::isEmpty() const
ContainerItemStack::decreaseCount(int)
ContainerItemStack::getCount() const
ContainerItemStack::operator+(ContainerItemStack const&)
ContainerItemStack::increaseCount(int)
ContainerItemStack::operator==(ContainerItemStack const&) const
ContainerItemStack::matches(ContainerItemStack const&) const
ContainerItemStack::operator!=(ContainerItemStack const&) const
ContainerItemStack::operator==(ItemStack const&) const
ContainerItemStack::operator!=(ItemStack const&) const
operator==(ItemStack const&, ContainerItemStack const&)
operator!=(ItemStack const&, ContainerItemStack const&)
ContainerItemStack::operator==(ItemInstance const&) const
ContainerItemStack::operator!=(ItemInstance const&) const
operator==(ItemInstance const&, ContainerItemStack const&)
operator!=(ItemInstance const&, ContainerItemStack const&)
ContainerItemStack::getItem() const
ContainerItemStack::getId() const
ContainerItemStack::getAuxValue() const
ContainerItemStack::setAuxValue(short)
ContainerItemStack::getDamageValue() const
ContainerItemStack::setDamageValue(short)
ContainerItemStack::getIdAux() const
ContainerItemStack::getIdAuxEnchanted() const
ContainerItemStack::isNull() const
ContainerItemStack::setNull()
ContainerItemStack::forceSetCount(int)
ContainerItemStack::getStackSize() const
ContainerItemStack::setStackSize(unsigned char)
ContainerItemStack::getMaxStackSize() const
ContainerItemStack::getItemStack() const
ContainerItemStack::getItemInstance() const
ContainerItemStack::matchesItem(ContainerItemStack const&) const
ContainerItemStack::getDescriptor() const
ContainerItemStack::hasUserData() const
ContainerItemStack::getUserData() const
ContainerItemStack::getColor() const
ContainerItemStack::getItemStack()
ContainerItemStack::getItemInstance()
ContainerItemStack::asItemStack() const
ContainerItemStack::asItemInstance() const
AutoPlaceItem::AutoPlaceItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
AutoPlaceResult::AutoPlaceResult(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
ContainerController::ContainerController(std::weak_ptr<ContainerModel>, bool)
ContainerController::~ContainerController()
ContainerController::~ContainerController()
ContainerController::getItem(int) const
ContainerController::getContainerSize() const
ContainerController::getContainerName[abi:cxx11]() const
ContainerController::getContainerModel() const
ContainerController::shouldDrop() const
ContainerController::setItem(int, ContainerItemStack&, ItemPlaceType, bool)
ContainerController::canSet(int, ContainerItemStack const&, ItemTransferAmount, bool) const
ContainerController::_canAdd(int, ContainerItemStack const&, ItemTransferAmount) const
ContainerController::_addItem(int, int)
ContainerController::removeItem(int, ItemTakeType)
ContainerController::_canRemove(int, ItemTakeType) const
ContainerController::removeItem(int, int)
ContainerController::addToStack(int, ContainerItemStack, ItemTakeType)
ContainerController::canSet(ContainerItemStack const&, bool) const
ContainerController::canSet(int, ContainerItemStack const&, bool) const
ContainerController::isItemAllowed(ItemInstance const&) const
ContainerController::isItemAllowedAtSlot(ContainerItemStack const&, int) const
ContainerController::isItemFiltered(Recipes const&, ContainerItemStack const&) const
ContainerController::getBackgroundStyle(int) const
ContainerController::isExpandableItemFiltered(int) const
ContainerController::getExpandoStatus(int) const
ContainerController::forEachItem(std::function<void (int, ContainerItemStack const&)>)
ContainerController::canRemove(int, int) const
ContainerController::_getAvailableSetCount(int, ContainerItemStack const&) const
ContainerController::_canSet(int, ContainerItemStack const&, ItemTransferAmount) const
ContainerController::getContainerCategory() const
ContainerController::getAvailableAutoPlaceCount(int, ContainerItemStack const&, bool) const
ContainerController::getAvailableAddCount(int, ContainerItemStack const&) const
ContainerController::_getAvailableAddCount(int) const
ContainerController::_canRemove(int, int) const
ContainerController::_onItemChanged(int)
