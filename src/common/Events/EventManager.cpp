Social::Events::EventManager::EventManager()
Social::Events::EventManager::setupCommonProperties()
Social::Events::EventManager::addListener(std::unique_ptr<Social::Events::IEventListener, std::default_delete<Social::Events::IEventListener> >)
Social::Events::EventManager::recordEvent(Social::Events::Event&)
Social::Events::EventManager::tick()
Social::Events::EventManager::sendEvents(bool)
Social::Events::EventManager::stopDebugEventLoggingForAllListeners()
Social::Events::EventManager::setAcceptNewEvents(bool)
Social::Events::EventManager::getCommonProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Social::Events::EventManager::removeCommonProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Social::Events::EventManager::getGlobalProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Social::Events::EventManager::removeGlobalProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Social::Events::EventManager::getPlayerCommonProperty(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Social::Events::EventManager::removePlayerCommonProperty(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Social::Events::EventManager::removePlayerCommonPropertyForAllPlayers(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Social::Events::EventManager::getPlayerGlobalProperty(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Social::Events::EventManager::removePlayerGlobalProperty(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Social::Events::EventManager::buildCommonProperties(std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, Social::Events::Property, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, Social::Events::Property> > >&, unsigned int) const
Social::Events::EventManager::buildCommonProperties[abi:cxx11](unsigned int) const
Social::Events::EventManager::hasListeners(int)
Social::Events::EventManager::getNextSequenceNumber()
