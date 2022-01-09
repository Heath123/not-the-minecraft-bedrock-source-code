ProjectileDescription::getJsonName() const
ProjectileDescription::deserializeData(Json::Value&)
ProjectileDescription::parseProjectileAnchor(Json::Value&, ProjectileAnchor&, char const*, ProjectileAnchor, char const*)
ProjectileDescription::serializeData(Json::Value&) const
ProjectileComponent::ProjectileComponent()
ProjectileComponent::initFromDefinition(Actor&)
ProjectileComponent::addAdditionalSaveData(CompoundTag&)
ProjectileComponent::readAdditionalSaveData(Actor&, CompoundTag const&, DataLoadHelper&)
ProjectileComponent::getUncertainty(Difficulty) const
ProjectileComponent::getUncertaintyBase() const
ProjectileComponent::getUncertaintyMultiplier() const
ProjectileComponent::getThrowUpAngleOffset() const
ProjectileComponent::getGravity()
ProjectileComponent::getParticleType()
ProjectileComponent::getSemiRandomDiffDamage()
ProjectileComponent::getIsDangerous()
ProjectileComponent::getShootTarget()
ProjectileComponent::onHit(Actor&, HitResult const&)
ProjectileComponent::_isLoyaltyTrident(Actor const&) const
ProjectileComponent::_handleLightningOnHit(Actor&)
ProjectileComponent::hurt(Actor&, ActorDamageSource const&)
ProjectileComponent::getPotionEffect()
ProjectileComponent::setPotionEffect(int)
ProjectileComponent::getKnockback()
ProjectileComponent::getKnockbackForce() const
ProjectileComponent::setKnockbackForce(float)
ProjectileComponent::setChanneling()
ProjectileComponent::getEnchantChanneling() const
ProjectileComponent::setEnchantImpaler(int const&)
ProjectileComponent::getEnchantImpaler() const
ProjectileComponent::getIgniteOnHit()
ProjectileComponent::getCatchFire() const
ProjectileComponent::getAnchor()
ProjectileComponent::getOffset()
ProjectileComponent::getShootSound()
ProjectileComponent::getHitSound()
ProjectileComponent::getBlockStuckTo()
ProjectileComponent::setBlockStuckTo(BlockPos const&)
ProjectileComponent::incrementLife()
ProjectileComponent::incrementFlightTime()
ProjectileComponent::setShouldBounce(bool)
ProjectileComponent::getShouldBounce()
ProjectileComponent::setNoPhysics(bool)
ProjectileComponent::getNoPhysics() const
ProjectileComponent::setOwnerId(ActorUniqueID)
ProjectileComponent::setSplashRange(float)
ProjectileComponent::getShooterAngle(Actor&) const
ProjectileComponent::shoot(Actor&, Actor&)
ProjectileComponent::shoot(Actor&, Vec3 const&, float, float, Vec3 const&, Actor*)
ProjectileComponent::getThrowPower() const
ProjectileComponent::_selectNextMoveDirection(Actor&, ProjectileComponent::EAxis)
ProjectileComponent::setActiveTarget(Actor&, Actor*)
ProjectileComponent::handleMovementGravity(Actor&)
ProjectileComponent::handleMovementHoming(Actor&)
ProjectileComponent::lerpMotion(Actor&, Vec3 const&)
ProjectileComponent::incrementOnGroundTime()
ImpactDamageSubcomponent::ImpactDamageSubcomponent()
OnHitSubcomponent::OnHitSubcomponent()
ImpactDamageSubcomponent::~ImpactDamageSubcomponent()
OnHitSubcomponent::~OnHitSubcomponent()
ImpactDamageSubcomponent::~ImpactDamageSubcomponent()
ImpactDamageSubcomponent::readfromJSON(Json::Value&)
ImpactDamageSubcomponent::writetoJSON(Json::Value&) const
ImpactDamageSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
OnHitSubcomponent::_canAttack(Actor*, Actor*) const
StickInGroundSubcomponent::StickInGroundSubcomponent()
StickInGroundSubcomponent::~StickInGroundSubcomponent()
StickInGroundSubcomponent::~StickInGroundSubcomponent()
StickInGroundSubcomponent::readfromJSON(Json::Value&)
StickInGroundSubcomponent::writetoJSON(Json::Value&) const
StickInGroundSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
CatchFireSubcomponent::CatchFireSubcomponent()
CatchFireSubcomponent::~CatchFireSubcomponent()
CatchFireSubcomponent::~CatchFireSubcomponent()
CatchFireSubcomponent::readfromJSON(Json::Value&)
CatchFireSubcomponent::writetoJSON(Json::Value&) const
CatchFireSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
IgniteSubcomponent::IgniteSubcomponent()
IgniteSubcomponent::~IgniteSubcomponent()
IgniteSubcomponent::~IgniteSubcomponent()
IgniteSubcomponent::readfromJSON(Json::Value&)
IgniteSubcomponent::writetoJSON(Json::Value&) const
IgniteSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
GrantXPSubcomponent::GrantXPSubcomponent()
GrantXPSubcomponent::~GrantXPSubcomponent()
GrantXPSubcomponent::~GrantXPSubcomponent()
GrantXPSubcomponent::readfromJSON(Json::Value&)
GrantXPSubcomponent::writetoJSON(Json::Value&) const
GrantXPSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
MobEffectSubcomponent::MobEffectSubcomponent()
MobEffectSubcomponent::~MobEffectSubcomponent()
MobEffectSubcomponent::~MobEffectSubcomponent()
MobEffectSubcomponent::_addEffectFromJSON(Json::Value&)
MobEffectSubcomponent::readfromJSON(Json::Value&)
MobEffectSubcomponent::writetoJSON(Json::Value&) const
MobEffectSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
SplashPotionEffectSubcomponent::SplashPotionEffectSubcomponent()
SplashPotionEffectSubcomponent::~SplashPotionEffectSubcomponent()
SplashPotionEffectSubcomponent::~SplashPotionEffectSubcomponent()
SplashPotionEffectSubcomponent::readfromJSON(Json::Value&)
SplashPotionEffectSubcomponent::writetoJSON(Json::Value&) const
SplashPotionEffectSubcomponent::applyMobEffects(MobEffectInstance const&, std::vector<Actor*, std::allocator<Actor*> > const&, Actor&, std::shared_ptr<Potion const> const&, float, MobEffect*, HitResult&, int)
SplashPotionEffectSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
SpawnAoECloudSubcomponent::SpawnAoECloudSubcomponent()
SpawnAoECloudSubcomponent::~SpawnAoECloudSubcomponent()
SpawnAoECloudSubcomponent::~SpawnAoECloudSubcomponent()
SpawnAoECloudSubcomponent::readfromJSON(Json::Value&)
SpawnAoECloudSubcomponent::writetoJSON(Json::Value&) const
SpawnAoECloudSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
TeleportToSubcomponent::TeleportToSubcomponent()
TeleportToSubcomponent::~TeleportToSubcomponent()
TeleportToSubcomponent::~TeleportToSubcomponent()
TeleportToSubcomponent::readfromJSON(Json::Value&)
TeleportToSubcomponent::writetoJSON(Json::Value&) const
TeleportToSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
HurtOwnerSubcomponent::HurtOwnerSubcomponent()
HurtOwnerSubcomponent::~HurtOwnerSubcomponent()
HurtOwnerSubcomponent::~HurtOwnerSubcomponent()
HurtOwnerSubcomponent::readfromJSON(Json::Value&)
HurtOwnerSubcomponent::writetoJSON(Json::Value&) const
HurtOwnerSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
SpawnChanceSubcomponent::SpawnChanceSubcomponent()
SpawnChanceSubcomponent::~SpawnChanceSubcomponent()
SpawnChanceSubcomponent::~SpawnChanceSubcomponent()
SpawnChanceSubcomponent::readfromJSON(Json::Value&)
SpawnChanceSubcomponent::writetoJSON(Json::Value&) const
SpawnChanceSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
DouseFireSubcomponent::DouseFireSubcomponent()
DouseFireSubcomponent::~DouseFireSubcomponent()
DouseFireSubcomponent::~DouseFireSubcomponent()
DouseFireSubcomponent::readfromJSON(Json::Value&)
DouseFireSubcomponent::writetoJSON(Json::Value&) const
DouseFireSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
DouseFireSubcomponent::isPotionWater(Actor&, ProjectileComponent&, HitResult const&)
DouseFireSubcomponent::douseFire(BlockSource&, BlockPos const&)
FreezeOnHitSubcomponent::readfromJSON(Json::Value&)
FreezeOnHitSubcomponent::writetoJSON(Json::Value&) const
FreezeOnHitSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
ActorDefinitionEventSubcomponent::ActorDefinitionEventSubcomponent()
ActorDefinitionEventSubcomponent::~ActorDefinitionEventSubcomponent()
ActorDefinitionEventSubcomponent::~ActorDefinitionEventSubcomponent()
ActorDefinitionEventSubcomponent::readfromJSON(Json::Value&)
ActorDefinitionEventSubcomponent::writetoJSON(Json::Value&) const
ActorDefinitionEventSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
OnHitSubcomponent::~OnHitSubcomponent()
OnHitSubcomponent::readfromJSON(Json::Value&)
OnHitSubcomponent::writetoJSON(Json::Value&) const
ThrownPotionEffectSubcomponent::writetoJSON(Json::Value&) const
ThrownPotionEffectSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
ArrowEffectSubcomponent::writetoJSON(Json::Value&) const
ArrowEffectSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
RemoveOnHitSubcomponent::RemoveOnHitSubcomponent()
RemoveOnHitSubcomponent::~RemoveOnHitSubcomponent()
RemoveOnHitSubcomponent::~RemoveOnHitSubcomponent()
RemoveOnHitSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
ParticleOnHitSubcomponent::ParticleOnHitSubcomponent()
ParticleOnHitSubcomponent::~ParticleOnHitSubcomponent()
ParticleOnHitSubcomponent::~ParticleOnHitSubcomponent()
ParticleOnHitSubcomponent::readfromJSON(Json::Value&)
ParticleOnHitSubcomponent::writetoJSON(Json::Value&) const
ParticleOnHitSubcomponent::isParticleTypeIconBreak() const
ParticleOnHitSubcomponent::doOnHitEffect(Actor&, ProjectileComponent&)
