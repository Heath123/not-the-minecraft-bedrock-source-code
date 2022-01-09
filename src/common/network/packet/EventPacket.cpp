EventPacket::EventPacket(Player const*, EventPacket::Data const&)
EventPacket::EventPacket()
EventPacket::EventPacket(Player const*, MinecraftEventing::AchievementIds, bool)
EventPacket::EventPacket(ActorUniqueID, MinecraftEventing::AchievementIds, bool)
EventPacket::EventPacket(Player const*, AutomaticID<Dimension, int>)
EventPacket::EventPacket(Player const*, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>)
EventPacket::EventPacket(Player const*, Actor const*, MinecraftEventing::InteractionType)
EventPacket::EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, ActorType)
EventPacket::EventPacket(Player const*, Actor const*, Mob const*, ActorDamageCause, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, ActorType)
EventPacket::EventPacket(Player const*, bool, Actor const*, Mob const*, ActorDamageCause)
EventPacket::EventPacket(Player const*, short, unsigned int, short)
EventPacket::EventPacket(Player const*, int, int, ActorDamageCause, bool)
EventPacket::EventPacket(Player const*, int, Actor const*)
EventPacket::EventPacket(Player const*, EventPacket::AgentResult, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
EventPacket::EventPacket(Player const*, EventPacket::AgentResult, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
EventPacket::EventPacket(Player const*, int, int, int, int, int)
EventPacket::EventPacket(Player const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
EventPacket::EventPacket(Player const*, std::tuple<int, int, int>, bool)
EventPacket::EventPacket(Player const*, Mob const*)
EventPacket::EventPacket(Player const*, Raid const&, bool)
EventPacket::EventPacket(Player const&, float, float)
EventPacket::EventPacket(Player const&, MovementEventType, float, float, float, float, float)
EventPacket::getId() const
EventPacket::write(BinaryStream&) const
EventPacket::read(ReadOnlyBinaryStream&)
EventPacket::getEventData() const
EventPacket::getPlayerUniqueId() const
EventPacket::usePlayerID() const
