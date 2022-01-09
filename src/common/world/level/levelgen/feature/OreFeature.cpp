OreFeature::OreFeature()
OreFeature::OreFeature(int, Block const*, std::vector<Block const*, std::allocator<Block const*> >&&)
OreFeature::place(IBlockPlacementTarget&, BlockPos const&, Random&) const
OreFeature::_isReplaceable(Block const&) const
void FeatureLoading::_buildSchema<OreFeature>(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, FeatureLoading::FeatureRootParseContext>, FeatureLoading::ConcreteFeatureHolder<OreFeature> >&)
