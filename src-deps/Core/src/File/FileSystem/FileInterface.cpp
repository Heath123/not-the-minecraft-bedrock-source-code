getFileType(Core::Path const&, IFileAccess&)
isEncryptedZip(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, IFileAccess&)
FileSystemFileAccess::FileSystemFileAccess(FileSystemMode)
FileSystemFileAccess::~FileSystemFileAccess()
FileSystemFileAccess::~FileSystemFileAccess()
FileSystemFileAccess::fopen(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
FileSystemFileAccess::fclose(void*)
FileSystemFileAccess::fseek(void*, long, int)
FileSystemFileAccess::ftell(void*)
FileSystemFileAccess::getReadInterface() const
FileSystemFileAccess::getWriteInterface()
FileSystemFileAccess::unload()
FileSystemFileAccess::FileSystemFileReadAccess::fread(void*, unsigned long, unsigned long, void*) const
FileSystemFileAccess::FileSystemFileWriteAccess::fwrite(void const*, unsigned long, unsigned long, void*)
MemoryMappedFileAccess::MemoryMappedFileAccess(IFileAccess&, std::unique_ptr<FileAccessTransforms, std::default_delete<FileAccessTransforms> >)
MemoryMappedFileAccess::~MemoryMappedFileAccess()
MemoryMappedFileAccess::~MemoryMappedFileAccess()
MemoryMappedFileAccess::fopen(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
MemoryMappedFileAccess::_requestedOpenIsCompatibleWithOpenStream(MemoryMappedFileAccess::StreamDetails&, bool, bool) const
MemoryMappedFileAccess::_getTransforms() const
MemoryMappedFileAccess::fclose(void*)
MemoryMappedFileAccess::fseek(void*, long, int)
MemoryMappedFileAccess::ftell(void*)
MemoryMappedFileAccess::getReadInterface() const
MemoryMappedFileAccess::getWriteInterface()
MemoryMappedFileAccess::unload()
MemoryMappedFileAccess::MemoryMappedFileReadAccess::MemoryMappedFileReadAccess()
MemoryMappedFileAccess::MemoryMappedFileReadAccess::fread(void*, unsigned long, unsigned long, void*) const
MemoryMappedFileAccess::MemoryMappedFileWriteAccess::MemoryMappedFileWriteAccess()
MemoryMappedFileAccess::MemoryMappedFileWriteAccess::fwrite(void const*, unsigned long, unsigned long, void*)
ZlibFileAccessWrapper::ZlibFileAccessWrapper(IFileAccess*)
ZlibFileAccessWrapper::getZipFunctions() const
