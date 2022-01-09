ItemIndexPair::ItemIndexPair(ItemStack const&, int)
ContainerModel::ContainerModel(ContainerEnumName, int, ContainerCategory)
ContainerModel::resize(int)
ContainerModel::_init()
ContainerModel::~ContainerModel()
ContainerModel::~ContainerModel()
ContainerModel::postInit()
ContainerModel::releaseResources()
ContainerModel::containerContentChanged(int)
ContainerModel::registerOnContainerChangedCallback(std::function<void (int, ItemStack const&, ItemStack const&)>)
ContainerModel::registerPlayerNotificationCallback(std::function<void (int, ItemStack const&, ItemStack const&)>)
ContainerModel::getContainerStringName[abi:cxx11]() const
ContainerModel::getContainerEnumName() const
ContainerModel::getContainerSize() const
ContainerModel::getFilteredContainerSize() const
ContainerModel::isIntermediaryCategory() const
ContainerModel::tick(int)
ContainerModel::getItem(int) const
ContainerModel::getItems() const
ContainerModel::getItemInstances()
ContainerModel::setItem(int, ContainerItemStack const&)
ContainerModel::_notifyPlayer(int, ItemStack const&, ItemStack const&)
ContainerModel::networkUpdateItem(int, ItemStack const&, ItemStack const&)
ContainerModel::getContainerCategory() const
ContainerModel::setContainerCategory(ContainerCategory)
ContainerModel::setItemSource(int, SlotData const&)
ContainerModel::getItemSource(int) const
ContainerModel::getItemCount(ItemDescriptor const&)
ContainerModel::isValid()
ContainerModel::isItemFiltered(ContainerItemStack const&) const
ContainerModel::isExpanableItemFiltered(int) const
ContainerModel::getItemExpandStatus(int) const
ContainerModel::getItemGroupName[abi:cxx11](int) const
ContainerModel::switchItemExpando(int)
ContainerModel::_getContainerOffset() const
ContainerModel::_onItemChanged(int, ItemStack const&, ItemStack const&)
FilteredContainerModel::FilteredContainerModel(ContainerEnumName, int, ContainerCategory, bool, bool, std::function<FilterResult (ContainerItemStack const&)>)
ExpandoContainerModel::ExpandoContainerModel(ContainerEnumName, int, ContainerCategory)
ExpandoContainerModel::~ExpandoContainerModel()
FilteredContainerModel::~FilteredContainerModel()
FilteredContainerModel::~FilteredContainerModel()
FilteredContainerModel::containerContentChanged(int)
FilteredContainerModel::_refreshContainer(bool)
FilteredContainerModel::refreshContainer(bool)
FilteredContainerModel::_init()
ExpandoContainerModel::refreshContainer(bool)
FilteredContainerModel::getContainerSize() const
FilteredContainerModel::_getContainerSize() const
FilteredContainerModel::getFilteredContainerSize() const
FilteredContainerModel::isExpanableItemFiltered(int) const
FilteredContainerModel::setItem(int, ContainerItemStack const&)
FilteredContainerModel::getItem(int) const
ExpandoContainerModel::getItem(int) const
ExpandoContainerModel::getContainerSize() const
FilteredContainerModel::setFilteringRule(std::function<FilterResult (ContainerItemStack const&)>)
FilteredContainerModel::isFiltering() const
FilteredContainerModel::setFiltering(bool)
FilteredContainerModel::getIndexForCreativeItem(ContainerItemStack const&) const
ExpandoContainerModel::getIndexForCreativeItem(ContainerItemStack const&) const
ExpandoModelElement::ExpandoModelElement(ContainerItemStack const&, ContainerExpandStatus, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ExpandoContainerModel::~ExpandoContainerModel()
ExpandoContainerModel::_init()
ExpandoContainerModel::_refreshContainer(bool)
ExpandoContainerModel::setItem(int, ContainerItemStack const&)
ExpandoContainerModel::getItems() const
ExpandoContainerModel::getFilteredContainerSize() const
ExpandoContainerModel::setOnItemExpandedCallback(std::function<void (std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, int)>)
ExpandoContainerModel::_generateCurrentItems()
ExpandoContainerModel::containerContentChanged(int)
ExpandoContainerModel::getItemExpandStatus(int) const
ExpandoContainerModel::getItemGroupName[abi:cxx11](int) const
ExpandoContainerModel::switchItemExpando(int)
