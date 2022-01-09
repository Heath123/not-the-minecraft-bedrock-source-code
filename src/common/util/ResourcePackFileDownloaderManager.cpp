ResourcePackFileDownloaderManager::ResourcePackFileDownloaderManager(TaskGroup&, PacketSender&)
ResourcePackFileDownloaderManager::~ResourcePackFileDownloaderManager()
ResourcePackFileDownloaderManager::~ResourcePackFileDownloaderManager()
ResourcePackFileDownloaderManager::cleanup()
ResourcePackFileDownloaderManager::cancel()
ResourcePackFileDownloaderManager::_completionCallback(bool, Core::Path const&)
ResourcePackFileDownloaderManager::update()
ResourcePackFileDownloaderManager::downloadFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, unsigned int, int, unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, PackType)
ResourcePackFileDownloaderManager::_isInitialized() const
ResourcePackFileDownloaderManager::requestFirstBatch()
ResourcePackFileDownloaderManager::chunkReceived(FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char> > const&)
ResourcePackFileDownloaderManager::_requestChunk(int)
ResourcePackFileDownloaderManager::requestNextChunk()
ResourcePackFileDownloaderManager::getDownloadedBytes() const
ResourcePackFileDownloaderManager::getProgress() const
ResourcePackFileDownloaderManager::addCompletionCallback(std::function<void (bool, Core::Path const&)>)
ResourcePackFileDownloaderManager::addProgressCallback(std::function<void (float)>)
ResourcePackFileDownloaderManager::_confirmChunkReceived(float)
ResourcePackFileDownloaderManager::_unzipContent(Core::Path const&, Core::PathBuffer<Core::StackString<char, 1024ul> >&)
ResourcePackFileDownloaderManager::finalizeAllChunks()