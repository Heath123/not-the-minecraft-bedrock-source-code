Pack::Pack(std::unique_ptr<PackManifest, std::default_delete<PackManifest> >, std::unique_ptr<PackAccessStrategy, std::default_delete<PackAccessStrategy> >, std::unique_ptr<SubpackInfoCollection, std::default_delete<SubpackInfoCollection> >, std::unique_ptr<PackMetadata, std::default_delete<PackMetadata> >)
Pack::_loadLocalizationFiles()
Pack::~Pack()
Pack::move(Pack&&)
Pack::getAccessStrategy()
Pack::getManifest() const
Pack::getManifest()
Pack::getManifestPtr() const
Pack::getManifestPtr()
Pack::getMetadata() const
Pack::getMetadata()
Pack::registerPackUpdatedCallback(void*, std::function<void (Pack&)>)
Pack::unregisterPackUpdatedCallback(void*)
Pack::registerPackDeletedCallback(void*, std::function<void (Pack&)>)
Pack::unregisterPackDeletedCallback(void*)
Pack::getAccessStrategy() const
Pack::getSubpackInfoStack() const
Pack::getSubpackInfoStack()
Pack::isCompatiblePack(ContentTierInfo const&) const
Pack::hasSubpacks() const
Pack::notifyUpdated()
Pack::notifyDeleted()
Pack::isSignedProperly()
Pack::_validSignature() const
Pack::isTrusted() const
Pack::generateWorldPackHistoryInfo() const
Pack::createPack(ResourceLocation const&, PackType, PackOrigin, PackManifestFactory&, IContentKeyProvider const&, PackSourceReport*)
Pack::createPackMetadata(PackType, PackManifest&, PackAccessStrategy const&, PackReport&)
