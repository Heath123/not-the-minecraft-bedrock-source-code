InvalidPacksFilterGroup::InvalidPacksFilterGroup()
InvalidPacksFilterGroup::addFilter(PackType)
ResourcePackRepository::ResourcePackRepository(IMinecraftEventing&, PackManifestFactory&, IContentAccessibilityProvider&, Core::FilePathManager*, PackSourceFactory&, bool)
ResourcePackRepository::_initializePackSource()
ResourcePackRepository::_initialize()
ResourcePackRepository::getTreatmentPacksPath[abi:cxx11]() const
ResourcePackRepository::getPremiumWorldTemplatePath[abi:cxx11]()
ResourcePackRepository::getPremiumBehaviorPackPath[abi:cxx11]()
ResourcePackRepository::getPremiumResourcePackPath[abi:cxx11]()
ResourcePackRepository::getBehaviorPacksPath[abi:cxx11]() const
ResourcePackRepository::getResourcePacksPath[abi:cxx11]() const
ResourcePackRepository::_loadPacks(bool)
ResourcePackRepository::_findVanillaPacks()
ResourcePackRepository::getPremiumPackPath[abi:cxx11]()
ResourcePackRepository::getDevelopmentResourcePacksPath[abi:cxx11]() const
ResourcePackRepository::getDevelopmentBehaviorPacksPath[abi:cxx11]() const
ResourcePackRepository::getDevelopmentSkinPacksPath[abi:cxx11]() const
ResourcePackRepository::_reloadUserPacks()
ResourcePackRepository::_refreshPacks()
ResourcePackRepository::addInvalidPack(ResourceLocation const&, PackType)
ResourcePackRepository::KnownPackContainer::hasPack(ResourcePackRepository::KnownPackInfo const&) const
ResourcePackRepository::KnownPackContainer::addPack(ResourcePackRepository::KnownPackInfo&&)
ResourcePackRepository::_validateDependencies()
ResourcePackRepository::KnownPackContainer::operator!=(ResourcePackRepository::KnownPackContainer const&) const
ResourcePackRepository::_updateKnownUserPacks(ResourcePackRepository::KnownPackContainer&, KnownPackType)
ResourcePackRepository::_initializeCachedPackSource()
ResourcePackRepository::getTemporaryPremiumResourcePacksPath[abi:cxx11]()
ResourcePackRepository::getTemporaryPremiumBehaviorPacksPath[abi:cxx11]()
ResourcePackRepository::getCachedResourcePacksPath[abi:cxx11]()
ResourcePackRepository::getCachedBehaviorPacksPath[abi:cxx11]()
ResourcePackRepository::_initializeWorldPackSource()
ResourcePackRepository::_initializePremiumWorldTemplatePackSource()
ResourcePackRepository::getResourcePackForPackId(PackIdVersion const&) const
ResourcePackRepository::_triggerRemoveResourcePackCallback(ResourcePack*)
ResourcePackRepository::~ResourcePackRepository()
ResourcePackRepository::_addResourcePackIfNotAlreadyAdded(Pack&)
ResourcePackRepository::_packExists(mce::UUID const&, SemVersion const&, PackOrigin) const
ResourcePackRepository::getResourcePackInPath(Core::Path const&) const
ResourcePackRepository::isResourcePackLoaded(PackIdVersion const&, PackOrigin const&)
ResourcePackRepository::getPackLoadingReport() const
ResourcePackRepository::getResourcePacksByPackId(std::vector<PackInstanceId, std::allocator<PackInstanceId> > const&, std::vector<PackInstance, std::allocator<PackInstance> >&) const
ResourcePackRepository::getPackSettingsFactory() const
ResourcePackRepository::getResourcePackByUUID(mce::UUID const&) const
ResourcePackRepository::getResourcePackForPackIdOwned(PackIdVersion const&) const
ResourcePackRepository::getResourcePackSatisfiesPackId(PackIdVersion const&, bool) const
ResourcePackRepository::getResourcePackContainingModule(PackIdVersion const&) const
ResourcePackRepository::addCachedResourcePacks(std::unordered_map<ContentIdentity, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > const*)
ResourcePackRepository::refreshPacks()
ResourcePackRepository::addWorldResourcePacks(Core::Path const&)
ResourcePackRepository::addPremiumWorldTemplateResourcePacks(Core::Path const&, ContentIdentity const&)
ResourcePackRepository::removePacksLoadedFromCache()
ResourcePackRepository::removePacksLoadedFromWorld()
ResourcePackRepository::getGlobalResourcePacksPath[abi:cxx11]()
ResourcePackRepository::getSkinPacksPath[abi:cxx11]() const
ResourcePackRepository::getKnownPacksPath[abi:cxx11](KnownPackType) const
ResourcePackRepository::getKnownValidPacksPath[abi:cxx11]() const
ResourcePackRepository::getKnownInvalidPacksPath[abi:cxx11]() const
ResourcePackRepository::_loadLastKnownUserPacks(ResourcePackRepository::KnownPackContainer&, KnownPackType)
ResourcePackRepository::_detectKnownPacksChange(ResourcePackRepository::KnownPackContainer&, ResourcePackRepository::KnownPackContainer const&, KnownPackType)
ResourcePackRepository::_saveKnownUserPacks(ResourcePackRepository::KnownPackContainer&, KnownPackType)
ResourcePackRepository::_packLogVersionIsUpToDate(Json::Value const&)
ResourcePackRepository::_updatePackLogVersion(ResourcePackRepository::KnownPackContainer&, KnownPackType)
ResourcePackRepository::KnownPackContainer::getPacks()
ResourcePackRepository::KnownPackContainer::getPacks() const
ResourcePackRepository::KnownPackContainer::getPack(PackIdVersion const&)
ResourcePackRepository::KnownPackContainer::getPack(ResourceLocation const&)
ResourcePackRepository::KnownPackContainer::addPack(ResourcePackRepository::KnownPackInfo const&)
ResourcePackRepository::KnownPackContainer::getPack(PackIdVersion const&) const
ResourcePackRepository::KnownPackContainer::getPack(ResourceLocation const&) const
ResourcePackRepository::getPacksByResourceLocation(PackOrigin) const
ResourcePackRepository::getPacksByType(PackType) const
ResourcePackRepository::addKnownPackFromImport(PackManifest const&)
ResourcePackRepository::getInvalidPacks(PackType) const
ResourcePackRepository::getInvalidPacks(InvalidPacksFilterGroup const&) const
ResourcePackRepository::deletePack(ResourceLocation const&)
ResourcePackRepository::deletePackFiles(ResourceLocation const&)
ResourcePackRepository::postDeletePack(ResourceLocation const&)
ResourcePackRepository::untrackInvalidPack(ResourceLocation const&)
ResourcePackRepository::_removePack(ResourceLocation const&, bool)
ResourcePackRepository::isInitialized()
ResourcePackRepository::registerResourcePackRemovedCallback(void*, std::function<void (ResourcePack*)>)
ResourcePackRepository::unregisterResourcePackRemovedCallback(void*)
ResourcePackRepository::requestReloadUserPacks()
ResourcePackRepository::getKeyProvider() const
ResourcePackRepository::getPackManifestFactory()
ResourcePackRepository::getPackSourceFactory()
ResourcePackRepository::getExpectedFileExtensions[abi:cxx11]()
ResourcePackRepository::KnownPackInfo::operator==(ResourcePackRepository::KnownPackInfo const&) const
ResourcePackRepository::KnownPackInfo::operator!=(ResourcePackRepository::KnownPackInfo const&) const
ResourcePackRepository::KnownPackContainer::operator==(ResourcePackRepository::KnownPackContainer const&) const
