/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *label1;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkWidget *entry_int1;
  GtkWidget *entry_int2;
  GtkWidget *calculer;
  GtkWidget *label4;
  GtkWidget *res;
  GtkWidget *rb_plus;
  GSList *rb_plus_group = NULL;
  GtkWidget *rb_moin;
  GtkWidget *rb_fois;
  GtkWidget *rb_div;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("Mini calculatirce"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  label1 = gtk_label_new (_("Veuillez saisir deux entiers "));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 88, 16);
  gtk_widget_set_size_request (label1, 216, 24);

  label2 = gtk_label_new (_("Entier1"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 16, 72);
  gtk_widget_set_size_request (label2, 112, 16);

  label3 = gtk_label_new (_("Entier2"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 8, 112);
  gtk_widget_set_size_request (label3, 112, 16);

  entry_int1 = gtk_entry_new ();
  gtk_widget_show (entry_int1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry_int1, 112, 64);
  gtk_widget_set_size_request (entry_int1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_int1), 8226);

  entry_int2 = gtk_entry_new ();
  gtk_widget_show (entry_int2);
  gtk_fixed_put (GTK_FIXED (fixed1), entry_int2, 104, 104);
  gtk_widget_set_size_request (entry_int2, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_int2), 8226);

  calculer = gtk_button_new_with_mnemonic (_("calculer"));
  gtk_widget_show (calculer);
  gtk_fixed_put (GTK_FIXED (fixed1), calculer, 288, 224);
  gtk_widget_set_size_request (calculer, 66, 29);

  label4 = gtk_label_new (_("Resultat="));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 40, 272);
  gtk_widget_set_size_request (label4, 104, 16);

  res = gtk_label_new ("");
  gtk_widget_show (res);
  gtk_fixed_put (GTK_FIXED (fixed1), res, 120, 272);
  gtk_widget_set_size_request (res, 112, 24);

  rb_plus = gtk_radio_button_new_with_mnemonic (NULL, _("+"));
  gtk_widget_show (rb_plus);
  gtk_fixed_put (GTK_FIXED (fixed1), rb_plus, 40, 168);
  gtk_widget_set_size_request (rb_plus, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rb_plus), rb_plus_group);
  rb_plus_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rb_plus));

  rb_moin = gtk_radio_button_new_with_mnemonic (NULL, _("-"));
  gtk_widget_show (rb_moin);
  gtk_fixed_put (GTK_FIXED (fixed1), rb_moin, 184, 176);
  gtk_widget_set_size_request (rb_moin, 108, 16);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rb_moin), rb_plus_group);
  rb_plus_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rb_moin));

  rb_fois = gtk_radio_button_new_with_mnemonic (NULL, _("*"));
  gtk_widget_show (rb_fois);
  gtk_fixed_put (GTK_FIXED (fixed1), rb_fois, 56, 192);
  gtk_widget_set_size_request (rb_fois, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rb_fois), rb_plus_group);
  rb_plus_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rb_fois));

  rb_div = gtk_radio_button_new_with_mnemonic (NULL, _("/"));
  gtk_widget_show (rb_div);
  gtk_fixed_put (GTK_FIXED (fixed1), rb_div, 176, 192);
  gtk_widget_set_size_request (rb_div, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (rb_div), rb_plus_group);
  rb_plus_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (rb_div));

  g_signal_connect ((gpointer) calculer, "clicked",
                    G_CALLBACK (on_calculer_clicked),
                    NULL);
  g_signal_connect ((gpointer) rb_plus, "toggled",
                    G_CALLBACK (on_rb_plus_toggled),
                    NULL);
  g_signal_connect ((gpointer) rb_moin, "toggled",
                    G_CALLBACK (on_rb_moin_toggled),
                    NULL);
  g_signal_connect ((gpointer) rb_fois, "toggled",
                    G_CALLBACK (on_rb_fois_toggled),
                    NULL);
  g_signal_connect ((gpointer) rb_div, "toggled",
                    G_CALLBACK (on_rb_div_toggled),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, entry_int1, "entry_int1");
  GLADE_HOOKUP_OBJECT (window1, entry_int2, "entry_int2");
  GLADE_HOOKUP_OBJECT (window1, calculer, "calculer");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");
  GLADE_HOOKUP_OBJECT (window1, res, "res");
  GLADE_HOOKUP_OBJECT (window1, rb_plus, "rb_plus");
  GLADE_HOOKUP_OBJECT (window1, rb_moin, "rb_moin");
  GLADE_HOOKUP_OBJECT (window1, rb_fois, "rb_fois");
  GLADE_HOOKUP_OBJECT (window1, rb_div, "rb_div");

  return window1;
}
