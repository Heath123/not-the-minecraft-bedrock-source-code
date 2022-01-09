WorldTemplateManager::WorldTemplateManager(PackManifestFactory&, IContentKeyProvider const&, PackSourceFactory&, Core::FilePathManager const&, bool)
WorldTemplateManager::_initialize()
WorldTemplateManager::_initializePackSources()
WorldTemplateManager::_getWorldTemplatesPath[abi:cxx11]() const
WorldTemplateManager::_onStorageDirectoryChanged()
WorldTemplateManager::~WorldTemplateManager()
WorldTemplateManager::populateWorldTemplates()
WorldTemplateManager::sortWorldTemplates()
WorldTemplateManager::onStorageDirectoryChanged()
WorldTemplateManager::isInitialized()
WorldTemplateManager::addKnownPackFromImport(Pack const&)
WorldTemplateManager::_onDiscoverWorldTemplate(Pack const&)
WorldTemplateManager::getWorldTemplateAtIndex(int) const
WorldTemplateManager::_isValidWorld(int) const
WorldTemplateManager::getLocalPremiumPackIds() const
WorldTemplateManager::findWorldTemplateAtIndex(int)
WorldTemplateManager::findInstalledWorldTemplateByUUID(std::vector<mce::UUID, std::allocator<mce::UUID> > const&) const
WorldTemplateManager::findInstalledWorldTemplateByPackUUIDNonConst(std::vector<mce::UUID, std::allocator<mce::UUID> > const&) const
WorldTemplateManager::findInstalledWorldTemplate(PackIdVersion const&) const
WorldTemplateManager::getWorldTemplateSize() const
WorldTemplateManager::isWorldTemplateInstalled(mce::UUID const&) const
WorldTemplateManager::deleteWorldTemplate(PackIdVersion const&)
WorldTemplateManager::deleteWorldTemplateFiles(PackIdVersion const&)
WorldTemplateManager::postDeleteWorldTemplate(PackIdVersion const&)
WorldTemplateManager::_deleteWorldTemplate(PackIdVersion const&, std::function<bool (Core::Path const&)>)
WorldTemplateManager::getProxy()
WorldTemplateManager::setSortMethod(std::function<bool (std::unique_ptr<WorldTemplateInfo, std::default_delete<WorldTemplateInfo> > const&, std::unique_ptr<WorldTemplateInfo, std::default_delete<WorldTemplateInfo> > const&)>)
