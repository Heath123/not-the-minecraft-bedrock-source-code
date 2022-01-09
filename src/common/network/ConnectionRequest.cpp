ConnectionRequest::create(PrivateKeyManager&, Certificate const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, mce::Image const&, mce::Image const&, SerializedSkin const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, InputMode, int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, ADRole, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)
ConnectionRequest::ConnectionRequest(std::unique_ptr<WebToken, std::default_delete<WebToken> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ConnectionRequest::ConnectionRequest(ConnectionRequest const&)
ConnectionRequest::~ConnectionRequest()
ConnectionRequest::fromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ConnectionRequest::toString[abi:cxx11]()
ConnectionRequest::getCertificate() const
ConnectionRequest::getSelfSignedId[abi:cxx11]() const
ConnectionRequest::getData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
ConnectionRequest::getServerAddress[abi:cxx11]() const
ConnectionRequest::getClientRandomId() const
ConnectionRequest::getClientPlatformId[abi:cxx11]() const
ConnectionRequest::getClientThirdPartyName[abi:cxx11]() const
ConnectionRequest::isClientThirdPartyNameOnly() const
ConnectionRequest::getClientPlatformOnlineId[abi:cxx11]() const
ConnectionRequest::getClientPlatformOfflineId[abi:cxx11]() const
ConnectionRequest::getSkinId[abi:cxx11]() const
ConnectionRequest::getCapeId[abi:cxx11]() const
ConnectionRequest::getSkinData() const
ConnectionRequest::getSkinImageWidth() const
ConnectionRequest::getSkinImageHeight() const
ConnectionRequest::getCapeData() const
ConnectionRequest::getCapeImageWidth() const
ConnectionRequest::getCapeImageHeight() const
ConnectionRequest::getAnimatedImageData() const
ConnectionRequest::getPersonaPieces() const
ConnectionRequest::getPieceTintColors() const
ConnectionRequest::getArmSize[abi:cxx11]() const
ConnectionRequest::getSkinColor() const
ConnectionRequest::getSkinResourcePatch[abi:cxx11]() const
ConnectionRequest::getSkinGeometry[abi:cxx11]() const
ConnectionRequest::getSkinAnimationData[abi:cxx11]() const
ConnectionRequest::getTenantId[abi:cxx11]() const
ConnectionRequest::getADRole() const
ConnectionRequest::isEduMode() const
ConnectionRequest::getGameVersionString[abi:cxx11]() const
ConnectionRequest::getDeviceModel[abi:cxx11]() const
ConnectionRequest::getDeviceOS() const
ConnectionRequest::getDefaultInputMode() const
ConnectionRequest::getCurrentInputMode() const
ConnectionRequest::getUIProfile() const
ConnectionRequest::getGuiScale() const
ConnectionRequest::getClientSubId() const
ConnectionRequest::getDeviceId[abi:cxx11]() const
ConnectionRequest::isPremiumSkin() const
ConnectionRequest::isPersonaSkin() const
ConnectionRequest::isCapeOnClassicSkin() const
ConnectionRequest::verify(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&, long)
ConnectionRequest::validate(std::unique_ptr<Certificate, std::default_delete<Certificate> >, long) const
ConnectionRequest::verifySelfSigned()
ConnectionRequest::getBinaryData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
