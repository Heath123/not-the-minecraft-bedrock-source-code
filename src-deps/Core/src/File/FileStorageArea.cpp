Core::FileStorageArea::getStorageAreaForPath(std::shared_ptr<Core::FileStorageArea>&, Core::Path const&)
Core::FileStorageArea::_getStorageAreaForPathImpl(std::shared_ptr<Core::FileStorageArea>&, Core::Path const&)
Core::FileStorageArea::unloadAllStorageAreaFlatFileManifests(bool)
Core::FileStorageArea::teardown()
Core::FileStorageArea::FileStorageArea(Core::FileAccessType, Core::Path const&, bool, bool, std::shared_ptr<Core::FileStorageArea>)
Core::FileStorageArea::getRootPath[abi:cxx11]() const
Core::FileStorageArea::setLoggingEnabled(bool)
Core::FileStorageArea::~FileStorageArea()
Core::FileStorageArea::~FileStorageArea()
Core::FileStorageArea::getAccessType() const
Core::FileStorageArea::supportsExtendSize() const
Core::FileStorageArea::canExtendSize() const
Core::FileStorageArea::resetCanAttemptExtendSize()
Core::FileStorageArea::getExtendSizeThreshold(unsigned long&) const
Core::FileStorageArea::attemptExtendSize(long const&, std::function<void ()>)
Core::FileStorageArea::preemptiveExtendSize(unsigned long, std::function<void ()>, std::function<void ()>)
Core::FileStorageArea::_notifyBeginWrite()
Core::FileStorageArea::_notifyEndWrite()
Core::FileStorageArea::_onWriteFile(Core::Path)
Core::FileStorageArea::_onDeleteFile(Core::Path)
Core::FileStorageArea::_commit()
Core::FileStorageArea::_onTransactionsEmpty(bool)
Core::FileStorageArea::_getNumWriteTransactions() const
Core::FileStorageArea::_getNumAllTransactions() const
Core::FileStorageArea::_suspendFileIO()
Core::FileStorageArea::_resumeFileIO()
Core::FileStorageArea::_beginTransaction(Core::FileSystemImpl*, bool)
Core::FileStorageArea::_endTransaction(Core::FileSystemImpl*, bool)
Core::FileStorageArea::_addWriteOperation(bool, unsigned long)
Core::FileStorageArea::_addReadOperation(bool, unsigned long)
Core::FileStorageArea::_addReadWriteOperation(bool, unsigned long, unsigned long)
Core::FileStorageArea::getAvailableUserStorageSize()
Core::FileStorageArea::checkUserStorage()
Core::FileStorageArea::getTotalBytesWrittenAndReadFromAllStorageAreas(unsigned long&, unsigned long&)
Core::FileStorageArea::updateFlatFileManifests()
Core::FileStorageArea::checkCorrupt(bool)
Core::FileStorageArea::unloadFlatFileManifests(bool)
Core::FileStorageArea::addObserver(Core::FileStorageAreaObserver&)
Core::FileStorageArea::notifyChangeInFileSize(long, long)
Core::FileStorageArea::handlesPendingWrites() const
Core::FileStorageArea::informPendingWriteSize(unsigned long const&, bool)
Core::FileStorageArea::informStorageAreaCopy(unsigned long const&)
Core::FileStorageArea::getTransactionWriteSizeLimit() const
Core::FileStorageArea::setSaveDataIcon(Core::Path const&)
