ClientboundMapItemDataPacket::ClientboundMapItemDataPacket(ActorUniqueID, signed char, std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration> >, std::allocator<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration> > > > const&, buffer_span<unsigned int>, int, int, int, int, AutomaticID<Dimension, int>, bool)
ClientboundMapItemDataPacket::ClientboundMapItemDataPacket()
ClientboundMapItemDataPacket::ClientboundMapItemDataPacket(MapItemSavedData&, Level&)
ClientboundMapItemDataPacket::read(ReadOnlyBinaryStream&)
ClientboundMapItemDataPacket::isOfType(ClientboundMapItemDataPacket::Type) const
ClientboundMapItemDataPacket::getMapId() const
ClientboundMapItemDataPacket::getMapIds() const
ClientboundMapItemDataPacket::applyToMap(MapItemSavedData&) const
ClientboundMapItemDataPacket::isTextureUpdate() const
ClientboundMapItemDataPacket::getScale() const
ClientboundMapItemDataPacket::getDimensionId() const
ClientboundMapItemDataPacket::getId() const
ClientboundMapItemDataPacket::getName[abi:cxx11]() const
ClientboundMapItemDataPacket::write(BinaryStream&) const
ClientboundMapItemDataPacket::isLocked() const
