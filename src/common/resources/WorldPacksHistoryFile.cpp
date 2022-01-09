WorldPackHistory::WorldPackHistory()
WorldPackHistory::initializeFromJson(Json::Value const&)
WorldPackHistory::setUnlocalizedName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
WorldPackHistory::addLocalizedName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
WorldPackHistory::getPackIdVersion() const
WorldPackHistory::setPackIdVersion(PackIdVersion const&)
WorldPackHistory::getLocalizedNames[abi:cxx11]() const
WorldPackHistory::getLocalizedName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
WorldPackHistory::setLocalizedNames(std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >)
WorldPackHistory::hasLocalizedNames() const
WorldPackHistory::getUnlocalizedName[abi:cxx11]() const
WorldPackHistory::getCanBeRedownloaded() const
WorldPackHistory::setCanBeRedownloaded(bool)
WorldPackHistory::getSubpackCount() const
WorldPackHistory::setSubpackCount(int)
WorldPackHistory::hasSubpacks() const
WorldPackHistory::getSourceUUID() const
WorldPackHistory::setSourceUUID(mce::UUID const&)
WorldPackHistory::hasSourceUUID() const
WorldPackHistory::toJsonValue() const
WorldPackHistory::operator==(WorldPackHistory const&) const
WorldPacksHistoryFile::WorldPacksHistoryFile()
WorldPacksHistoryFile::initializeFromJson(Json::Value const&)
WorldPacksHistoryFile::getPacks() const
WorldPacksHistoryFile::addPack(WorldPackHistory const&)
WorldPacksHistoryFile::toJsonValue() const
WorldPacksHistoryFile::setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&)
