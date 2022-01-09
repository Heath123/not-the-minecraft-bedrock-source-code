ServerFileChunkUploader::ServerFileChunkUploader(PacketSender&, NetworkIdentifier const&)
ServerFileChunkUploader::~ServerFileChunkUploader()
ServerFileChunkUploader::~ServerFileChunkUploader()
ServerFileChunkUploader::update()
ServerFileChunkUploader::initFileUploader(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, FileInfo const&, int, Json::Value const&, std::function<void (bool)>)
ServerFileChunkUploader::getServerMissingChunks(FileInfo const&, std::function<void (std::vector<FileChunkInfo, std::allocator<FileChunkInfo> >)>) const
ServerFileChunkUploader::_validateFile(FileInfo const&) const
ServerFileChunkUploader::confirmChunkReceived(FileInfo const&, FileChunkInfo const&)
ServerFileChunkUploader::uploadChunk(FileInfo const&, FileChunkInfo const&, std::vector<unsigned char, std::allocator<unsigned char> > const&, std::function<void (bool)>)
ServerFileChunkUploader::canCancelUpload(FileInfo const&) const
ServerFileChunkUploader::cancelUpload(FileInfo const&)
ServerFileChunkUploader::getUploadProgress(FileInfo const&) const
ServerFileChunkUploader::getChunkInfo(FileInfo const&, int) const
