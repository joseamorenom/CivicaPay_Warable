
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/
		#include "g_inc_uib.h"
#include "uib_views.h"
#include "uib_views_inc.h"
#include "uib_app_manager.h"


/* event handler declarations */

uib_view_context* uib_view_Rutas_create(Evas_Object* parent, void* create_callback_param) {
	uib_Rutas_view_context* vc = calloc(1, sizeof(uib_Rutas_view_context));
	vc->parent = parent;
	vc->view_name = "Rutas";
	vc->indicator_state = ELM_WIN_INDICATOR_SHOW;
	vc->is_user_view = false;
	uib_app_manager_get_instance()->add_view_context((uib_view_context*)vc);
	if (!vc->grid15) {
		vc->grid15= elm_grid_add(parent);
		vc->root_container = vc->grid15;
	}
	uib_views_get_instance()->set_targeted_view((uib_view_context*)vc);

	//bind event handler


	evas_object_data_set(vc->root_container, KEY_VIEW_CONTEXT, vc);
	uib_views_create_callback(vc, evas_object_evas_get(vc->root_container), vc->root_container, create_callback_param);
	evas_object_event_callback_add(vc->root_container, EVAS_CALLBACK_DEL, (Evas_Object_Event_Cb)uib_views_destroy_callback, vc);

	return (uib_view_context*)vc;
}
void uib_Rutas_config_CIRCLE_360x360_portrait() {
	uib_app_manager_st* uib_app_manager = uib_app_manager_get_instance();
	uib_Rutas_view_context* vc = (uib_Rutas_view_context*)uib_app_manager->find_view_context("Rutas");
	if(!vc) {
		return;
	}
	if(vc->grid15) {
		elm_grid_clear(vc->grid15, EINA_FALSE);
		evas_object_size_hint_align_set(vc->grid15, -1.0, -1.0);
		if (!vc->bg15) {
			vc->bg15 = elm_bg_add(vc->grid15);
		}
		if(vc->bg15) {
			evas_object_size_hint_align_set(vc->bg15, -1.0, -1.0);
			int hexValue = strtol("#ffffff"+1, NULL, 16);
			int r = (hexValue&0xFF0000)>>16;
			int g = (hexValue&0xFF00)>>8;
			int b = (hexValue&0xFF);
			elm_bg_color_set(vc->bg15, r, g, b);
			evas_object_show(vc->bg15);
		}
		if (!vc->button14) {
			vc->button14 = elm_button_add(vc->grid15);
		}
		if (vc->button14) {
			evas_object_size_hint_align_set(vc->button14, -1.0, -1.0);
			elm_object_style_set(vc->button14,"bottom");
			evas_object_show(vc->button14);
		}
		elm_grid_pack(vc->grid15, vc->bg15, -27, -14, 1058, 1106);
	}
}
