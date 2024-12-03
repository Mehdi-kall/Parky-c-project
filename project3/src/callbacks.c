#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
int op=0;

void
on_calculer_clicked                    (GtkWidget       *og,
                                        gpointer         user_data)
{
char E1[20],E2[20],RES[20];
GtkWidget *e1,*e2,*res,*rb0,*rb1,*rb2,*rb3;
e1=lookup_widget(og,"entry_int1");
e2=lookup_widget(og,"entry_int2");
res=lookup_widget(og,"res");
rb0=lookup_widget(og,"rb_plus");
rb1=lookup_widget(og,"rb_moin");
rb2=lookup_widget(og,"rb_fois");
rb3=lookup_widget(og,"rb_div");
strcpy(E1,gtk_entry_get_text(GTK_ENTRY(e1)));
strcpy(E2,gtk_entry_get_text(GTK_ENTRY(e2)));
int E1_int,E2_int,RES_int;
E1_int=atoi(E1);E2_int=atoi(E2);
RES_int=calculer(E1_int,E2_int,op);
sprintf(RES , "%d", RES_int);
gtk_label_set_text(GTK_LABEL(res),RES);

}





void
on_rb_moin_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))) op=1;
}


void
on_rb_plus_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))) op=0;
}


void
on_rb_fois_toggled                     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))) op=2;
}


void
on_rb_div_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))) op=3;
}

