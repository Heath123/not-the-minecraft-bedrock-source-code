FileArchiver::FileArchiver(Scheduler&, Core::FilePathManager*, ResourcePackRepository&, std::function<void (std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)>)
FileArchiver::~FileArchiver()
FileArchiver::archivePack(Core::Path const&, Core::Path const&, std::function<void (FileArchiver::Result&)>)
FileArchiver::_clearArchiveState()
FileArchiver::_printResultMessage(FileArchiver::Result const&)
FileArchiver::archiveLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, Core::Path const&, std::function<void (FileArchiver::Result&)>)
FileArchiver::_printStartMessage()
FileArchiver::archiveLevel(Level&, bool, Core::Path const&, std::function<void (FileArchiver::Result&)>)
FileArchiver::_archiveFiles(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, unsigned long)
FileArchiver::_copyPackToTemp(PackInstance const&, Core::Path const&, FileArchiver::Result&)
FileArchiver::_validatePremiumUpgradePacks(Core::Path const&)
FileArchiver::_revertPremiumUpgradePacks(Core::Path const&)
FileArchiver::_printMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
FileArchiver::importLevel(Core::Path const&, std::function<void (FileArchiver::Result&)>, bool)
FileArchiver::_importVanillaLevel(Core::Path const&, std::function<void (FileArchiver::Result&)>, bool)
FileArchiver::generateFilePickerSettings(FileArchiver::ExportType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
FileArchiver::getOperationPercentage() const
FileArchiver::getCurrentState() const
FileArchiver::_hasResourcePacks(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
FileArchiver::_importWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>)
FileArchiver::_sanitizeWorld(Core::Path const&)
FileArchiver::_importLegacyWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>)
