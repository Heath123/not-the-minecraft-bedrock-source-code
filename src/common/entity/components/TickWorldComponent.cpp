TickWorldDescription::getJsonName() const
TickWorldDescription::deserializeData(Json::Value&)
TickWorldDescription::serializeData(Json::Value&) const
TickWorldComponent::TickWorldComponent()
TickWorldComponent::TickWorldComponent(TickWorldComponent&&)
TickWorldComponent::operator=(TickWorldComponent&&)
TickWorldComponent::removeArea()
TickWorldComponent::~TickWorldComponent()
TickWorldComponent::initFromDefinition(Actor&)
TickWorldComponent::getChunkRadius() const
TickWorldComponent::getMaxDistToPlayers() const
TickWorldComponent::isAlwaysActive() const
TickWorldComponent::hasTickingArea() const
TickWorldComponent::getTickingArea()
TickWorldComponent::setTickingArea(Actor&, std::shared_ptr<ITickingArea>)
TickWorldComponent::updateArea(Actor&)
