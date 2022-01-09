BossDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BossDefinition> >&)
BossDefinition::initialize(EntityContext&, BossComponent&)
BossDefinition::deserializeData(Json::Value&)
BossDefinition::serializeData(Json::Value&) const
BossComponent::BossComponent()
BossComponent::getShouldDarkenSky() const
BossComponent::registerPlayer(Actor&, Player*)
BossComponent::unRegisterPlayer(Actor&, Player*)
BossComponent::getHealthBarVisible() const
BossComponent::setHealthBarVisible(Actor&, bool)
BossComponent::broadcastBossEvent(Actor&, BossEventUpdateType)
BossComponent::getName[abi:cxx11]() const
BossComponent::getHealthPercent() const
BossComponent::setHealthPercent(Actor&, float)
BossComponent::setColor(Actor&, BossBarColor)
BossComponent::getColor() const
BossComponent::getHudRangeSqr() const
BossComponent::getOverlay() const
BossComponent::setOverlay(Actor&, BossBarOverlay)
BossComponent::getCreateWorldFog() const
BossComponent::setCreateWorldFog(Actor&, bool)
BossComponent::getLastHealth() const
BossComponent::setLastHealth(int)
BossComponent::getLastPlayerUpdate() const
BossComponent::setLastPlayerUpdate(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l> > >)
BossComponent::isWithinRange(Actor&, Player const*) const
BossComponent::getPlayerParty() const
BossComponent::addPlayerToParty(mce::UUID, int)
BossComponent::sendDeathTelemetry(Actor&)
BossComponent::_sendBossEvent(Actor&, BossEventUpdateType, Player*)
BossComponent::handleRegisterPlayers(Actor&)
BossComponent::tryRemoveBoss(Actor&, Player&)
