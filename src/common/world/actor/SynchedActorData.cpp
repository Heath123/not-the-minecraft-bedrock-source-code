SynchedActorData::SynchedActorData()
SynchedActorData::SynchedActorData(SynchedActorData&&)
SynchedActorData::operator=(SynchedActorData&&)
SynchedActorData::~SynchedActorData()
SynchedActorData::packDirty()
SynchedActorData::packAll() const
SynchedActorData::assignValues(std::vector<std::unique_ptr<DataItem, std::default_delete<DataItem> >, std::allocator<std::unique_ptr<DataItem, std::default_delete<DataItem> > > > const&, Actor*)
SynchedActorData::_find(unsigned short) const
SynchedActorData::_resizeToContain(unsigned short)
SynchedActorData::_get(unsigned short)
SynchedActorData::getInt8(unsigned short) const
SynchedActorData::getShort(unsigned short) const
SynchedActorData::getInt(unsigned short) const
SynchedActorData::getInt64(unsigned short) const
SynchedActorData::getFloat(unsigned short) const
SynchedActorData::getString[abi:cxx11](unsigned short) const
SynchedActorData::getCompoundTag(unsigned short) const
SynchedActorData::getPos(unsigned short) const
SynchedActorData::getVec3(unsigned short) const
SynchedActorData::hasData(unsigned short) const
serialize<DataItem>::write(DataItem const&, BinaryStream&)
serialize<std::unique_ptr<DataItem, std::default_delete<DataItem> > >::read(ReadOnlyBinaryStream&)
