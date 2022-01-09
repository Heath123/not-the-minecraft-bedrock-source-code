ContextMessage::ContextMessage(LogArea, LogLevel, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ContextMessageLoggerOptions::ContextMessageLoggerOptions()
ContextMessageLoggerOptions::storeAllMessages()
ContextMessageLoggerOptions::storeMessages(LogLevel, bool)
ContextMessageLoggerOptions::assertIfMessageTypeWasReceived(LogLevel, bool)
ContextMessageLoggerOptions::assertInDestructorIfMessageTypeWasReceived(LogLevel, bool)
ContextMessageLoggerOptions::outputAllMessagesOnDestruction()
ContextMessageLoggerOptions::allowMessagesToPostToParentMessageLoggers()
ContextMessageLoggerOptions::shouldStoreMessages(LogLevel)
ContextMessageLoggerOptions::shouldAssertIfMessageTypeWasReceived(LogLevel)
ContextMessageLoggerOptions::shouldAssertInDestructorIfMessageTypeWasReceived(LogLevel)
ContextMessageLoggerOptions::shouldMessagePostToParentMessageLoggers()
ContextMessageLoggerOptions::shouldOutputAllMessagesOnDestruction()
ContextMessageLogger::ContextMessageLogger(ContextMessageLoggerOptions const&)
ContextMessageLogger::~ContextMessageLogger()
ContextMessageLogger::shouldOutputAllMessagesOnDestruction()
ContextMessageLogger::~ContextMessageLogger()
ContextMessageLogger::log(LogArea, LogLevel, char const*)
ContextMessageLogger::didReceiveMessages() const
ContextMessageLogger::didReceiveMessageOfType(LogLevel) const
ContextMessageLogger::shouldMessagePostToParentMessageLoggers()
ContextMessageLogger::getMessage[abi:cxx11]() const
ContextMessageLogger::getMessageArray() const
ContextMessageLogger::getMessageArray[abi:cxx11](LogArea) const
ContextMessageLogger::getMessageArray[abi:cxx11](LogLevel) const
ContextMessageLogger::getMessageArray[abi:cxx11](LogArea, LogLevel) const
