Core::FlatFileManifestInfo::FlatFileManifestInfo()
Core::FlatFileManifestInfo::setPath(Core::Path const&)
Core::FlatFileManifestInfo::getPath[abi:cxx11]() const
Core::FlatFileManifestInfo::setSeekPos(unsigned long)
Core::FlatFileManifestInfo::getSeekPos() const
Core::FlatFileManifestInfo::setFileSize(unsigned long)
Core::FlatFileManifestInfo::getFileSize() const
Core::FlatFileManifestInfo::setFlags(unsigned char)
Core::FlatFileManifestInfo::getFlags() const
Core::FlatFileManifestInfo::getFileType() const
Core::FlatFileManifestInfo::isFile() const
Core::FlatFileManifestInfo::setFileType(Core::FileType)
Core::FlatFileManifestInfo::isDirectory() const
Core::FlatFileManifestInfo::isDeleted() const
Core::FlatFileManifestInfo::setDeleted(bool)
Core::FlatFileManifestInfo::setAttributes(Core::FileType, bool)
Core::FlatFileManifestInfo::readFromStream(ReadOnlyBinaryStream&)
Core::FlatFileManifestInfo::writeToStream(BinaryStream&) const
Core::FlatFileManifestInfo::operator==(Core::FlatFileManifestInfo const&) const
Core::FlatFileOperations::createFlatFile(Core::FileSystemImpl*, Core::Path const&, Core::FileSystemImpl*, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath> > const&, bool)
Core::FlatFileOperations::createFlatFileManifest(Core::FileSystemImpl&, Core::Path const&, std::vector<Core::FlatFileManifestInfo, std::allocator<Core::FlatFileManifestInfo> > const&)
Core::FlatFileOperations::copyFlatFile(Core::FileSystemImpl*, Core::Path const&, Core::FileSystemImpl*, Core::Path const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath> > const&, std::vector<Core::ExcludedPath, std::allocator<Core::ExcludedPath> > const&)
Core::FlatFileOperations::transferFlatFileDirectory(Core::FileSystemImpl*, Core::Path const&, Core::FileSystemImpl*, Core::Path const&)
Core::FlatFileOperations::replaceFlatFileManifest(Core::FileSystemImpl&, Core::Path const&, std::vector<Core::FlatFileManifestInfo, std::allocator<Core::FlatFileManifestInfo> > const&, bool)
