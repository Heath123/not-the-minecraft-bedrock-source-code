Container::Container(ContainerType)
Container::Container(ContainerType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
Container::~Container()
Container::~Container()
Container::init()
Container::addSizeChangeListener(ContainerSizeChangeListener*)
Container::removeSizeChangeListener(ContainerSizeChangeListener*)
Container::addContentChangeListener(ContainerContentChangeListener*)
Container::removeContentChangeListener(ContainerContentChangeListener*)
Container::hasRoomForItem(ItemStack const&)
Container::addItem(ItemStack&)
Container::addItemToFirstEmptySlot(ItemStack&)
Container::removeItem(int, int)
Container::removeAllItems()
Container::dropContents(BlockSource&, Vec3 const&, bool)
Container::getSlotCopies() const
Container::getSlots() const
Container::getItemCount(ItemDescriptor const&)
Container::getItemCount(ItemStack const&)
Container::findFirstSlotForItem(ItemStack const&) const
Container::canPushInItem(BlockSource&, int, int, ItemInstance const&) const
Container::canPullOutItem(BlockSource&, int, int, ItemInstance const&) const
Container::getContainerType()
Container::getRedstoneSignalFromContainer()
Container::setSizeChanged(int)
Container::setContainerChanged(int)
Container::setContainerMoved()
Container::setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Container::hasCustomName() const
Container::readAdditionalSaveData(CompoundTag const&)
Container::addAdditionalSaveData(CompoundTag&)
Container::createTransactionContext(std::function<void (Container&, int, ItemStack const&, ItemStack const&)>, std::function<void ()>)
Container::triggerTransactionChange(int, ItemStack const&, ItemStack const&)
Container::getContainerTypeName[abi:cxx11](ContainerType)
Container::getContainerTypeId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
