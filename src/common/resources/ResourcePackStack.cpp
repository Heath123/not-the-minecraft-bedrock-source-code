PackInstance::PackInstance(ResourcePack*, int, bool, PackSettings*)
PackInstance::PackInstance(PackInstance const&, bool, PackSettings*)
PackInstance::PackInstance(ResourcePack*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, PackSettings*)
PackInstance::operator==(PackInstance const&) const
PackInstance::operator==(ResourcePack const&) const
PackInstance::operator==(ResourcePack const*) const
PackInstance::getPackId() const
PackInstance::getVersion() const
PackInstance::getResource(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
PackInstance::hasResource(Core::Path const&) const
PackInstance::hasExtraResourcesForLocale(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
PackInstance::setLocale(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
PackInstance::getManifest() const
PackInstance::getPackSettings()
PackInstance::getPackSettings() const
PackInstance::hasIcon(PackIconType) const
PackInstance::getIconPath[abi:cxx11](PackIconType) const
PackInstance::getIconFileSytem() const
PackInstance::getIconZipPath[abi:cxx11]() const
PackInstance::isBaseGamePack() const
PackInstance::isSlicePack() const
PackInstance::isType(PackType) const
PackInstance::isTrusted() const
PackInstance::getResourceLocation() const
PackInstance::getFolderName[abi:cxx11]() const
PackInstance::isZipped() const
PackInstance::areKnownFilesValid() const
PackInstance::getPackCategory() const
PackInstance::getPackOrigin() const
PackInstance::forEachIn(Core::Path const&, std::function<void (Core::Path const&)>, bool) const
PackInstance::setError()
PackInstance::getSubpackName[abi:cxx11]() const
PackInstance::getSubpackFolderName[abi:cxx11]() const
PackInstance::getTexturesList() const
PackInstance::isCompatibleSubpack(ContentTierInfo const&) const
PackInstance::isCompatiblePack(ContentTierInfo const&) const
PackInstance::setToDefaultSubpack(ContentTierInfo const&)
PackInstance::getTierInfo() const
PackInstance::getLoadTime() const
PackInstance::onLoadingFinished()
PackInstance::generateAssetSet()
PackInstance::generateWorldPackHistoryInfo() const
PackInstance::getPackStats()
PackInstance::getPackStats() const
ResourcePackStack::ResourcePackStack(std::vector<PackInstance, std::allocator<PackInstance> > const&, ResourcePackRepository const&)
ResourcePackStack::_hasOneRestrictedPackAndNoUnrestrictedPacks(unsigned long, PackManifest const&)
ResourcePackStack::add(PackInstance, ResourcePackRepository const&, bool)
ResourcePackStack::_setLoadingReport(ResourcePackRepository const&)
ResourcePackStack::ResourcePackStack(std::vector<PackInstanceId, std::allocator<PackInstanceId> > const&, ResourcePackRepository const&, bool)
ResourcePackStack::ResourcePackStack(std::vector<ResourcePack*, std::allocator<ResourcePack*> > const&, ResourcePackRepository const&)
ResourcePackStack::~ResourcePackStack()
ResourcePackStack::~ResourcePackStack()
ResourcePackStack::_populateDependencies(std::vector<PackInstance, std::allocator<PackInstance> >&, PackInstance&, ResourcePackRepository const&, bool)
ResourcePackStack::deserialize(std::istream&, ResourcePackRepository const&)
ResourcePackStack::serialize(std::ostream&) const
ResourcePackStack::loadAllVersionsOf(ResourceLocation const&) const
ResourcePackStack::loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy&) const
ResourcePackStack::getSplitStacks(ResourcePackStack&, ResourcePackStack&) const
ResourcePackStack::getStackAsIdentities() const
ResourcePackStack::hasPlatformLockedContent() const
ResourcePackStack::hasRestrictedContent() const
ResourcePackStack::isOnStack(PackIdVersion const&) const
ResourcePackStack::getLoadingReport() const
ResourcePackStack::clearPackReports()
ResourcePackStack::mergePackReports(std::vector<PackReport, std::allocator<PackReport> >&)
ResourcePackStack::removeDuplicates()
ResourcePackStack::removeIf(std::function<bool (PackInstance const&)> const&)
ResourcePackStack::ensureSupportedSubpacks(ContentTierInfo const&)
ResourcePackStack::hasCapabilityInStack(gsl::basic_string_span<char const, -1l>) const
ResourcePackStack::generateAssetSet()
ResourcePackStack::canSupportPacks(ContentTierInfo const&) const
ResourcePackStack::removeUnsupportedPacks(ContentTierInfo const&)
ResourcePackStack::removeInvalidPacks()
ResourcePackStack::onLoadingFinished()
