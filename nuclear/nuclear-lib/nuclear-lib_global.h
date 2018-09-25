#ifndef NUCLEARLIB_GLOBAL_H
#define NUCLEARLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(NUCLEARLIB_LIBRARY)
#  define NUCLEARLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define NUCLEARLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // NUCLEARLIB_GLOBAL_H
