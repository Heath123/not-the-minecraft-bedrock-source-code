Core::StorageAreaState::StorageAreaState(Core::Path)
Core::StorageAreaState::~StorageAreaState()
Core::StorageAreaState::addListener(Core::StorageAreaStateListener*)
Core::StorageAreaState::removeListener(Core::StorageAreaStateListener*)
Core::StorageAreaState::isExtendDiskSpaceEvent() const
Core::StorageAreaState::isLowDiskSpaceWarning() const
Core::StorageAreaState::isOutOfDiskSpaceError() const
Core::StorageAreaState::isCriticalDiskError() const
Core::StorageAreaState::checkUserStorage(std::weak_ptr<Core::FileStorageArea>&, unsigned long const&, unsigned long const&)
Core::StorageAreaState::_notifyExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea>&, unsigned long const&)
Core::StorageAreaState::_clearExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea>&, unsigned long const&)
Core::StorageAreaState::_notifyOutOfDiskSpaceError()
Core::StorageAreaState::_notifyLowDiskSpaceWarning()
Core::StorageAreaState::_clearLowDiskSpaceWarning()
Core::StorageAreaState::_clearOutOfSpaceError()
Core::StorageAreaState::notifyCriticalDiskError(Core::LevelStorageState const&)
Core::StorageAreaState::_fireExtendDiskSpaceEvent(bool, std::weak_ptr<Core::FileStorageArea>&, unsigned long const&, std::function<void ()>)
Core::StorageAreaState::_fireLowDiskSpaceWarning(bool)
Core::StorageAreaState::_fireOutOfDiskSpaceError(bool)
Core::StorageAreaState::_fireCriticalDiskError(bool, Core::LevelStorageState const&)
