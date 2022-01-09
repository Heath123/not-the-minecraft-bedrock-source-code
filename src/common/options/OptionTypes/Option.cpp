Option::Option(OptionID, OptionOwnerType, OptionResetFlags, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, OptionType)
Option::~Option()
Option::unregisterObserver(void*)
Option::~Option()
Option::registerTelemetryProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Option::getTelemetryProperty[abi:cxx11]() const
Option::getCaptionId[abi:cxx11]() const
Option::getSaveTag[abi:cxx11]() const
Option::getType() const
Option::getID() const
Option::getOptionOwnerType() const
Option::setOverrideSource(Option*)
Option::registerObserver(void*, std::function<void (Option*)>, std::function<void (Option*, InputMode)>)
Option::hasOverrideSource() const
Option::registerObserver(void*, std::function<void (Option*)>)
Option::registerObserver(void*, std::function<void (Option*, InputMode)>)
Option::getFloat() const
Option::getFloat(InputMode) const
Option::getBool() const
Option::getBool(InputMode) const
Option::getInt() const
Option::getVec3() const
Option::getString[abi:cxx11]() const
Option::getValues() const
Option::getValueNameMap[abi:cxx11]() const
Option::getFloatMax() const
Option::getFloatMin() const
Option::getIntMax() const
Option::getIntMin() const
Option::set(int)
Option::set(InputMode, float)
Option::set(InputMode, bool)
Option::setDefault(bool)
Option::setCoerceValueCallback(std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > (std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)>)
Option::setCoerceValueCallback(std::function<bool (bool)>)
Option::setCoerceSaveValueCallback(std::function<int (int)>)
Option::setRequestSaveCallback(std::function<void (bool)>)
Option::toggle()
Option::reset()
Option::reset(InputMode)
Option::getOptionResetFlags() const
Option::notifyOptionValueChanged(bool)
Option::requestSave()
Option::notifyOptionValueChanged(InputMode, bool)
Option::load(std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >&)
Option::load(Json::Value const&)
Option::isType(OptionType) const
Option::isDefaultValue() const
Option::isDefaultValue(InputMode) const
Option::canModify() const
Option::registerLock(void*, std::function<bool ()>)
Option::unregisterLock(void*)
Option::read(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, float&)
Option::read(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool&)
Option::read(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int&)
Option::read(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, glm::tvec3<float, (glm::precision)0>&)
Option::_updatePropertyVector(std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Option::_setOptionType(OptionType)
operator<<(std::ostream&, glm::tvec3<float, (glm::precision)0> const&)
operator>>(std::istream&, glm::tvec3<float, (glm::precision)0>&)
