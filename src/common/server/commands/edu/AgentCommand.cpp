AgentCommand::setup(CommandRegistry&)
AgentCommand::AgentCommand()
AgentCommand::validateRange(Agent*, CommandOrigin const&, CommandOutput&)
AgentCommand::runAgentCommand(CommandOrigin const&, CommandOutput&, std::function<std::unique_ptr<AgentCommands::Command, std::default_delete<AgentCommands::Command> > (Player&)>) const
AgentCommand::reportSuccess(bool, CommandOutput&) const
AgentCommand::successName[abi:cxx11]() const
AgentCommand::errorName[abi:cxx11]() const
AgentCommand::createAgent(Player&, CommandOrigin const&, CommandOutput&) const
AgentCommand::setAgentOwner(Agent&, Player&) const
AgentCommand::createAgentOutputSuccess(CommandOutput&, bool) const
AgentCommand::tpAgent(Player&, CommandOrigin const&, CommandOutput&) const
AgentCommand::itemCommand(CommandOrigin const&, CommandOutput&) const
AgentCommand::transfer(CommandOrigin const&, CommandOutput&) const
AgentCommand::drop(CommandOrigin const&, CommandOutput&) const
AgentCommand::collect(CommandOrigin const&, CommandOutput&) const
AgentCommand::place(CommandOrigin const&, CommandOutput&) const
AgentCommand::directionCommand(CommandOrigin const&, CommandOutput&) const
AgentCommand::setItem(CommandOrigin const&, CommandOutput&) const
AgentCommand::getPosition(CommandOrigin const&, CommandOutput&) const
AgentCommand::isValidSlot(int) const
AgentCommand::execute(CommandOrigin const&, CommandOutput&) const
