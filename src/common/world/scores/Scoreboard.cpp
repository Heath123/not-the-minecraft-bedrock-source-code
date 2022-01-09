Scoreboard::Scoreboard(CommandSoftEnumRegistry)
Scoreboard::_init()
Scoreboard::getObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Scoreboard::addObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, ObjectiveCriteria const&)
Scoreboard::removeObjective(Objective*)
Scoreboard::createObjectiveCriteria(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, ObjectiveRenderType)
Scoreboard::getCriteria(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Scoreboard::getCriteriaNames[abi:cxx11]() const
Scoreboard::getDisplayObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Scoreboard::getObjectives() const
Scoreboard::getObjectiveNames[abi:cxx11]() const
Scoreboard::getDisplayObjectiveSlotNames[abi:cxx11]() const
Scoreboard::onObjectiveAdded(Objective const&)
Scoreboard::onObjectiveRemoved(Objective&)
Scoreboard::resetPlayerScore(ScoreboardId const&, Objective&)
Scoreboard::onScoreChanged(ScoreboardId const&, Objective const&)
Scoreboard::onPlayerScoreRemoved(ScoreboardId const&, Objective const&)
Scoreboard::onPlayerIdentityUpdated(PlayerScoreboardId const&)
Scoreboard::shouldUpdateUI() const
Scoreboard::onUpdateUI()
Scoreboard::tick()
Scoreboard::modifyPlayerScore(bool&, ScoreboardId const&, Objective&, int, PlayerScoreSetFunction)
Scoreboard::getScoreboardIdentityRef(ScoreboardId const&)
Scoreboard::getDisplayInfoSorted(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::function<void (ObjectiveSortOrder, std::vector<PlayerScore, std::allocator<PlayerScore> >&)>) const
Scoreboard::getDisplayInfoFiltered(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Scoreboard::getTrackedIds() const
Scoreboard::resetPlayerScore(ScoreboardId const&)
Scoreboard::hasIdentityFor(ScoreboardId const&) const
Scoreboard::applyPlayerOperation(bool&, std::vector<ScoreboardId, std::allocator<ScoreboardId> >&, ScoreboardId const&, Objective&, std::vector<ScoreboardId, std::allocator<ScoreboardId> >&, Objective&, CommandOperator)
Scoreboard::_processOperation(bool&, CommandOperator, int, int)
Scoreboard::getIdScores(ScoreboardId const&) const
Scoreboard::getScoreboardIdentityRefs() const
Scoreboard::registerScoreboardIdentity(ScoreboardId const&, PlayerScoreboardId const&)
Scoreboard::registerScoreboardIdentity(ScoreboardId const&, ActorUniqueID const&)
Scoreboard::registerScoreboardIdentity(ScoreboardId const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Scoreboard::registerScoreboardIdentity(CompoundTag const&)
Scoreboard::clearScoreboardIdentity(ScoreboardId const&)
Scoreboard::getScoreboardId(Player const&) const
Scoreboard::getScoreboardId(Actor const&) const
Scoreboard::getScoreboardId(ActorUniqueID const&) const
Scoreboard::getScoreboardId(PlayerScoreboardId const&) const
Scoreboard::getScoreboardId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
Scoreboard::replaceFakePlayer(ScoreboardId const&, PlayerScoreboardId const&)
Scoreboard::writeToLevelStorage()
Scoreboard::createScoreboardId(Player const&)
Scoreboard::createScoreboardId(Actor const&)
Scoreboard::createScoreboardId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Scoreboard::getNumTrackedIdentities() const
Scoreboard::getScoreboardIdentityRef(ScoreboardId const&) const
Scoreboard::setDisplayObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Objective const&, ObjectiveSortOrder)
Scoreboard::clearDisplayObjective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Scoreboard::isObjectiveDisplayed(Objective const&) const
Scoreboard::getAssociatedDisplaySlots(Objective const&) const
Scoreboard::setPacketSender(PacketSender*)
Scoreboard::shouldClearScoresOnDeath(Actor const&)
Scoreboard::onPlayerJoined(Player const&)
Scoreboard::isClientSide() const
Scoreboard::_initCriterias()
Scoreboard::_getObjectiveMap[abi:cxx11]() const
Scoreboard::_getCriteriaMap[abi:cxx11]() const
Scoreboard::_addLoadedObjective(std::unique_ptr<Objective, std::default_delete<Objective> >)
Scoreboard::_addLoadedCriteria(std::unique_ptr<ObjectiveCriteria, std::default_delete<ObjectiveCriteria> >)
