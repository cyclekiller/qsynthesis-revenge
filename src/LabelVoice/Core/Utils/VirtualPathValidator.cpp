#include "VirtualPathValidator.h"

#include "MathHelper.h"
#include "SystemHelper.h"

QRegExp VirtualPathValidator::_noSurroundingWhitespaces(R"(^(?!\s).*(?!\s)$)");

QRegExp VirtualPathValidator::_containsBadCharacters("^(?!\\s)[" +
                                                     QRegExp::escape(Sys::invalidFileNameChars()) +
                                                     "]");

bool VirtualPathValidator::IsValidName(const QString &name) {

    return QRegExp(_noSurroundingWhitespaces).exactMatch(name) &&
           !_containsBadCharacters.exactMatch(name);
}


bool VirtualPathValidator::IsValidPath(const QString &path) {
    return path.isEmpty() || Math::batchCheck(path.split('/'), IsValidName);
}
