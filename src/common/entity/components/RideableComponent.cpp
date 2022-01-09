RideableDescription::getJsonName() const
RideableDescription::deserializeData(Json::Value&)
RideableDescription::parseSeatDescription(Json::Value&)
RideableDescription::serializeData(Json::Value&) const
RideableComponent::RideableComponent()
RideableComponent::initFromDefinition(Actor&)
RideableComponent::getInteraction(Actor&, Player&, ActorInteraction&)
RideableComponent::canAddRider(Actor const&, Actor&) const
RideableComponent::_setCanPlayerRide(Player&, bool)
RideableComponent::pullInEntity(Actor&, Actor&)
RideableComponent::positionRider(Actor&, Actor&)
RideableComponent::getRiderIndex(Actor&, Actor&) const
RideableComponent::getValidSeat(Actor const&, int) const
RideableComponent::getFirstAvailableSeatPosition(Actor const&, Actor&, Vec3&) const
