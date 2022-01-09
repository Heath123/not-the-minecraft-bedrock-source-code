PlayerScoreboardId::PlayerScoreboardId()
PlayerScoreboardId::PlayerScoreboardId(long)
PlayerScoreboardId::operator==(PlayerScoreboardId const&) const
PlayerScoreboardId::operator!=(PlayerScoreboardId const&) const
PlayerScoreboardId::getHash() const
IdentityDefinition::_init()
IdentityDefinition::IdentityDefinition()
IdentityDefinition::IdentityDefinition(ScoreboardId const&, PlayerScoreboardId const&)
IdentityDefinition::IdentityDefinition(ScoreboardId const&, ActorUniqueID const&)
IdentityDefinition::IdentityDefinition(ScoreboardId const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
IdentityDefinition::isHiddenFakePlayerNameString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
IdentityDefinition::IdentityDefinition(IdentityDefinition const&)
IdentityDefinition::IdentityDefinition(IdentityDefinition&&)
IdentityDefinition::operator=(IdentityDefinition const&)
IdentityDefinition::operator=(IdentityDefinition&&)
IdentityDefinition::operator bool() const
IdentityDefinition::isValid() const
IdentityDefinition::getScoreboardId() const
IdentityDefinition::getPlayerId() const
IdentityDefinition::getEntityId() const
IdentityDefinition::getFakePlayerName[abi:cxx11]() const
IdentityDefinition::getName(std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const& (ActorUniqueID)> const&) const
IdentityDefinition::isPlayerType() const
IdentityDefinition::getIdentityType() const
IdentityDefinition::isEntityType() const
IdentityDefinition::isFakeType() const
IdentityDefinition::isHiddenFakePlayerType() const
IdentityDefinition::convertFakeToReal(IdentityDefinition&, PlayerScoreboardId const&)
