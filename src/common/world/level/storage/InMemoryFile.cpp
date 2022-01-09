InMemoryFile::InMemoryFile(Core::Path const&)
InMemoryFile::~InMemoryFile()
InMemoryFile::getFilename[abi:cxx11]() const
InMemoryFile::rename(Core::Path const&)
InMemoryFile::open(InMemoryAccessMode)
InMemoryFile::close(InMemoryAccessMode)
InMemoryFile::append(leveldb::Slice const&)
InMemoryFile::read(unsigned long, unsigned long, leveldb::Slice*, char*, unsigned long&) const
InMemoryFile::flushToDisk(leveldb::Env*)
InMemoryFile::markForDelete()
InMemoryFile::isSafeToDelete() const
InMemoryFile::isOpenForWrite() const
InMemoryFile::isMarkedForDelete() const
InMemoryFile::isMarkedDirty() const
