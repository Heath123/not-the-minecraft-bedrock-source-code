AttributeInstance::AttributeInstance(BaseAttributeMap*, Attribute const*)
AttributeInstance::AttributeInstance()
AttributeInstance::~AttributeInstance()
AttributeInstance::~AttributeInstance()
AttributeInstance::getAttribute() const
AttributeInstance::getModifiers(int) const
AttributeInstance::getModifiers() const
AttributeInstance::getModifier(mce::UUID const&) const
AttributeInstance::hasModifier(std::shared_ptr<AttributeModifier>) const
AttributeInstance::hasModifier(AttributeModifier const&) const
AttributeInstance::addModifiers(std::vector<std::shared_ptr<AttributeModifier>, std::allocator<std::shared_ptr<AttributeModifier> > >*)
AttributeInstance::addModifier(AttributeModifier const&)
AttributeInstance::addModifier(std::shared_ptr<AttributeModifier>)
AttributeInstance::_calculateValue()
AttributeInstance::_setDirty()
AttributeInstance::removeModifier(std::shared_ptr<AttributeModifier>)
AttributeInstance::removeModifier(AttributeModifier const&)
AttributeInstance::getModifiers(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
AttributeInstance::removeModifiers(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
AttributeInstance::removeModifier(mce::UUID const&)
AttributeInstance::removeModifiers()
AttributeInstance::getCurrentValue() const
AttributeInstance::recalculateModifiers()
AttributeInstance::_getAppliedModifiers(int)
AttributeInstance::_sanitizeValue(float)
AttributeInstance::_calculateValue(AttributeBuff const&)
AttributeInstance::getMinValue() const
AttributeInstance::getDefaultValue(int) const
AttributeInstance::getMaxValue() const
AttributeInstance::resetToMinValue()
AttributeInstance::resetToDefaultValue()
AttributeInstance::resetToMaxValue()
AttributeInstance::setDefaultValue(float, int)
AttributeInstance::setDefaultValueOnly(float)
AttributeInstance::setRange(float, float, float)
AttributeInstance::serializationSetRange(float, float, float)
AttributeInstance::serializationSetValue(float, int, float)
AttributeInstance::addBuff(AttributeBuff const&)
AttributeInstance::addBuff(std::shared_ptr<AttributeBuff>)
AttributeInstance::hasTemporalBuffs() const
AttributeInstance::getBuffs() const
AttributeInstance::removeBuffs()
AttributeInstance::tick()
AttributeInstance::setMaxValue(float)
AttributeInstance::setMinValue(float)
AttributeInstance::registerListener(AttributeInstance const&)
AttributeInstance::getHandle() const
AttributeInstance::notify(long)
AttributeInstance::setDelegate(std::shared_ptr<AttributeInstanceDelegate>)
AttributeInstance::removeBuff(std::shared_ptr<AttributeBuff>)
AttributeInstance::removeBuff(AttributeBuff const&)
AttributeInstance::getListeners() const
AttributeInstance::isValid() const
