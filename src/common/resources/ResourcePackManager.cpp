ResourcePackManager::ResourcePackManager(std::function<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > ()>, ContentTierManager const&, bool)
ResourcePackManager::~ResourcePackManager()
ResourcePackManager::~ResourcePackManager()
ResourcePackManager::load(ResourceLocation const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
ResourcePackManager::_getResource(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
ResourcePackManager::load(ResourceLocation const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&) const
ResourcePackManager::loadText(ResourceLocation const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
ResourcePackManager::loadAllVersionsOf(ResourceLocation const&) const
ResourcePackManager::loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy&) const
ResourcePackManager::hasTexture(ResourceLocation const&) const
ResourcePackManager::hasResource(ResourceLocation const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&) const
ResourcePackManager::hasResource(ResourceLocation const&) const
ResourcePackManager::isInStreamableLocation(ResourceLocation const&) const
ResourcePackManager::_getPackForResource(Core::Path const&) const
ResourcePackManager::isInStreamableLocation(ResourceLocation const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&) const
ResourcePackManager::getPath[abi:cxx11](ResourceLocation const&) const
ResourcePackManager::getPath(ResourceLocation const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&) const
ResourcePackManager::getPathContainingResource[abi:cxx11](ResourceLocation const&) const
ResourcePackManager::getPathContainingResource(ResourceLocation const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >) const
ResourcePackManager::getPackIndexForResource(ResourceLocation const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&) const
ResourcePackManager::getStackSize() const
ResourcePackManager::findAllTexturesInUse() const
ResourcePackManager::findInPacks(ResourceLocation const&)
ResourcePackManager::setStack(std::unique_ptr<ResourcePackStack, std::default_delete<ResourcePackStack> >, ResourcePackStackType, bool)
ResourcePackManager::_handleComposeStack(bool)
ResourcePackManager::clearStack(ResourcePackStackType, bool)
ResourcePackManager::clearPackReports()
ResourcePackManager::mergePackReports(std::vector<PackReport, std::allocator<PackReport> >&)
ResourcePackManager::getStack(ResourcePackStackType) const
ResourcePackManager::_shouldRebuildStack() const
ResourcePackManager::composeFullStack(ResourcePackStack&, ResourcePackStack const&, ResourcePackStack const&, ResourcePackStack const&) const
ResourcePackManager::_composeFullStack()
ResourcePackManager::_notifyFullStackInvalid()
ResourcePackManager::_calculateMinEngineVersionFromFullStack()
ResourcePackManager::notifyActiveResourcePackChanged()
ResourcePackManager::_updateLanguageSubpacks()
ResourcePackManager::getFullStackMinEngineVersion() const
ResourcePackManager::registerResourcePackListener(ResourcePackListener&)
ResourcePackManager::unRegisterResourcePackListener(ResourcePackListener&)
ResourcePackManager::unRegisterAllResourcePackListener()
ResourcePackManager::notifyLanguageSubpacksChanged()
ResourcePackManager::getResourcesOfGroup(PackInstance const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
ResourcePackManager::_getResourcesOfGroup(PackInstance const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<Core::PathBuffer<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >&) const
ResourcePackManager::getResourcesOfGroup(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
ResourcePackManager::isOnlyBaseGamePacks() const
ResourcePackManager::checkHasExtraLocaleResources(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
ResourcePackManager::onLanguageChanged()
ResourcePackManager::onBaseGamePackDownloadComplete()
ResourcePackManager::handlePendingStackChanges()
ResourcePackManager::forceStackCompose()
ResourcePackManager::copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory&, IContentKeyProvider const&) const
ResourcePackManager::copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory&, IContentKeyProvider const&, std::vector<PackInstance, std::allocator<PackInstance> > const&) const
ResourcePackManager::getPackSourceReport() const
ResourcePackManager::setPackSourceReport(PackSourceReport&&)
ResourcePackManager::getPackSettings(PackIdVersion const&)
ResourcePackManager::ensureSupportedSubpacks()
ResourcePackManager::canSupportPacks()
ResourcePackManager::removeUnsupportedPacks()
ResourcePackManager::getIncompatiblePacks() const
ResourcePackManager::setCanUseGlobalPackStack(bool)
ResourcePackManager::onLoadingFinished()
ResourcePackManager::setExperimentalGameplay(bool)
ResourcePackManager::isExperimentalGameplay() const
ResourcePackManager::getFullStackAccess() const
ResourcePackManager::removePack(ResourcePack*)
ResourcePackManager::hasCapability(gsl::basic_string_span<char const, -1l>) const
