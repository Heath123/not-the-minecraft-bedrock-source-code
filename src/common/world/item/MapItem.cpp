MapItem::MapItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, short)
MapItem::update(Level&, Actor&, MapItemSavedData&) const
MapItem::sampleMapData(BlockSource&, int, BlockPos const&, BlockPos const&, int, int, std::vector<MapSample, std::allocator<MapSample> >*, MapItemSavedData*, MapItemTrackedActor*)
MapItem::update(BlockSource&, BlockPos const&, MapItemSavedData&) const
MapItem::inventoryTick(ItemStack&, Level&, Actor&, int, bool) const
MapItem::getMapId(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&)
MapItem::_makeNewExplorationMap(ItemStack&, Level&, Actor*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
MapItem::setItemInstanceInfo(ItemStack&, MapItemSavedData&)
MapItem::refreshedInContainer(ItemStackBase&, Level&) const
MapItem::blockTick(ItemStack&, BlockSource&, BlockPos const&) const
MapItem::getUpdatePacket(ItemStack const&, Level&, Actor&) const
MapItem::buildDescriptionId[abi:cxx11](ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&) const
MapItem::appendFormattedHovertext(ItemStackBase const&, Level&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool) const
MapItem::isSameItem(ItemStackBase const&, ItemStackBase const&) const
MapItem::doesDisplayPlayerMarkers(ItemStack const&)
MapItem::setItemInstanceInfo(ItemInstance&, MapItemSavedData&)
MapItem::setMapNameIndex(ItemStack&, int)
MapItem::serializeMapData(std::vector<MapSample, std::allocator<MapSample> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
_mapCoordToPos(int, int, int, BlockPos const&)
renderMapChunk(Dimension&, buffer_span_mut<unsigned int>, unsigned int, BlockPos const&, MapItemSavedData::ChunkBounds)
MapItem::_scheduleMapChunkRendering(Dimension&, MapItemSavedData const&, MapItemSavedData::ChunkBounds, std::shared_ptr<bool>)
MapItem::renderBiomePreviewMap(Dimension&, MapItemSavedData&)
MapItem::setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
MapItem::getIcon(ItemStackBase const&, int, bool) const
MapItem::fixupOnLoad(ItemStackBase&, Level&) const
