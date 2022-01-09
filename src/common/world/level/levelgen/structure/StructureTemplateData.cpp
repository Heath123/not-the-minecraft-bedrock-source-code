StructureTemplateData::StructureTemplateData()
StructureTemplateData::~StructureTemplateData()
StructureTemplateData::~StructureTemplateData()
StructureTemplateData::load(CompoundTag const&)
StructureTemplateData::_parseFormatVersion(CompoundTag const&)
StructureTemplateData::_parseSize(CompoundTag const&)
StructureTemplateData::_parseStructureWorldOrigin(CompoundTag const&)
StructureTemplateData::_parseStructureTag(CompoundTag const&)
StructureTemplateData::_parseBlockIndices(CompoundTag const&)
StructureTemplateData::_validateSizeAndBlockIndicesSize() const
StructureTemplateData::_parsePalettes(CompoundTag const&)
StructureTemplateData::_parseEntities(CompoundTag const&)
StructureTemplateData::save() const
StructureTemplateData::_saveFormatVersion(CompoundTag&) const
StructureTemplateData::_saveSize(CompoundTag&) const
StructureTemplateData::_saveStructureWorldOrigin(CompoundTag&) const
StructureTemplateData::_saveStructureTag(CompoundTag&) const
StructureTemplateData::clear()
StructureTemplateData::getFormatVersion() const
StructureTemplateData::getSize() const
StructureTemplateData::setSize(BlockPos const&)
StructureTemplateData::getStructureWorldOrigin() const
StructureTemplateData::setStructureWorldOrigin(BlockPos const&)
StructureTemplateData::getBlockIndices() const
StructureTemplateData::setBlockIndices(std::vector<int, std::allocator<int> >)
StructureTemplateData::getExtraBlockIndices() const
StructureTemplateData::setExtraBlockIndices(std::vector<int, std::allocator<int> >)
StructureTemplateData::addPalette(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, StructureBlockPalette)
StructureTemplateData::getPalette(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
StructureTemplateData::getEntityData() const
StructureTemplateData::addEntityData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> >)
StructureTemplateData::_contentErrorMissingField(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
StructureTemplateData::_saveBlockIndices(CompoundTag&) const
StructureTemplateData::_savePalettes(CompoundTag&) const
StructureTemplateData::_saveEntities(CompoundTag&) const
StructureTemplateData::_setFormatVersion(int)
