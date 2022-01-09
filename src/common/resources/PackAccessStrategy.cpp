PackAccessStrategy::PackAccessStrategy()
PackAccessStrategy::getSubPath[abi:cxx11]() const
PackAccessStrategy::generateAssetSet()
PackAccessStrategy::canRecurse() const
PackAccessStrategy::hasGeneratedAssetSet() const
PackAccessStrategy::hasUpgradeFiles() const
PackAccessStrategy::readContentIdentity() const
PackAccessStrategy::_isInAssetSet(Core::Path const&) const
PackAccessStrategy::_deleteFromAssetSet(Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > const&)
PackAccessStrategy::_addToAssetSet(Core::Path const&)
PackAccessStrategy::isAssetSetEmpty() const
PackAccessStrategy::forEachInAssetSet(Core::Path const&, std::function<void (Core::Path const&)>) const
PackAccessStrategyFactory::create(ResourceLocation&, IContentKeyProvider const&, PackReport&, bool)
PackAccessStrategyFactory::createForZip(ResourceLocation const&, bool)
PackAccessStrategyFactory::createForDirectoryWithEncryptedBlob(ResourceLocation const&, ResourceLocation const&, IContentKeyProvider const&)
PackAccessStrategyFactory::createForEncrypted(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool)
PackAccessStrategyFactory::createForDirectory(ResourceLocation const&, bool)
PackAccessStrategyFactory::createForEncryptedZip(ResourceLocation const&, IContentKeyProvider const&)
