ActorEventCoordinator::sendActorAttack(Actor&, Actor&)
ActorEventCoordinator::sendActorHurt(Actor&, ActorDamageSource const&, int, int)
ActorEventCoordinator::sendActorMove(Actor&, Vec3 const&)
ActorEventCoordinator::sendActorTick(Actor&)
ActorEventCoordinator::sendActorSneakChanged(Actor&, bool)
ActorEventCoordinator::sendActorStartRiding(Actor&, Actor&)
ActorEventCoordinator::sendActorStopRiding(Actor&, bool, bool, bool)
ActorEventCoordinator::sendActorDeath(Actor&, ActorDamageSource const&)
ActorEventCoordinator::sendActorDefinitionEventTriggered(Actor&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ActorEventCoordinator::sendActorRemoved(Actor&)
ActorEventCoordinator::sendActorCreated(Actor&)
ActorEventCoordinator::sendActorUseItem(Actor&, ItemInstance const&, ItemUseMethod)
ActorEventCoordinator::sendActorUseItemOn(Actor&, ItemStack const&, BlockPos const&, unsigned char)
ActorEventCoordinator::sendActorAcquiredItem(Actor&, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor*)
ActorEventCoordinator::sendActorPlacedItem(Actor&, ItemInstance const&)
ActorEventCoordinator::sendActorDroppedItem(Actor&, ItemInstance const&)
ActorEventCoordinator::sendActorCarriedItemChanged(Actor&, ItemInstance const&, ItemInstance const&, HandSlot)
ActorEventCoordinator::sendActorEquippedArmor(Actor&, ItemInstance const&, ArmorSlot)
ActorEventCoordinator::sendProjectileHit(Actor&, HitResult const&)
ActorEventCoordinator::sendActorTeleported(Actor&)
ActorEventCoordinator::sendActorInteractedWithMob(Actor&, MinecraftEventing::InteractionType, ActorType)
