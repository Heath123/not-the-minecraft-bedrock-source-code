ScoreboardIdentityRef::ScoreboardIdentityRef()
ScoreboardIdentityRef::ScoreboardIdentityRef(ScoreboardId const&)
ScoreboardIdentityRef::getScoreboardId() const
ScoreboardIdentityRef::getPlayerId() const
ScoreboardIdentityRef::getEntityId() const
ScoreboardIdentityRef::getFakePlayerName[abi:cxx11]() const
ScoreboardIdentityRef::getName(std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const& (ActorUniqueID)> const&) const
ScoreboardIdentityRef::getNumReferences() const
ScoreboardIdentityRef::isCurrentlyReferenced() const
ScoreboardIdentityRef::getIdentityType() const
ScoreboardIdentityRef::isPlayerType() const
ScoreboardIdentityRef::isEntityType() const
ScoreboardIdentityRef::isFakeType() const
ScoreboardIdentityRef::isHiddenFakePlayer() const
ScoreboardIdentityRef::hasScoreInObjective(Objective const&) const
ScoreboardIdentityRef::removeFromObjective(Scoreboard&, Objective&)
ScoreboardIdentityRef::modifyScoreInObjective(int&, Objective&, int, PlayerScoreSetFunction)
ScoreboardIdentityRef::serialize(ScoreboardIdentityRef const&)
