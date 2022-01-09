AnimationComponent::getAnimationResourceDefinitionMap() const
AnimationComponent::getAnimationComponentInitFunction() const
AnimationComponent::initializeServerAnimationComponent(Actor&, AnimationResourceDefinitionMap&, std::function<void (ActorAnimationPlayer&)>)
AnimationComponent::getRenderParams()
AnimationComponent::initInstanceSpecificAnimationData()
AnimationComponent::setupDeltaTimeAndLifeTimeParams(bool)
AnimationComponent::initializeClientAnimationComponent(std::function<void (ActorAnimationPlayer&)>)
AnimationComponent::applyAnimations(bool)
AnimationComponent::_getCurrentFrameIndex()
AnimationComponent::setDefaultPoses()
AnimationComponent::getAllBoneOrientations()
AnimationComponent::setDirty()
AnimationComponent::getAnimationPlayers()
AnimationComponent::ChildAnimationComponentInfo::setDirty()
AnimationComponent::forceNextUpdateToApplyAnimations()
AnimationComponent::ensureClientAnimationComponentIsInitialized()
AnimationComponent::setDefaultPose(SkeletalHierarchyIndex)
AnimationComponent::getBoneOrientations(SkeletalHierarchyIndex, bool)
AnimationComponent::isInitialized()
AnimationComponent::serverUpdate(Actor&)
AnimationComponent::prepRenderParamsForActor(Actor&, BaseActorRenderContext*, DataDrivenModel*, float)
AnimationComponent::prepRenderParamsForActorRendering(ActorRenderData&, BaseActorRenderContext*, DataDrivenModel*, float)
AnimationComponent::createAnimationPlayer(HashedString const&, ExpressionNode const&)
AnimationComponent::findAnimation(HashedString const&)
AnimationComponent::getAnimationControllerPlayer(HashedString const&, bool)
AnimationComponent::getAnimationControllerStatePlayer(HashedString const&, HashedString const&, bool)
AnimationComponent::getRegisteredAnimationLength(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
AnimationComponent::addAnimationToController(HashedString const&, HashedString const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
AnimationComponent::isAnimationRegistered(HashedString const&) const
AnimationComponent::tryRegisterAnimation(HashedString const&, ActorSkeletalAnimationPtr)
AnimationComponent::playAnimation(HashedString const&, float, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
AnimationComponent::setSingleAnimationPlayer(ActorAnimationPlayer*)
AnimationComponent::haveInitializedScriptsRun() const
AnimationComponent::setInitializedScriptsRun(bool)
AnimationComponent::findBoneMapping(SkeletalHierarchyIndex, HashedString const&) const
AnimationComponent::getBoneOrientations(SkeletalHierarchyIndex, bool) const
AnimationComponent::getLocators()
AnimationComponent::getLocator(HashedString const&)
AnimationComponent::getChildAnimationComponents()
AnimationComponent::setCurrentAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const*)
AnimationComponent::getCurrentAnimationControllerStatePlayer() const
AnimationComponent::getAllBoneOrientations() const
AnimationComponent::numSkeletalHierarchies() const
AnimationComponent::getAnimationComponent(AnimationComponentGroup, AnimationComponentID)
AnimationComponent::_getAnimationComponentMapLock()
AnimationComponent::_getAllAnimationComponents(AnimationComponentGroup)
AnimationComponent::incrementCurrentClientFrameIndex()
AnimationComponent::incrementCurrentServerFrameIndex()
AnimationComponent::AnimationComponent(AnimationComponentGroup, AnimationComponentID const&)
AnimationComponent::~AnimationComponent()
AnimationComponent::_removeAnimationComponentFromGlobalMap(AnimationComponentGroup, AnimationComponentID const&)
AnimationComponentID::AnimationComponentID()
AnimationComponentID::AnimationComponentID(ActorUniqueID const&, unsigned short, AttachableSlotIndex)
AnimationComponentID::operator<(AnimationComponentID const&) const
AnimationComponentID::getHash() const
AnimationComponentID::operator==(AnimationComponentID const&) const
AnimationComponent::ChildAnimationComponentInfo::getAnimationComponent(Actor&, unsigned short, AttachableSlotIndex)
