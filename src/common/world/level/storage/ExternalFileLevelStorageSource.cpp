ExternalFileLevelStorageSource::ExternalFileLevelStorageSource(Core::FilePathManager*, std::shared_ptr<SaveTransactionManager>)
ExternalFileLevelStorageSource::~ExternalFileLevelStorageSource()
ExternalFileLevelStorageSource::~ExternalFileLevelStorageSource()
ExternalFileLevelStorageSource::createLevelStorage(Scheduler&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, ContentIdentity const&, IContentKeyProvider const&)
ExternalFileLevelStorageSource::deleteLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ExternalFileLevelStorageSource::renameLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ExternalFileLevelStorageSource::renameLevel(LevelData&, Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ExternalFileLevelStorageSource::createBackupCopyOfWorld(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ExternalFileLevelStorageSource::isConvertible(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ExternalFileLevelStorageSource::requiresConversion(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ExternalFileLevelStorageSource::convertLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, ProgressListener*)
ExternalFileLevelStorageSource::isLevelMarkedForSync(Core::Path const&) const
ExternalFileLevelStorageSource::isLevelPartiallyCopied(Core::Path const&) const
ExternalFileLevelStorageSource::getLevelDatFoundPath[abi:cxx11](Core::Path const&) const
ExternalFileLevelStorageSource::getBasePath[abi:cxx11]() const
ExternalFileLevelStorageSource::getName[abi:cxx11]() const
ExternalFileLevelStorageSource::getLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
ExternalFileLevelStorageSource::getLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, LevelData&) const
ExternalFileLevelStorageSource::saveLevelData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, LevelData const&)
ExternalFileLevelStorageSource::getLevelList(std::vector<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >&)
ExternalFileLevelStorageSource::isNewLevelIdAcceptable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ExternalFileLevelStorageSource::getPathToLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
ExternalFileLevelStorageSource::getPathToLevelInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool) const
