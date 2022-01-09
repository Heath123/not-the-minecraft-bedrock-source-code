LegacyTradeableDefinition::buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LegacyTradeableDefinition> >&)
LegacyTradeableDefinition::initialize(EntityContext&, LegacyTradeableComponent&)
LegacyTradeableDefinition::deserializeData(Json::Value&)
LegacyTradeableDefinition::serializeData(Json::Value&) const
LegacyTradeableComponent::initFromDefinition(Actor&)
LegacyTradeableComponent::reloadComponent(Actor&)
LegacyTradeableComponent::_getTradeTable(Actor&)
LegacyTradeableComponent::_updateMaxTradeTier(Actor&, int)
LegacyTradeableComponent::addAdditionalSaveData(CompoundTag&)
LegacyTradeableComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
LegacyTradeableComponent::updateTradeTier(Actor&)
LegacyTradeableComponent::getInteraction(Actor&, Player&, ActorInteraction&)
LegacyTradeableComponent::getOffers(Actor&)
LegacyTradeableComponent::_refreshTrades(Actor&)
LegacyTradeableComponent::setOffers(MerchantRecipeList*)
LegacyTradeableComponent::loadOffersFromTag(CompoundTag const*)
LegacyTradeableComponent::getDisplayName[abi:cxx11]() const
LegacyTradeableComponent::loadDisplayName[abi:cxx11](Actor&)
LegacyTradeableComponent::getResetLockedOnFirstTrade() const
LegacyTradeableComponent::setResetLockedOnFirstTrade(bool)
LegacyTradeableComponent::getTradeTier() const
LegacyTradeableComponent::setTradeTier(int)
LegacyTradeableComponent::getUpdateMerchantTimer() const
LegacyTradeableComponent::getLastPlayerTradeName() const
LegacyTradeableComponent::getAddRecipeOnUpdate() const
LegacyTradeableComponent::setAddRecipeOnUpdate(bool)
LegacyTradeableComponent::getRiches() const
LegacyTradeableComponent::setRiches(int)
LegacyTradeableComponent::getWillingToBreed() const
LegacyTradeableComponent::setWillingToBreed(bool)
LegacyTradeableComponent::IncrementTradeTier()
LegacyTradeableComponent::DecrementMerchantTimer()
LegacyTradeableComponent::notifyTrade(Actor&, int)
LegacyTradeableComponent::_runOnServerCheckForFirstTimeTrade(int)
LegacyTradeableComponent::notifyTradeUpdated(Actor&, ItemStack&, bool)
LegacyTradeableComponent::createDataPacket(Actor&, ContainerID)
LegacyTradeableComponent::setDataFromPacket(Actor&, UpdateTradePacket const&)
LegacyTradeableComponent::restockAllRecipes(Actor&)
LegacyTradeableComponent::shouldPersistTrades(Actor&) const
LegacyTradeableComponent::shouldConvertTrades(Actor&) const
LegacyTradeableComponent::_rearrangeTradeList(Actor&, std::vector<Trade, std::allocator<Trade> >&, unsigned long)
