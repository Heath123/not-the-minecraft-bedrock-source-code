DateManager::isLeapYear(unsigned int)
DateManager::getNumDaysInYear(unsigned int)
DateManager::getNumDaysInMonth(unsigned int, unsigned int)
DateManager::isValidEpochDate(unsigned int, unsigned int, unsigned int)
DateManager::isValidTime(unsigned int, unsigned int, unsigned int)
DateManager::isValidTimeZone(int, int)
DateManager::_getNumDaysSinceJanuary(unsigned int, unsigned int)
DateManager::_getNumDaysSince1970(unsigned int)
DateManager::_mktime_gm(tm const*)
ScheduledCallback::ScheduledCallback(long, std::weak_ptr<bool>, std::function<void ()>)
ScheduledCallback::~ScheduledCallback()
DateManager::DateManager()
DateManager::reset()
DateManager::~DateManager()
DateManager::setTime(long)
DateManager::setTimeScale(unsigned int)
DateManager::tick()
DateManager::_sendScheduledCallbacks()
DateManager::getTime() const
DateManager::getDateTime(DateManager::TimeZoneType) const
DateManager::toDateTime(long, DateManager::TimeZoneType)
DateManager::getRealTime()
DateManager::getRealDateTime(DateManager::TimeZoneType)
DateManager::getTimeScale() const
DateManager::clear(tm*)
DateManager::toDateTime(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
DateManager::toDateTime(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, tm*, DateManager::TimeZoneType*, int*)
DateManager::toEpochTime(tm*, DateManager::TimeZoneType)
DateManager::toEpochTime(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, long*, DateManager::TimeZoneType*, int*)
DateManager::_parseDate(char const*, unsigned long, unsigned int*, unsigned int*, unsigned int*)
DateManager::_matchPattern(char const*, char const*)
DateManager::_parseTime(char const*, unsigned long, unsigned int*, unsigned int*, unsigned int*)
DateManager::_parseTimeZone(char const*, unsigned long, DateManager::TimeZoneType*, int*, int*)
DateManager::toEpochTime(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
DateManager::toString(tm const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
DateManager::toString_DateTime[abi:cxx11](tm const&, DateManager::TimeZoneType)
DateManager::toString_Date[abi:cxx11](tm const&)
DateManager::toString_TruncateToHourUTC[abi:cxx11](tm const&)
DateManager::getCurrentTimestampFileName[abi:cxx11]()
DateManager::toString(long const&, DateManager::TimeZoneType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
DateManager::toString_DateTime[abi:cxx11](long const&, DateManager::TimeZoneType)
DateManager::toString_Date[abi:cxx11](long const&, DateManager::TimeZoneType)
DateManager::toString(DateManager::TimeZoneType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
DateManager::toString_DateTime[abi:cxx11](DateManager::TimeZoneType) const
DateManager::toString_Date[abi:cxx11](DateManager::TimeZoneType) const
DateManager::isInPast(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
DateManager::isBetweenDates(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
DateManager::registerScheduledCallback(ScheduledCallback) const