
/* VERSION_ANNOUNCE is usually a NULL string.  It is reserved for really big announcements */

#if 0 // Version 1.44 special annoucement
#define VERSION_ANNOUNCE \
"<span color=\"red\" weight=\"bold\">Major Feature Introduction:  </span>" \
"G-Scope now provides cross-referencing of Protobuf Compiler output files.\n"\
"The new functionality is automatic as long as you have '.proto' in your Source File Search suffix list.\n\n"

// Version 1.45 special announcement
#define VERSION_ANNOUNCE \
"<span color=\"blue\" weight=\"bold\">New Feature Introduction:\n</span>" \
"The G-Scope search results list now provides a context pop-up menu.\n"\
"Right-click (or shift-F10) on a specific search result item to open the menu.\n"\
"The new context menu provides 3 functions:\n"\
"    1) Open-terminal (in containing folder)\n"\
"    2) Open-file-manager (in containing folder)\n"\
"    3) Quickview (Open file with built-in file viewer).\n\n"
#endif
// Version 2.1, 2.2 special announcement
#define VERSION_ANNOUNCE \
"Welcome to the <span color=\"blue\" weight=\"bold\">Open Source</span> version of Gscope.\n" \
"This application is provided to the open source community\n" \
"courtesy of Hewlett Packard Inc.\n\n"

