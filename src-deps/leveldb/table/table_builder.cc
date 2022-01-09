leveldb::TableBuilder::TableBuilder(leveldb::Options const&, leveldb::WritableFile*)
leveldb::TableBuilder::~TableBuilder()
leveldb::TableBuilder::ChangeOptions(leveldb::Options const&)
leveldb::TableBuilder::Add(leveldb::Slice const&, leveldb::Slice const&)
leveldb::TableBuilder::Flush()
leveldb::TableBuilder::WriteBlock(leveldb::BlockBuilder*, leveldb::BlockHandle*)
leveldb::TableBuilder::WriteRawBlock(leveldb::Slice const&, leveldb::Compressor*, leveldb::BlockHandle*)
leveldb::TableBuilder::status() const
leveldb::TableBuilder::Finish()
leveldb::TableBuilder::Abandon()
leveldb::TableBuilder::NumEntries() const
leveldb::TableBuilder::FileSize() const
