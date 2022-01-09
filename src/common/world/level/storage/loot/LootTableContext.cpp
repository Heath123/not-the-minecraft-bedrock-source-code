LootTableContext::LootTableContext(float, Level*, Actor*, Player*, ActorDamageSource const*, float)
LootTableContext::getThisEntity() const
LootTableContext::getKillerPlayer() const
LootTableContext::getKillerPet() const
LootTableContext::getLevel() const
LootTableContext::getKillerEntity() const
LootTableContext::getDeathSource() const
LootTableContext::addVisitedTable(LootTable const*)
LootTableContext::removeVisitedTable(LootTable const*)
LootTableContext::getLuck() const
LootTableContext::getEntity(ActorTarget) const
LootTableContext::getExplosionRadius() const
LootTableContext::Builder::Builder(Level*)
LootTableContext::Builder::withLuck(float)
LootTableContext::Builder::withThisEntity(Actor*)
LootTableContext::Builder::withKillerPlayer(Player*)
LootTableContext::Builder::withDeathSource(ActorDamageSource const*)
LootTableContext::Builder::withExplosionRadius(float)
LootTableContext::Builder::create() const
