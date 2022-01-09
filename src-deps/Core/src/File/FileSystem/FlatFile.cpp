Core::FlatFile::FlatFile(Core::FileSystemImpl*, Core::FileOpenMode, std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl> >, Core::Path const&, unsigned long, unsigned long)
Core::FlatFile::~FlatFile()
Core::FlatFile::~FlatFile()
Core::FlatFile::_getPath[abi:cxx11]() const
Core::FlatFile::_getBlockSize() const
Core::FlatFile::_isOpen()
Core::FlatFile::_close()
Core::FlatFile::_read(void*, unsigned long, unsigned long*)
Core::FlatFile::_readExactly(void*, unsigned long)
Core::FlatFile::_skip(unsigned long)
Core::FlatFile::_readAtPosition(unsigned long, void*, unsigned long, unsigned long*)
Core::FlatFile::_getPosition(unsigned long*)
Core::FlatFile::_setPosition(unsigned long)
Core::FlatFile::_write(void const*, unsigned long)
Core::FlatFile::_flush()
Core::FlatFile::_getSize(unsigned long*)
Core::FlatFile::_getRemainingSize(unsigned long*)
