PackError::PackError(PackErrorType, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&)
PackError::getLocErrorMessage[abi:cxx11]() const
PackError::getErrorValue() const
PackError::getErrorParameters[abi:cxx11]() const
PackError::getEventErrorMessage[abi:cxx11]() const
PackError::serialize(Json::Value&)
PackError::deserialize(Json::Value const&)
PackError::getPackErrorType() const
PackReport::PackReport()
PackReport::merge(PackReport&&)
PackReport::wasUpgraded() const
PackReport::attemptedUpgrade() const
PackReport::hasErrors() const
PackReport::hasErrors(PackErrorType)
PackReport::hasWarnings() const
PackReport::setUpgraded(bool)
PackReport::getLocation() const
PackReport::setLocation(ResourceLocation const&)
PackReport::getErrors() const
PackReport::getWarnings() const
PackReport::getNumErrors() const
PackReport::getNumWarnings() const
PackReport::setUpgradeSuccess()
PackReport::setAttemptedUpgrade()
PackReport::getIdentity() const
PackReport::setIdentity(PackIdVersion const&)
PackReport::setOriginalIdentity(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
PackReport::getOriginalName[abi:cxx11]() const
PackReport::getOriginalVersion[abi:cxx11]() const
PackReport::getPackType() const
PackReport::setPackType(PackType)
PackReport::serializeEventErrorMessages[abi:cxx11]() const
PackReport::serialize(Json::Value&)
PackReport::deserialize(Json::Value const&)
PackReport::clear()
