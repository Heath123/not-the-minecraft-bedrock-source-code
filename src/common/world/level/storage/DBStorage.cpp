_convertError(leveldb::Status const&)
_writeBufferSize(long)
_cacheSizeMb(unsigned long)
_createCache(unsigned long)
DBStorage::tryRepair(Core::Path const&) const
DBStorage::DBStorage(DBStorageConfig)
DBStorage::_isMarkedAsCorrupted() const
DBStorage::_removeCorruptedMark() const
DBStorage::_getTelemetryMessage[abi:cxx11](leveldb::Status const&) const
DBStorage::~DBStorage()
DBStorage::_queueSaveCallback(bool)
DBStorage::~DBStorage()
DBStorage::addStorageObserver(std::unique_ptr<LevelStorageObserver, std::default_delete<LevelStorageObserver> >)
DBStorage::_isDBUsable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool) const
DBStorage::_isDBSaveable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool) const
DBStorage::getStatistics(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
DBStorage::getState() const
DBStorage::getTaskGroup()
DBStorage::loadLevelData(LevelData&)
DBStorage::saveLevelData(LevelData const&)
DBStorage::_saveDataSync(gsl::basic_string_span<char const, -1l>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)
DBStorage::_write(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)
DBStorage::_read(gsl::basic_string_span<char const, -1l>, std::function<void (gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&) const
DBStorage::forEachKeyWithPrefix(gsl::basic_string_span<char const, -1l>, std::function<void (gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)> const&) const
DBStorage::loadData(gsl::basic_string_span<char const, -1l>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
DBStorage::_readPendingWrite(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
DBStorage::isCorrupted() const
DBStorage::startShutdown()
DBStorage::checkShutdownDone()
DBStorage::hasKey(gsl::basic_string_span<char const, -1l>) const
DBStorage::_corruptionMarkerPath[abi:cxx11]() const
DBStorage::_markAsCorrupted(gsl::basic_string_span<char const, -1l>) const
DBStorage::_handleErrorStatus(leveldb::Status const&)
DBStorage::_write(leveldb::WriteBatch&)
DBStorage::hasAnyKeyWithPrefix(leveldb::Slice const&) const
DBStorage::_writeAsync(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)
DBStorage::saveData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)
DBStorage::deleteData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
DBStorage::syncIO()
DBStorage::getCompoundTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
DBStorage::createChunkStorage(std::unique_ptr<ChunkSource, std::default_delete<ChunkSource> >, StorageVersion)
DBStorage::createSnapshot(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
DBStorage::releaseSnapshot()
DBStorage::compactStorage()
DBStorage::syncAndSuspendStorage()
DBStorage::resumeStorage()
DBStorage::setFlushAllowed(bool)
DBStorage::flushToPermanentStorage()
DBStorage::_suspendAndPerformSaveAction(std::function<TaskResult ()>, std::function<void ()>)
DBStorage::freeCaches()
DBStorage::setCompactionCallback(std::function<void (CompactionStatus)>)
DBStorage::setCriticalSyncSaveCallback(std::function<void ()>)
DBStorage::_notifyChunkStorageDestroyed(DBChunkStorage&)
DBStorage::_scheduleNextAutoCompaction()
DBStorage::corruptLevel()
DBStorage::createWriteBatch()
