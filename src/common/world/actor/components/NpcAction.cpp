NpcAction::NpcAction(NpcActionType)
NpcAction::~NpcAction()
NpcAction::~NpcAction()
NpcAction::getType() const
NpcAction::getMode() const
NpcAction::setMode(NpcActionMode)
NpcAction::setButtonName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
NpcAction::getButtonName[abi:cxx11]() const
NpcAction::getButtonRawTextName[abi:cxx11]() const
NpcAction::getText[abi:cxx11]() const
NpcAction::getRawText[abi:cxx11]() const
NpcAction::setText(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
NpcUrlAction::NpcUrlAction()
NpcUrlAction::toJson()
NpcAction::toJsonBase(Json::Value&)
NpcCommandAction::NpcCommandAction()
NpcAction::operator==(NpcAction const&) const
NpcAction::operator!=(NpcAction const&) const
NpcAction::read(Json::Value const&)
NpcCommandAction::toJson()
NpcCommandAction::fromJson(Json::Value const&)
NpcCommandAction::getCommands()
NpcCommandAction::setCommands(std::vector<NpcCommandAction::SavedCommand, std::allocator<NpcCommandAction::SavedCommand> >&&)
NpcCommandAction::SavedCommand::SavedCommand(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::unique_ptr<Command, std::default_delete<Command> >, int)
NpcCommandAction::SavedCommand::SavedCommand(NpcCommandAction::SavedCommand const&)
NpcCommandAction::SavedCommand::SavedCommand(NpcCommandAction::SavedCommand&&)
NpcCommandAction::SavedCommand::~SavedCommand()
NpcCommandAction::SavedCommand::operator=(NpcCommandAction::SavedCommand const&)
