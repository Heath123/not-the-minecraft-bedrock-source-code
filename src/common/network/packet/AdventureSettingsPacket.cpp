AdventureSettingsPacket::AdventureSettingsPacket()
AdventureSettingsPacket::AdventureSettingsPacket(AdventureSettings const&, Abilities const&, ActorUniqueID, bool)
AdventureSettingsPacket::set(AdventureSettingsPacket::Flags, bool)
AdventureSettingsPacket::setPermissions(unsigned int&, AdventureSettingsPacket::PermissionsFlags, bool)
AdventureSettingsPacket::getId() const
AdventureSettingsPacket::getName[abi:cxx11]() const
AdventureSettingsPacket::write(BinaryStream&) const
AdventureSettingsPacket::read(ReadOnlyBinaryStream&)
AdventureSettingsPacket::fillIn(AdventureSettings&, Abilities&) const
AdventureSettingsPacket::isSet(AdventureSettingsPacket::Flags) const
AdventureSettingsPacket::isSetPermissions(unsigned int const&, AdventureSettingsPacket::PermissionsFlags) const
AdventureSettingsPacket::set(AdventureSettingsPacket::Flags)
AdventureSettingsPacket::clear(AdventureSettingsPacket::Flags)
AdventureSettingsPacket::toggle(AdventureSettingsPacket::Flags)
AdventureSettingsPacket::setPermissions(unsigned int&, AdventureSettingsPacket::PermissionsFlags)
AdventureSettingsPacket::clearPermissions(unsigned int&, AdventureSettingsPacket::PermissionsFlags)
