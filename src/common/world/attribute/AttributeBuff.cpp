AttributeBuffInfo::AttributeBuffInfo(AttributeBuffType)
AttributeBuff::AttributeBuff(float, int, AttributeBuffType)
AttributeBuff::~AttributeBuff()
AttributeBuff::~AttributeBuff()
AttributeBuff::getAmount() const
AttributeBuff::getType() const
AttributeBuff::getInfo() const
AttributeBuff::setValueAmplifier(std::shared_ptr<Amplifier>)
AttributeBuff::setDurationAmplifier(std::shared_ptr<Amplifier>)
AttributeBuff::setAmplificationAmount(int, float)
AttributeBuff::setSource(Actor*)
AttributeBuff::getId() const
AttributeBuff::setId(unsigned long)
AttributeBuff::getOperand() const
AttributeBuff::setOperand(int)
AttributeBuff::operator==(AttributeBuff const&) const
InstantaneousAttributeBuff::InstantaneousAttributeBuff(float, AttributeBuffType)
InstantaneousAttributeBuff::~InstantaneousAttributeBuff()
InstantaneousAttributeBuff::~InstantaneousAttributeBuff()
InstantaneousAttributeBuff::isInstantaneous() const
InstantaneousAttributeBuff::isSerializable() const
TemporalAttributeBuff::TemporalAttributeBuff(float, int, AttributeBuffType, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
TemporalAttributeBuff::~TemporalAttributeBuff()
TemporalAttributeBuff::~TemporalAttributeBuff()
TemporalAttributeBuff::shouldBuff() const
TemporalAttributeBuff::isComplete() const
TemporalAttributeBuff::getDuration() const
TemporalAttributeBuff::getLifeTimer() const
TemporalAttributeBuff::getBaseAmount() const
TemporalAttributeBuff::serializationSetLifeTime(int)
TemporalAttributeBuff::tick()
TemporalAttributeBuff::isInstantaneous() const
TemporalAttributeBuff::isSerializable() const
TemporalAttributeBuff::setDurationAmplifier(std::shared_ptr<Amplifier>)
AttributeBuff::buffTypeToDamageCause(AttributeBuffType)
