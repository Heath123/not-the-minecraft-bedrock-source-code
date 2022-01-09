PlayerScore::PlayerScore(ScoreboardId const&, int)
PlayerScore::getId() const
PlayerScore::getScore() const
DisplayObjective::DisplayObjective(Objective const&, ObjectiveSortOrder)
DisplayObjective::isDisplaying(Objective const&) const
DisplayObjective::isValid() const
DisplayObjective::getObjective() const
DisplayObjective::getSortOrder() const
DisplayObjective::getBelowNameStringForId[abi:cxx11](ScoreboardId const&) const
Objective::getPlayerScore(ScoreboardId const&) const
Objective::getDisplayName[abi:cxx11]() const
DisplayObjective::deserialize(CompoundTag const&, Scoreboard const&)
DisplayObjective::serialize(DisplayObjective const&)
Objective::getName[abi:cxx11]() const
Objective::Objective(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, ObjectiveCriteria const&)
Objective::setDisplayName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
Objective::getRenderType() const
Objective::getCriteria() const
Objective::getPlayers() const
Objective::getScores() const
Objective::getPlayerScoreRef(ScoreboardId const&, ScoreInfoRef&)
Objective::hasScores() const
Objective::_modifyPlayerScore(int&, ScoreboardId const&, int, PlayerScoreSetFunction)
Objective::_loadPlayerScore(ScoreboardIdentityRef&, int)
Objective::hasScore(ScoreboardId const&) const
Objective::_resetPlayer(ScoreboardId const&)
Objective::deserialize(CompoundTag const&, Scoreboard&)
Objective::serialize(Objective const&)
DisplayObjective::DisplayObjective()
