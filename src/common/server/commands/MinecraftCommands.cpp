MinecraftCommands::MinecraftCommands(Minecraft&, Automation::AutomationClient&)
MinecraftCommands::initCoreEnums(bool, BaseGameVersion const&)
MinecraftCommands::getRegistry()
MinecraftCommands::getRegistry() const
MinecraftCommands::requestCommandExecution(std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, bool) const
MinecraftCommands::getOutputType(CommandOrigin const&)
MinecraftCommands::handleOutput(CommandOrigin const&, CommandOutput const&) const
MinecraftCommands::executeCommand(std::shared_ptr<CommandContext>, bool) const
MinecraftCommands::setRegistryNetworkUpdateCallback(std::function<void (Packet const&)>) const
MinecraftCommands::runCommand(HashedString const&, CommandOrigin&, CurrentCmdVersion)
MinecraftCommands::registerChatPermissionsCallback(std::function<bool ()>)
MinecraftCommands::setOutputSender(std::unique_ptr<CommandOutputSender, std::default_delete<CommandOutputSender> >)
MinecraftCommands::getOutputSender()
