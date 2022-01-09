FileUploadManager::MultiPartStreamHelper::MultiPartStreamHelper()
FileUploadManager::FileUploadManager(TaskGroup&, std::shared_ptr<IFileChunkUploader>)
FileUploadManager::FileUploadManager(TaskGroup&, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>)
FileUploadManager::~FileUploadManager()
FileUploadManager::~FileUploadManager()
FileUploadManager::update()
FileUploadManager::uploadArchivedFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Core::Path const&)
FileUploadManager::uploadFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Core::Path const&, bool, Json::Value const&)
FileUploadManager::uploadChunk(int)
FileUploadManager::_uploadChunk(FileChunkInfo const&)
FileUploadManager::uploadChunk(FileChunkInfo)
FileUploadManager::uploadStream()
FileUploadManager::_uploadStream()
FileUploadManager::canCancelUpload() const
FileUploadManager::cancelUpload()
FileUploadManager::getUploadState() const
FileUploadManager::getError() const
FileUploadManager::getUploadProgress() const
FileUploadManager::getFileSize() const
FileUploadManager::setUploadAllAtOnce(bool)
FileUploadManager::setContinueOnReception(bool)
FileUploadManager::setUseStream(bool)
FileUploadManager::addCallbackQueue(std::function<void ()>)
FileUploadManager::setFailed()
FileUploadManager::_resumeUpload()
FileUploadManager::_generateMultiPartHelper()
