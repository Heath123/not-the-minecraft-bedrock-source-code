Whitelist::Whitelist(std::function<void ()>)
Whitelist::isAllowed(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Whitelist::isIgnoringPlayerLimit(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Whitelist::clear()
Whitelist::getEntries() const
Whitelist::addEntry(WhitelistEntry const&)
Whitelist::removeByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Whitelist::tryUpdateEntries(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Whitelist::serialize(Json::Value&)
Whitelist::deserialize(Json::Value&)
