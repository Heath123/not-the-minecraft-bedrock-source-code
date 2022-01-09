PackManifest::CapabilityRegistry::getCapabilities[abi:cxx11]()
PackManifest::CapabilityRegistry::_get()
PackManifest::CapabilityRegistry::getTrustedCapabilities[abi:cxx11]()
PackManifest::CapabilityRegistry::registerCapability(gsl::basic_string_span<char const, -1l>, bool)
PackManifest::CapabilityRegistry::CapabilityRegistry()
PackManifest::CapabilityRegisterer::CapabilityRegisterer(std::function<void (PackManifest::CapabilityRegistry&)>)
PackManifest::PackManifest(ManifestType)
PackManifest::~PackManifest()
PackManifest::~PackManifest()
PackManifest::clone() const
PackManifest::getLocation() const
PackManifest::setLocation(ResourceLocation const&)
PackManifest::getDescription[abi:cxx11]() const
PackManifest::getDescriptionRaw[abi:cxx11]() const
PackManifest::setDescription(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
PackManifest::getName[abi:cxx11]() const
PackManifest::getNameRaw[abi:cxx11]() const
PackManifest::getNameForTelemetry[abi:cxx11]() const
PackManifest::setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
PackManifest::isUsingPackNameKeyword() const
PackManifest::isUsingPackDescriptionKeyword() const
PackManifest::getMetaData() const
PackManifest::setMetadata(ResourceMetadata const&)
PackManifest::hasExpired() const
PackManifest::setExpired(bool)
PackManifest::getPackType() const
PackManifest::setPackType(PackType)
PackManifest::hasPlugins() const
PackManifest::setHasPlugins(bool)
PackManifest::hasClientData() const
PackManifest::setHasClientData(bool)
PackManifest::hasEducationMetadata() const
PackManifest::setHasEducationMetadata(bool)
PackManifest::getPackCategory() const
PackManifest::setPackCategory(PackCategory)
PackManifest::addPackCapability(gsl::basic_string_span<char const, -1l>)
PackManifest::hasPackCapability(gsl::basic_string_span<char const, -1l>) const
PackManifest::setPackCapabilitiesTrusted()
PackManifest::getCapabilityTypes[abi:cxx11]()
PackManifest::PackScopeToString[abi:cxx11](PackScope)
PackManifest::StringToPackScope(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
PackManifest::getPackOrigin() const
PackManifest::setPackOrigin(PackOrigin)
PackManifest::getPackSettings() const
PackManifest::setPackSettings(Json::Value const&)
PackManifest::getIdentity() const
PackManifest::setIdentity(PackIdVersion const&)
PackManifest::getMinEngineVersion() const
PackManifest::setMinEngineVersion(SemVersion const&)
PackManifest::getRequiredBaseGameVersion() const
PackManifest::getFormatVersion() const
PackManifest::isPremium() const
PackManifest::setRequiredBaseGameVersion(BaseGameVersion const&)
PackManifest::isHidden() const
PackManifest::setHidden(bool)
PackManifest::isPremiumLocked(IEntitlementManager&) const
PackManifest::isRestrictedPack() const
PackManifest::getManifestOrigin() const
PackManifest::setManifestOrigin(ManifestOrigin const&)
PackManifest::getManifestType() const
PackManifest::setManifestType(ManifestType const&)
PackManifest::getPackIconLocation() const
PackManifest::setPackIconLocation(ResourceLocation const&)
PackManifest::hasModule(PackIdVersion const&) const
PackManifest::hasModuleType(ResourceInformation::ResourceType) const
PackManifest::addModule(ResourceInformation const&)
PackManifest::getModules() const
PackManifest::clearModules()
PackManifest::getDependentPackIdentities() const
PackManifest::addPackDependency(PackIdVersion const&)
PackManifest::clearPackDependencies()
PackManifest::addLegacyModuleDependency(LegacyPackIdVersion const&)
PackManifest::getLegacyModuleDependencies() const
PackManifest::hasLegacyModuleDependencies() const
PackManifest::clearLegacyModuleDependencies()
PackManifest::getPackSize() const
PackManifest::setPackSize(unsigned long)
PackManifest::hasValidUUID() const
PackManifest::setInvalidUUID()
PackManifest::isPlatformLocked() const
PackManifest::setPlatformLocked(bool)
PackManifest::isTitleLocked() const
PackManifest::setTitleLocked(bool)
PackManifest::getOptionLockedState() const
PackManifest::setOptionLockedState(TemplateLockState)
PackManifest::getPackScope() const
PackManifest::setPackScope(PackScope)
PackManifest::serialize(PackManifestFormat, Json::Value&) const
PackManifest::_serializeHeader(Json::Value&) const
PackManifest::_serializeModules(Json::Value&) const
PackManifest::_serializeDependencies(Json::Value&) const
PackManifest::_serializeMeta(Json::Value&) const
PackManifest::_serailizeLegacyModuleDependencies(Json::Value&) const
PackManifest::_serializeVersion(Json::Value&, SemVersion const&) const
PackManifest::getLastModifiedDate[abi:cxx11]() const
PackManifest::setLastModifiedDate(long)
PackManifest::setLastModifiedDate(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
PackManifest::setFormatVersion(PackManifestFormat)
PackManifest::getOriginalFormatVersion() const
PackManifest::setOriginalFormatVersion(PackManifestFormat)
PackManifest::generateBaseIconPath[abi:cxx11]() const
PackManifest::getFileSystemFromOrigin() const
PackManifest::getZipFolderPath[abi:cxx11]() const
PackManifest::generateIconPath[abi:cxx11]() const
PackManifest::getContentIdentity() const
PackManifest::setContentIdentity(ContentIdentity const&)
PackManifest::setLanguageCodesForPackKeywords(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >)
PackManifest::getLanguageCodesForPackKeywords[abi:cxx11]() const
PackManifest::getPackNameLocalization[abi:cxx11]() const
PackManifest::setLocalizedNameKeywords(std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > const&)
PackManifest::setCanBeRedownloaded(bool)
PackManifest::canBeRedownloaded() const
PackManifest::getSourceIdentity() const
PackManifest::setSourceIdentity(ContentIdentity const&)
WorldTemplatePackManifest::WorldTemplatePackManifest()
WorldTemplatePackManifest::WorldTemplatePackManifest(PackManifest&&)
WorldTemplatePackManifest::~WorldTemplatePackManifest()
WorldTemplatePackManifest::~WorldTemplatePackManifest()
WorldTemplatePackManifest::clone() const
WorldTemplatePackManifest::setGameType(GameType)
WorldTemplatePackManifest::getGameType() const
CatalogPackManifest::CatalogPackManifest()
CatalogPackManifest::~CatalogPackManifest()
CatalogPackManifest::~CatalogPackManifest()
CatalogPackManifest::clone() const
CatalogPackManifest::setProductId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)
CatalogPackManifest::getProductId[abi:cxx11]() const
CatalogPackManifest::setMinimumPerformanceRequirements(DlcPerformanceTier)
CatalogPackManifest::getMinimumPerformanceRequirements() const
