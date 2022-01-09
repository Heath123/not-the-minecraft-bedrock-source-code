CommandOrigin::toCommandOriginData() const
CommandOrigin::_toCommandOriginData(CommandOriginData&) const
CommandOrigin::CommandOrigin()
CommandOrigin::getSourceId() const
CommandOrigin::getSourceSubId() const
CommandOrigin::getCursorHitBlockPos() const
CommandOrigin::getCursorHitPos() const
CommandOrigin::getOutputReceiver() const
CommandOrigin::hasChatPerms() const
CommandOrigin::hasTellPerms() const
CommandOrigin::canUseAbility(AbilitiesIndex) const
CommandOrigin::isWorldBuilder() const
CommandOrigin::canUseCommandsWithoutCheatsEnabled() const
CommandOrigin::isSelectorExpansionAllowed() const
CommandOrigin::fromCommandOriginData(CommandOriginData const&, Level&, NetworkIdentifier const&, unsigned char)
CommandOrigin::getUUID() const
CommandOrigin::handleCommandOutputCallback(Json::Value&&) const
CommandOrigin::_setUUID(mce::UUID const&)
CommandOrigin::getAreaAt(BlockPos const&) const
CommandOrigin::getAreaAtWithBuffer(BlockPos const&) const
CommandOrigin::getAreaAt(BlockPos const&, BlockPos const&, bool) const
CommandOrigin::getAreaAtWithBuffer(BlockPos const&, BlockPos const&, bool) const
ServerCommandOrigin::ServerCommandOrigin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, ServerLevel&, CommandPermissionLevel)
ServerCommandOrigin::~ServerCommandOrigin()
ServerCommandOrigin::~ServerCommandOrigin()
ServerCommandOrigin::getRequestId[abi:cxx11]() const
ServerCommandOrigin::getName[abi:cxx11]() const
ServerCommandOrigin::getBlockPosition() const
ServerCommandOrigin::getWorldPosition() const
ServerCommandOrigin::getLevel() const
ServerCommandOrigin::getDimension() const
ServerCommandOrigin::getEntity() const
ServerCommandOrigin::getPermissionsLevel() const
ServerCommandOrigin::getOriginType() const
ServerCommandOrigin::clone() const
ServerCommandOrigin::canUseCommandsWithoutCheatsEnabled() const
ServerCommandOrigin::isSelectorExpansionAllowed() const
PrecompiledCommandOrigin::getRequestId[abi:cxx11]() const
PrecompiledCommandOrigin::getName[abi:cxx11]() const
PrecompiledCommandOrigin::getBlockPosition() const
PrecompiledCommandOrigin::getWorldPosition() const
PrecompiledCommandOrigin::getLevel() const
PrecompiledCommandOrigin::getDimension() const
PrecompiledCommandOrigin::getEntity() const
PrecompiledCommandOrigin::getPermissionsLevel() const
PrecompiledCommandOrigin::clone() const
PrecompiledCommandOrigin::getOriginType() const
PrecompiledCommandOrigin::hasChatPerms() const
PrecompiledCommandOrigin::hasTellPerms() const
PrecompiledCommandOrigin::canUseAbility(AbilitiesIndex) const
PrecompiledCommandOrigin::isWorldBuilder() const
PrecompiledCommandOrigin::canUseCommandsWithoutCheatsEnabled() const
PrecompiledCommandOrigin::isSelectorExpansionAllowed() const
PlayerCommandOrigin::PlayerCommandOrigin(Player&)
PlayerCommandOrigin::PlayerCommandOrigin(ActorUniqueID, Level&)
PlayerCommandOrigin::getRequestId[abi:cxx11]() const
PlayerCommandOrigin::getName[abi:cxx11]() const
PlayerCommandOrigin::getBlockPosition() const
PlayerCommandOrigin::getWorldPosition() const
PlayerCommandOrigin::getLevel() const
PlayerCommandOrigin::getDimension() const
PlayerCommandOrigin::getEntity() const
PlayerCommandOrigin::getPermissionsLevel() const
PlayerCommandOrigin::getOriginType() const
PlayerCommandOrigin::getSourceId() const
PlayerCommandOrigin::getSourceSubId() const
PlayerCommandOrigin::clone() const
PlayerCommandOrigin::getCursorHitBlockPos() const
PlayerCommandOrigin::getCursorHitPos() const
PlayerCommandOrigin::canUseAbility(AbilitiesIndex) const
PlayerCommandOrigin::isSelectorExpansionAllowed() const
BlockCommandOrigin::BlockCommandOrigin(BlockSource&, BlockPos const&)
BlockCommandOrigin::getRequestId[abi:cxx11]() const
BlockCommandOrigin::getName[abi:cxx11]() const
BlockCommandOrigin::getBlockPosition() const
BlockCommandOrigin::getWorldPosition() const
BlockCommandOrigin::getLevel() const
BlockCommandOrigin::getDimension() const
BlockCommandOrigin::getEntity() const
BlockCommandOrigin::getPermissionsLevel() const
BlockCommandOrigin::getOriginType() const
BlockCommandOrigin::clone() const
BlockCommandOrigin::canUseCommandsWithoutCheatsEnabled() const
BlockCommandOrigin::isSelectorExpansionAllowed() const
BlockCommandOrigin::getBlockEntity() const
BlockCommandOrigin::getBaseCommandBlock() const
MinecartBlockCommandOrigin::MinecartBlockCommandOrigin(BlockSource&, ActorUniqueID const&)
MinecartBlockCommandOrigin::getBlockPosition() const
MinecartBlockCommandOrigin::getWorldPosition() const
MinecartBlockCommandOrigin::getOriginType() const
MinecartBlockCommandOrigin::clone() const
MinecartBlockCommandOrigin::canUseCommandsWithoutCheatsEnabled() const
MinecartBlockCommandOrigin::getBlockEntity() const
MinecartBlockCommandOrigin::getBaseCommandBlock() const
DevConsoleCommandOrigin::DevConsoleCommandOrigin(Player&)
DevConsoleCommandOrigin::DevConsoleCommandOrigin(ActorUniqueID, Level*, NetworkIdentifier, unsigned char)
DevConsoleCommandOrigin::getRequestId[abi:cxx11]() const
DevConsoleCommandOrigin::getName[abi:cxx11]() const
DevConsoleCommandOrigin::getBlockPosition() const
DevConsoleCommandOrigin::getWorldPosition() const
DevConsoleCommandOrigin::getLevel() const
DevConsoleCommandOrigin::getDimension() const
DevConsoleCommandOrigin::getEntity() const
DevConsoleCommandOrigin::getPermissionsLevel() const
DevConsoleCommandOrigin::clone() const
DevConsoleCommandOrigin::canUseCommandsWithoutCheatsEnabled() const
DevConsoleCommandOrigin::isSelectorExpansionAllowed() const
DevConsoleCommandOrigin::getSourceId() const
DevConsoleCommandOrigin::getSourceSubId() const
DevConsoleCommandOrigin::getOriginType() const
DevConsoleCommandOrigin::toCommandOriginData() const
TestCommandOrigin::TestCommandOrigin(Player&)
TestCommandOrigin::TestCommandOrigin(ActorUniqueID, Level*, NetworkIdentifier, unsigned char)
TestCommandOrigin::getRequestId[abi:cxx11]() const
TestCommandOrigin::getName[abi:cxx11]() const
TestCommandOrigin::getBlockPosition() const
TestCommandOrigin::getWorldPosition() const
TestCommandOrigin::getLevel() const
TestCommandOrigin::getDimension() const
TestCommandOrigin::getEntity() const
TestCommandOrigin::getPermissionsLevel() const
TestCommandOrigin::clone() const
TestCommandOrigin::canUseCommandsWithoutCheatsEnabled() const
TestCommandOrigin::isSelectorExpansionAllowed() const
TestCommandOrigin::getSourceId() const
TestCommandOrigin::getSourceSubId() const
TestCommandOrigin::getOriginType() const
TestCommandOrigin::toCommandOriginData() const
ClientAutomationCommandOrigin::ClientAutomationCommandOrigin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ClientAutomationCommandOrigin::getRequestId[abi:cxx11]() const
ClientAutomationCommandOrigin::getName[abi:cxx11]() const
ClientAutomationCommandOrigin::getBlockPosition() const
ClientAutomationCommandOrigin::getWorldPosition() const
ClientAutomationCommandOrigin::getLevel() const
ClientAutomationCommandOrigin::getDimension() const
ClientAutomationCommandOrigin::getEntity() const
ClientAutomationCommandOrigin::getPermissionsLevel() const
ClientAutomationCommandOrigin::getOriginType() const
ClientAutomationCommandOrigin::toCommandOriginData() const
ClientAutomationCommandOrigin::clone() const
ClientAutomationCommandOrigin::canUseCommandsWithoutCheatsEnabled() const
ClientAutomationCommandOrigin::isSelectorExpansionAllowed() const
AutomationPlayerCommandOrigin::AutomationPlayerCommandOrigin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Player&)
AutomationPlayerCommandOrigin::AutomationPlayerCommandOrigin(ActorUniqueID, Level&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, CommandPermissionLevel, NetworkIdentifier const&)
AutomationPlayerCommandOrigin::getRequestId[abi:cxx11]() const
AutomationPlayerCommandOrigin::getPermissionsLevel() const
AutomationPlayerCommandOrigin::getOriginType() const
AutomationPlayerCommandOrigin::getName[abi:cxx11]() const
AutomationPlayerCommandOrigin::toCommandOriginData() const
AutomationPlayerCommandOrigin::clone() const
AutomationPlayerCommandOrigin::hasChatPerms() const
AutomationPlayerCommandOrigin::hasTellPerms() const
AutomationPlayerCommandOrigin::getSourceId() const
VirtualCommandOrigin::VirtualCommandOrigin(CommandOrigin const&, CommandOrigin const&, Vec3 const&)
VirtualCommandOrigin::_getEncapsulatedOrigin() const
VirtualCommandOrigin::VirtualCommandOrigin(CommandOrigin const&, Actor&, Vec3 const&)
VirtualCommandOrigin::VirtualCommandOrigin(std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin> >, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin> >, Vec3 const&)
VirtualCommandOrigin::getRequestId[abi:cxx11]() const
VirtualCommandOrigin::getName[abi:cxx11]() const
VirtualCommandOrigin::getBlockPosition() const
VirtualCommandOrigin::getWorldPosition() const
VirtualCommandOrigin::getLevel() const
VirtualCommandOrigin::getDimension() const
VirtualCommandOrigin::getEntity() const
VirtualCommandOrigin::getPermissionsLevel() const
VirtualCommandOrigin::getOriginType() const
VirtualCommandOrigin::getSourceId() const
VirtualCommandOrigin::getOutputReceiver() const
VirtualCommandOrigin::hasChatPerms() const
VirtualCommandOrigin::hasTellPerms() const
VirtualCommandOrigin::canUseAbility(AbilitiesIndex) const
VirtualCommandOrigin::canUseCommandsWithoutCheatsEnabled() const
VirtualCommandOrigin::isSelectorExpansionAllowed() const
VirtualCommandOrigin::clone() const
ActorCommandOrigin::ActorCommandOrigin(Actor&)
ActorCommandOrigin::ActorCommandOrigin(ActorUniqueID, Level&)
ActorCommandOrigin::getRequestId[abi:cxx11]() const
ActorCommandOrigin::getName[abi:cxx11]() const
ActorCommandOrigin::getBlockPosition() const
ActorCommandOrigin::getWorldPosition() const
ActorCommandOrigin::getLevel() const
ActorCommandOrigin::getDimension() const
ActorCommandOrigin::getEntity() const
ActorCommandOrigin::getPermissionsLevel() const
ActorCommandOrigin::getOriginType() const
ActorCommandOrigin::clone() const
ActorCommandOrigin::isSelectorExpansionAllowed() const
ActorServerCommandOrigin::ActorServerCommandOrigin(Actor&)
ActorServerCommandOrigin::ActorServerCommandOrigin(ActorUniqueID, Level&)
ActorServerCommandOrigin::getPermissionsLevel() const
ActorServerCommandOrigin::clone() const
ActorServerCommandOrigin::getOriginType() const
GameMasterEntityServerCommandOrigin::GameMasterEntityServerCommandOrigin(Actor&)
GameMasterEntityServerCommandOrigin::GameMasterEntityServerCommandOrigin(ActorUniqueID, Level&)
GameMasterEntityServerCommandOrigin::getPermissionsLevel() const
GameMasterEntityServerCommandOrigin::clone() const
GameMasterEntityServerCommandOrigin::getOriginType() const
GameMasterEntityServerCommandOrigin::isSelectorExpansionAllowed() const
GameArgumentCommandOrigin::GameArgumentCommandOrigin()
GameArgumentCommandOrigin::getRequestId[abi:cxx11]() const
GameArgumentCommandOrigin::getName[abi:cxx11]() const
GameArgumentCommandOrigin::getBlockPosition() const
GameArgumentCommandOrigin::getWorldPosition() const
GameArgumentCommandOrigin::getLevel() const
GameArgumentCommandOrigin::getDimension() const
GameArgumentCommandOrigin::getEntity() const
GameArgumentCommandOrigin::getPermissionsLevel() const
GameArgumentCommandOrigin::getOriginType() const
GameArgumentCommandOrigin::clone() const
GameArgumentCommandOrigin::canUseCommandsWithoutCheatsEnabled() const
GameArgumentCommandOrigin::isSelectorExpansionAllowed() const
