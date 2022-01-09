ResourcePack::ResourcePack(Pack&)
ResourcePack::_generateIconPath()
ResourcePack::_createSubpacks()
ResourcePack::~ResourcePack()
ResourcePack::getPackId() const
ResourcePack::getVersion() const
ResourcePack::isBaseGamePack() const
ResourcePack::isSlicePack() const
ResourcePack::getPack() const
ResourcePack::isType(PackType) const
ResourcePack::isTrusted() const
ResourcePack::getResource(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, int) const
ResourcePack::_isValidSubpackIndex(int) const
ResourcePack::hasResource(Core::Path const&, int) const
ResourcePack::hasCapability(gsl::basic_string_span<char const, -1l>) const
ResourcePack::setLocale(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ResourcePack::hasExtraResourcesForLocale(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int) const
ResourcePack::isZipped() const
ResourcePack::getPackCategory() const
ResourcePack::getPackOrigin() const
ResourcePack::getResourceLocation() const
ResourcePack::getFolderName[abi:cxx11]() const
ResourcePack::isHidden() const
ResourcePack::getManifest() const
ResourcePack::getPackMetadata() const
ResourcePack::areKnownFilesValid()
ResourcePack::forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, int, bool) const
ResourcePack::generateAssetSet()
ResourcePack::unregisterDeleteCallback(void*)
ResourcePack::generateWorldPackHistoryInfo() const
ResourcePack::_createSubpack(SubpackInfo const&)
ResourcePack::setError()
ResourcePack::hasError() const
ResourcePack::hasIcon(PackIconType) const
ResourcePack::getIconPath[abi:cxx11](PackIconType) const
ResourcePack::getIconFileSytem() const
ResourcePack::getIconZipPath[abi:cxx11]() const
ResourcePack::gatherResourcePackTelemetry() const
ResourcePack::_gatherResourcePackTelemetry(ResourcePackContents&) const
ResourcePack::gatherBehaviorPackTelemetry() const
ResourcePack::_gatherBehaviorPackTelemetry(BehaviorPackContents&) const
ResourcePack::generateTextureList()
ResourcePack::getTexturesList(int) const
ResourcePack::getSubpackIndex(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
ResourcePack::getSubpackName[abi:cxx11](int) const
ResourcePack::getSubpackFolderName[abi:cxx11](int) const
ResourcePack::getSubpackCount() const
ResourcePack::getSubpackInfoStack() const
ResourcePack::setLoadTime(double)
ResourcePack::getLoadTime() const
ResourcePack::onLoadingFinished()
ResourcePack::setAsBaseGamePack()
ResourcePack::setAsSlicePack()
