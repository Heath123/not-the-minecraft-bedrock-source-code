BiomeRegistry::BiomeRegistry()
BiomeRegistry::_initTagRegistry()
BiomeRegistry::~BiomeRegistry()
BiomeRegistry::~BiomeRegistry()
BiomeRegistry::getTagRegistry()
BiomeRegistry::getTagRegistry() const
BiomeRegistry::registerBiome(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BiomeRegistry::_allocateBiomeId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BiomeRegistry::_register(std::unique_ptr<Biome, std::default_delete<Biome> >&&)
BiomeRegistry::forEachBiome(std::function<void (Biome&)>) const
BiomeRegistry::lookupById(int) const
BiomeRegistry::lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
BiomeRegistry::initServerFromPacks(ResourcePackManager&, IWorldRegistriesProvider&)
BiomeRegistry::_buildInheritanceTree(ResourcePackManager&)
BiomeRegistry::_initServerFromInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent>&, IWorldRegistriesProvider&)
BiomeRegistry::initClientFromPacks(ResourcePackManager&)
BiomeRegistry::registrationFinished()
BiomeRegistry::isRegistrationFinished() const
BiomeRegistry::getEntityRegistry()
BiomeRegistry::_loadSingleBiome(ResourcePackManager&, InheritanceTree<BiomeRegistry::BiomeParent>&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
BiomeRegistry::_mergeDataInheritance(Json::Value&, InheritanceTree<BiomeRegistry::BiomeParent>&, BiomeRegistry::BiomeParent const&)
BiomeRegistry::_addToInheritanceTree(InheritanceTree<BiomeRegistry::BiomeParent>&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Json::Value&&)
