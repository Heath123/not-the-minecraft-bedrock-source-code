TeleportCommand::setup(CommandRegistry&)
TeleportCommand::TeleportCommand()
TeleportCommand::canMoveEntityToLocation(CommandOrigin const&, Actor const&, BlockPos const&)
TeleportCommand::teleport(Actor&, Vec3, Vec3*, AutomaticID<Dimension, int>) const
TeleportCommand::getFacingDirection(CommandOrigin const&, CommandOutput&, Vec3&) const
TeleportCommand::execute(CommandOrigin const&, CommandOutput&) const
TeleportCommand::getCommandAreaForTargets(CommandOrigin const&, CommandSelectorResults<Actor> const&, Vec3, bool)
TeleportCommand::actorToLocationTeleportAnalysis(CommandOrigin const&, CommandArea const&, CommandArea&, Actor const&, Vec3)
TeleportCommand::getSafetyAABB(Actor const&, Vec3)
