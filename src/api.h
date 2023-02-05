#pragma once

#if defined _WIN32 || defined __CYGWIN__
#  define SampleFSM_DLLIMPORT __declspec(dllimport)
#  define SampleFSM_DLLEXPORT __declspec(dllexport)
#  define SampleFSM_DLLLOCAL
#else
// On Linux, for GCC >= 4, tag symbols using GCC extension.
#  if __GNUC__ >= 4
#    define SampleFSM_DLLIMPORT __attribute__((visibility("default")))
#    define SampleFSM_DLLEXPORT __attribute__((visibility("default")))
#    define SampleFSM_DLLLOCAL __attribute__((visibility("hidden")))
#  else
// Otherwise (GCC < 4 or another compiler is used), export everything.
#    define SampleFSM_DLLIMPORT
#    define SampleFSM_DLLEXPORT
#    define SampleFSM_DLLLOCAL
#  endif // __GNUC__ >= 4
#endif // defined _WIN32 || defined __CYGWIN__

#ifdef SampleFSM_STATIC
// If one is using the library statically, get rid of
// extra information.
#  define SampleFSM_DLLAPI
#  define SampleFSM_LOCAL
#else
// Depending on whether one is building or using the
// library define DLLAPI to import or export.
#  ifdef SampleFSM_EXPORTS
#    define SampleFSM_DLLAPI SampleFSM_DLLEXPORT
#  else
#    define SampleFSM_DLLAPI SampleFSM_DLLIMPORT
#  endif // SampleFSM_EXPORTS
#  define SampleFSM_LOCAL SampleFSM_DLLLOCAL
#endif // SampleFSM_STATIC