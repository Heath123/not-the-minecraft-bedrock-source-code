PortalForcer::PortalForcer(Level&)
PortalForcer::force(Actor&)
PortalForcer::findPortal(AutomaticID<Dimension, int>, BlockPos const&, int, BlockPos&) const
PortalForcer::travelPortal(Actor&, BlockPos const&, AutomaticID<Dimension, int>) const
PortalForcer::createPortal(Actor const&, int)
PortalForcer::addPortalRecord(AutomaticID<Dimension, int>, PortalShape const&)
PortalForcer::portalRecordExists(AutomaticID<Dimension, int>, PortalRecord const&) const
PortalForcer::addPortalRecord(AutomaticID<Dimension, int>, PortalRecord)
PortalForcer::removePortalRecord(BlockSource&, BlockPos const&)
PortalForcer::printPortalRecords(AutomaticID<Dimension, int>) const
PortalForcer::deserialize(CompoundTag const&)
PortalForcer::serialize(CompoundTag&) const
