EncryptedZipTransforms::EncryptedZipTransforms(IContentKeyProvider const&)
EncryptedZipTransforms::readTransform(std::vector<unsigned char, std::allocator<unsigned char> >&) const
EncryptedZipTransforms::writeTransform(std::vector<unsigned char, std::allocator<unsigned char> >&) const
ZipPackAccessStrategy::ZipPackAccessStrategy(IFileAccess&, ResourceLocation const&, Core::Path const&)
ZipPackAccessStrategy::ZipPackAccessStrategy(ZipPackAccessStrategy const&)
ZipPackAccessStrategy::~ZipPackAccessStrategy()
ZipPackAccessStrategy::~ZipPackAccessStrategy()
ZipPackAccessStrategy::getPackSize() const
ZipPackAccessStrategy::getPackLocation() const
ZipPackAccessStrategy::getPackName[abi:cxx11]() const
ZipPackAccessStrategy::unload()
ZipPackAccessStrategy::readContentIdentity() const
ZipPackAccessStrategy::hasAsset(Core::Path const&, bool) const
ZipPackAccessStrategy::_tryReadFromPendingQueue(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
ZipPackAccessStrategy::hasFolder(Core::Path const&) const
ZipPackAccessStrategy::getAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool) const
ZipPackAccessStrategy::isWritable() const
ZipPackAccessStrategy::isTrusted() const
ZipPackAccessStrategy::writeAsset(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ZipPackAccessStrategy::deleteAsset(Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > const&)
ZipPackAccessStrategy::forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool) const
ZipPackAccessStrategy::getStrategyType() const
ZipPackAccessStrategy::getSubPath[abi:cxx11]() const
ZipPackAccessStrategy::createSubPack(Core::Path const&) const
ZipPackAccessStrategyOwningFileAcccess::ZipPackAccessStrategyOwningFileAcccess(std::shared_ptr<IFileAccess>, ResourceLocation const&, Core::Path const&)
ZipPackAccessStrategyOwningFileAcccess::~ZipPackAccessStrategyOwningFileAcccess()
ZipPackAccessStrategyOwningFileAcccess::~ZipPackAccessStrategyOwningFileAcccess()
