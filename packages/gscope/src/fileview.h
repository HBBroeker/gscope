#include <gtksourceview/gtksourceview.h>
#include <gtksourceview/gtksourcebuffer.h>
#include <gtksourceview/gtksourcelanguage.h>
#include <gtksourceview/gtksourcelanguagemanager.h>

#ifdef GTK3_BUILD
#include <gtksourceview/gtksourcemarkattributes.h>
#endif


// ---- Typedefs ----
typedef struct _viewWindow
{
    GtkWidget     *topWidget;
    GtkSourceView *srcViewWidget;
    gchar         *filename;
    gint          line;
    struct        _viewWindow *next;
} ViewWindow;


/* Create a new file-view window */
void FILEVIEW_create(gchar *file_name, gint line);

