ScoreboardCommand::InitProxy::InitProxy(ServerLevel&)
ScoreboardCommand::InitProxy::InitProxy(Scoreboard&)
ScoreboardCommand::InitProxy::getScoreboard()
ScoreboardCommand::setup(CommandRegistry&, ScoreboardCommand::InitProxy&&)
ScoreboardCommand::_getSortableDisplaySlots[abi:cxx11](Scoreboard&)
ScoreboardCommand::_getNonSortableDisplaySlots[abi:cxx11](Scoreboard&)
ScoreboardCommand::ScoreboardCommand()
ScoreboardCommand::execute(CommandOrigin const&, CommandOutput&) const
ScoreboardCommand::objectives(Scoreboard&, CommandOrigin const&, CommandOutput&) const
ScoreboardCommand::players(Scoreboard&, CommandOrigin const&, CommandOutput&) const
ScoreboardCommand::addObjective(Scoreboard&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, CommandOutput&) const
ScoreboardCommand::removeObjective(Scoreboard&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, CommandOutput&) const
ScoreboardCommand::listObjectives(Scoreboard const&, CommandOutput&) const
ScoreboardCommand::setDisplayObjective(Scoreboard&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, ObjectiveSortOrder, CommandOutput&) const
ScoreboardCommand::_getObjective(Scoreboard const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, CommandOutput&) const
ScoreboardCommand::_resolveObjectives(Scoreboard&, Objective*&, Objective*&, CommandOutput&) const
ScoreboardCommand::_isAction(ScoreboardCommand::Action) const
ScoreboardCommand::_getScoreboardIdsForSelector(Scoreboard&, WildcardCommandSelector<Actor> const&, CommandOrigin const&, CommandOutput&, bool) const
ScoreboardCommand::_isMutableAction() const
ScoreboardCommand::listPlayers(Scoreboard&, ScoreboardId const&, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const& (ActorUniqueID)> const&, CommandOutput&) const
ScoreboardCommand::addPlayerScore(Scoreboard&, PlayerScoreSetFunction, ScoreboardId const&, Objective&, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const& (ActorUniqueID)> const&, CommandOutput&, ScoreboardCommand::SetScoreOutput&) const
ScoreboardCommand::resetPlayer(Scoreboard&, ScoreboardId const&, Objective*, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const& (ActorUniqueID)> const&, CommandOutput&) const
ScoreboardCommand::testPlayerScore(ScoreboardId const&, Objective&, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const& (ActorUniqueID)> const&, CommandOutput&) const
ScoreboardCommand::setPlayerRandomScore(Scoreboard&, ScoreboardId const&, Objective&, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const& (ActorUniqueID)> const&, CommandOutput&, ScoreboardCommand::SetScoreOutput&) const
ScoreboardCommand::applyPlayerOperation(Scoreboard&, std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const& (ActorUniqueID)> const&, ScoreboardId const&, Objective&, Objective&, CommandOrigin const&, CommandOutput&, ScoreboardCommand::SetScoreOutput&) const
ScoreboardCommand::_generateCumulativeOutput(ScoreboardCommand::SetScoreOutput const&, Objective const&, CommandOutput&) const
ScoreboardCommand::_getSelectorResultsForObjective(std::vector<ScoreboardId, std::allocator<ScoreboardId> >&, Scoreboard&, WildcardCommandSelector<Actor> const&, Objective&, CommandOrigin const&, CommandOutput&, bool) const
ScoreboardCommand::_isOperation(CommandOperator) const
