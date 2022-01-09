WorldTemplateInfo::WorldTemplateInfo(WorldTemplatePackManifest const&)
WorldTemplateInfo::~WorldTemplateInfo()
WorldTemplateInfo::getWorldName[abi:cxx11]() const
WorldTemplateInfo::getDescription[abi:cxx11]() const
WorldTemplateInfo::getAuthors[abi:cxx11]() const
WorldTemplateInfo::getVersion[abi:cxx11]() const
WorldTemplateInfo::getWorldPath[abi:cxx11]() const
WorldTemplateInfo::getPackManifest() const
WorldTemplateInfo::isPremium() const
WorldTemplateInfo::isVirtualCatalogItem() const
WorldTemplateInfo::isPremiumLocked(IEntitlementManager&) const
WorldTemplateInfo::getGameType[abi:cxx11]() const
WorldTemplateInfo::getWorldIconPath[abi:cxx11]() const
WorldTemplateInfo::getWorldSize() const
WorldTemplateInfo::setWorldIconOverride(Core::Path const&)
WorldTemplateInfo::isWorldIconOverridden() const
WorldTemplateInfo::addWorldTemplatePackSource(WorldTemplatePackSource&)
WorldTemplateInfo::forEachPackInPackSources(std::function<void (Pack const&)>) const
WorldTemplateInfo::loadPacks(PackManifestFactory&, IContentKeyProvider const&)
