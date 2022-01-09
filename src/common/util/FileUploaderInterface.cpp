FileChunkInfo::FileChunkInfo(int, unsigned long, unsigned long)
FileChunkInfo::operator<(FileChunkInfo const&) const
FileChunkInfo::operator==(FileChunkInfo const&) const
FileChunkInfo::size() const
FileChunkInfo::containsByte(int) const
FileChunkInfo::isValid() const
FileChunkManager::FileChunkManager()
FileChunkManager::FileChunkManager(unsigned long, unsigned int)
FileChunkManager::_generateChunkInfo()
FileChunkManager::reset()
FileChunkManager::reset(unsigned long, unsigned int)
FileChunkManager::reset(unsigned long)
FileChunkManager::queueReceivedChunk(FileChunk&&)
FileChunkManager::getAndIncrementNextChunk()
FileChunkManager::getTotalNumberOfChunks()
FileChunkManager::receivedAllChunks() const
FileChunkManager::writtenAllChunks() const
FileChunkManager::requestedAllChunks() const
FileChunkManager::dequeueChunk()
FileChunkManager::canWriteChunk() const
FileChunkManager::getChunks() const
FileChunkManager::getDownloadedBytes() const
FileChunkManager::getProgress() const
FileChunkManager::getChunkInfo(int) const
IFileChunkUploader::IFileChunkUploader()
IFileChunkUploader::~IFileChunkUploader()
IFileChunkUploader::~IFileChunkUploader()
IFileChunkUploader::update()
IFileChunkUploader::getServerMissingChunks(FileInfo const&, std::function<void (std::vector<FileChunkInfo, std::allocator<FileChunkInfo> >)>) const
IFileChunkUploader::confirmChunkReceived(FileInfo const&, FileChunkInfo const&)
IFileChunkUploader::uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char> > const&, std::function<void (bool)>)
IFileChunkUploader::uploadStream(FileInfo const&, unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::function<bool (unsigned long&, std::vector<unsigned char, std::allocator<unsigned char> >&)>, std::function<void (IFileChunkUploader::UploadStreamResult)>)
IFileChunkUploader::getChunkInfo(FileInfo const&, int) const
