PackSettingObserver::PackSettingObserver(void*, std::function<void (Json::Value const&)> const&)
PackSetting::get() const
PackSetting::set(Json::Value const&)
PackSetting::registerObserver(void*, std::function<void (Json::Value const&)> const&)
PackSetting::unregisterObserver(void*)
PackSetting::_setJsonValue(Json::Value&)
PackSettings::getSetting(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
PackSettings::setSetting(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Json::Value const&)
PackSettings::loadPackSettings(PackIdVersion const&, Json::Value const&)
PackSettings::_initPackSetting(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Json::Value const&)
PackSettings::savePackSettings(PackIdVersion const&)
PackSettings::registerObserver(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, void*, std::function<void (Json::Value const&)> const&)
PackSettings::unregisterObserver(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, void*)
PackSettings::unregisterObserver(void*)
PackSettings::getAllSettings() const
