SpatialActorNetworkData::SpatialActorNetworkData(Actor&)
SpatialActorNetworkData::sendUpdate(bool, bool, bool)
SpatialActorNetworkData::_sendPacket(Packet&)
SpatialActorNetworkData::forceSetSentData()
SpatialActorNetworkData::shouldSendUpdate(bool, bool) const
SpatialActorNetworkData::enableAutoSend(bool)
SpatialActorNetworkData::isAutoSendEnabled() const
SpatialActorNetworkData::handleServerData(MoveActorDeltaData const&)
SpatialActorNetworkData::handleServerData(MoveActorAbsoluteData const&)
SpatialActorNetworkData::_shouldProcessServerData(MoveActorAbsoluteData const&)
SpatialActorNetworkData::handleClientData(MoveActorAbsoluteData const&)
SpatialActorNetworkData::getLastSentPositionForAddingEntity()
SpatialActorNetworkData::_initializeLastSentValues()
SpatialActorNetworkData::getLastSentRotationForAddingEntity()
SpatialActorNetworkData::getLastSentYHeadRotationForAddingEntity()
SpatialActorNetworkData::setLastReceivedMoveDataForAddedEntity(ActorRuntimeID, Vec3, Vec2, float)