
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and every time you save your project.
* Do not hand edit this file.
********************************************************************************/
#include "app_main.h"
#include "uib_views_inc.h"

void connection_view1_button1_onclicked(uib_Menu_Inicial_view_context *vc, Evas_Object *obj, void *event_info){
	view1_button1_onclicked(vc, obj, event_info);
	Elm_Object_Item* navi_item = uib_util_push_view("Configuracion_PIN");
	view1_button1_onclicked_post(navi_item, vc, obj, event_info);
}
