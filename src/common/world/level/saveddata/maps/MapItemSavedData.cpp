MapItemSavedData::getSerializationKey[abi:cxx11](ActorUniqueID)
MapItemSavedData::MapItemSavedData(ActorUniqueID)
MapItemSavedData::setOrigin(Vec3, int, AutomaticID<Dimension, int>, bool, bool, BlockPos const&)
MapItemSavedData::_clampOriginWithinLimitedWorld(BlockPos&, Vec3 const&, int) const
MapItemSavedData::setDirty()
MapItemSavedData::setScale(int)
MapItemSavedData::setDimensionId(AutomaticID<Dimension, int>)
MapItemSavedData::enableUnlimitedTracking()
MapItemSavedData::deserialize(CompoundTag const&)
MapItemSavedData::_deserializeData(CompoundTag const&)
shouldSaveMarker(MapDecoration::Type)
MapItemSavedData::serialize(CompoundTag&) const
MapItemSavedData::save(LevelStorage&)
MapItemSavedData::getMapId() const
MapItemSavedData::trySave(LevelStorage&)
MapItemSavedData::tickCarriedBy(Actor&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&)
MapItemSavedData::_updateTrackedEntityDecorations(BlockSource&)
MapItemSavedData::_addDecoration(MapDecoration::Type, Level&, MapItemTrackedActor::UniqueId const&, Vec3 const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Color const&)
MapItemSavedData::tickByBlock(BlockPos const&, BlockSource&)
MapItemSavedData::_findTrackedMapEntity(BlockPos const&) const
MapItemSavedData::addTrackedMapEntity(BlockPos const&, BlockSource&, MapDecoration::Type)
MapItemSavedData::_updateTrackedEntityDecoration(BlockSource&, std::shared_ptr<MapItemTrackedActor>)
MapItemSavedData::_removeDecoration(MapItemTrackedActor::UniqueId const&)
MapItemSavedData::_getColorByDimension(AutomaticID<Dimension, int>)
MapItemSavedData::_updateTrackedPlayerDecorations(BlockSource&, Player&, Vec3&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, Color&, AutomaticID<Dimension, int>, MapDecoration::Type&)
MapItemSavedData::_isPlayerHoldingMap(Player&)
MapItemSavedData::_setDirtyForDecoration(MapDecoration const&)
MapItemSavedData::addTrackedMapEntity(Actor&, MapDecoration::Type)
MapItemSavedData::_addTrackedMapEntity(MapItemTrackedActor::UniqueId const&, BlockSource&, MapDecoration::Type)
MapItemSavedData::_removeTrackedMapEntity(MapItemTrackedActor::UniqueId const&)
MapItemSavedData::removeTrackedMapEntity(Actor&)
MapItemSavedData::removeTrackedMapEntity(BlockPos const&)
MapItemSavedData::getUpdatePacket(ItemStack const&, Level&, Actor&) const
MapItemSavedData::_findTrackedMapEntity(Actor&) const
MapItemSavedData::getUpdatePacket(Level&, BlockPos const&) const
MapItemSavedData::setPixelDirty(unsigned int, unsigned int)
MapItemSavedData::setPixel(unsigned int, unsigned int, unsigned int)
MapItemSavedData::getTrackedMapEntity(Actor&)
MapItemSavedData::getTrackedMapEntity(BlockPos const&, BlockSource&)
MapItemSavedData::pointInMapBounds(float, float)
MapItemSavedData::addDecoration(MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>)
MapItemSavedData::replaceDecorations(std::vector<std::shared_ptr<MapDecoration>, std::allocator<std::shared_ptr<MapDecoration> > >, std::vector<MapItemTrackedActor::UniqueId, std::allocator<MapItemTrackedActor::UniqueId> >)
MapItemSavedData::replacePixels(buffer_span<unsigned int>, unsigned int, unsigned int, unsigned int, unsigned int)
MapItemSavedData::getParentMapId() const
MapItemSavedData::setParentMapId(ActorUniqueID)
MapItemSavedData::hasParentMap() const
MapItemSavedData::isAdjacent(MapItemSavedData const&, int) const
MapItemSavedData::isFullyExplored() const
MapItemSavedData::getPixels() const
MapItemSavedData::copyMapData(MapItemSavedData const&)
MapItemSavedData::getFullDataPacket() const
MapItemSavedData::setLocked()
MapItemSavedData::isLocked() const
