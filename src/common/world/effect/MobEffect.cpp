MobEffect::initEffects(ResourcePackManager*)
MobEffect::addAttributeModifier(Attribute const&, std::shared_ptr<AttributeModifier>)
MobEffect::addAttributeBuff(Attribute const&, std::shared_ptr<AttributeBuff>)
MobEffect::setValueAmplifier(std::shared_ptr<Amplifier>)
MobEffect::setDurationAmplifier(std::shared_ptr<Amplifier>)
MobEffect::shutdownEffects()
MobEffect::getByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
MobEffect::getById(int)
MobEffect::getId() const
MobEffect::getComponentName() const
MobEffect::MobEffect(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
MobEffect::getResourceName[abi:cxx11]() const
MobEffect::getIconName[abi:cxx11]() const
MobEffect::applyEffects(Actor*, int, int) const
MobEffect::_createInstantBuff(std::shared_ptr<AttributeBuff> const&, int, float) const
MobEffect::_createTemporalBuff(std::shared_ptr<AttributeBuff> const&, int, int) const
MobEffect::_createAttributeModifer(std::shared_ptr<AttributeModifier> const&, int) const
MobEffect::removeEffects(Actor*)
MobEffect::applyInstantaneousEffect(Actor*, Actor*, Actor*, int, float) const
MobEffect::isHarmful() const
MobEffect::isInstantaneous() const
MobEffect::getDescriptionId[abi:cxx11]() const
MobEffect::hasIcon() const
MobEffect::getIcon() const
MobEffect::getDurationModifier() const
MobEffect::isDisabled() const
MobEffect::getColor() const
MobEffect::isVisible() const
MobEffect::formatDuration[abi:cxx11](MobEffectInstance const*)
MobEffect::clearAttributeBuffs()
MobEffect::clearAttributeModifiers()
MobEffect::getAttributeModifierValue(int, AttributeModifier const&) const
MobEffect::viewAttributeModifiers() const
