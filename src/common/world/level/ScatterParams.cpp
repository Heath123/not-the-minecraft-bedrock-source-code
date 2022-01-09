ScatterParams::ScatteredPositions::ScatteredPositions(ScatterParams const&, RenderParams&, Random&)
ScatterParams::ScatteredPositions::nextPos()
ScatterParams::_getPos(unsigned int, BlockPos const&, Random&, RenderParams&) const
ScatterParams::ScatteredPositions::size()
ScatterParams::ScatteredPositions::empty()
ScatterParams::initMolangParams(RenderParams&, BlockPos const&, Random&)
ScatterParams::scatter(RenderParams&, BlockPos const&, Random&) const
ScatterParams::_shouldScatter(RenderParams&, Random&) const
ScatterParams::CoordinateRange::eval(unsigned int&, Random&, RenderParams&) const
ScatterParams::_parseCoordinate(Json::Value const&, ScatterParams::CoordinateRange&, std::function<std::function<float (RenderParams&, std::vector<float, std::allocator<float> > const&)> const* (std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)>)
ScatterParams::_parseExtents(Json::Value const&, ExpressionNode&, ExpressionNode&, std::function<std::function<float (RenderParams&, std::vector<float, std::allocator<float> > const&)> const* (std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)>)
ScatterParams::_parseDistribution(Json::Value const&, ScatterParams::RandomDistributionType&)
