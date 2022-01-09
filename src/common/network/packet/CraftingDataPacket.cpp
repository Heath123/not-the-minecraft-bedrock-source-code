CraftingDataEntry::CraftingDataEntry()
CraftingDataEntry::CraftingDataEntry(CraftingDataEntry&&)
CraftingDataEntry::write(BinaryStream&) const
CraftingDataEntry::read(ReadOnlyBinaryStream&)
CraftingDataEntry::fillFromFurnaceRecipe(int, ItemInstance const&, Util::HashString const&)
CraftingDataEntry::addFurnaceRecipe(Recipes&) const
CraftingDataEntry::fillFromFurnaceAuxRecipe(int, ItemInstance const&, Util::HashString const&)
CraftingDataEntry::addFurnaceAuxRecipe(Recipes&) const
CraftingDataEntry::fillFromRecipe(Recipe const&)
CraftingDataEntry::fillFromMultiRecipe(MultiRecipe const&)
CraftingDataEntry::addShapedRecipe(Recipes&) const
CraftingDataEntry::addShapelessRecipe(Recipes&) const
CraftingDataEntry::addShapedChemistryRecipe(Recipes&) const
CraftingDataEntry::addShapelessChemistryRecipe(Recipes&) const
CraftingDataEntry::addShulkerBoxRecipe(Recipes&) const
CraftingDataEntry::addMultiRecipe(Recipes&) const
PotionMixDataEntry::write(BinaryStream&) const
PotionMixDataEntry::read(ReadOnlyBinaryStream&)
ContainerMixDataEntry::write(BinaryStream&) const
ContainerMixDataEntry::read(ReadOnlyBinaryStream&)
CraftingDataPacket::CraftingDataPacket()
CraftingDataPacket::write(BinaryStream&) const
CraftingDataPacket::read(ReadOnlyBinaryStream&)
