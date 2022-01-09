CommandOutputSender::CommandOutputSender(Automation::AutomationClient&)
CommandOutputSender::send(CommandOrigin const&, CommandOutput const&)
CommandOutputSender::_sendOverWebsocket(CommandOrigin const&, CommandOutput const&)
CommandOutputSender::_toJson(CommandOutput const&) const
CommandOutputSender::sendToAdmins(CommandOrigin const&, CommandOutput const&, CommandPermissionLevel)
CommandOutputSender::translate(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&)
CommandOutputSender::registerOutputCallback(std::function<void (AutomationCmdOutput&)> const&)
