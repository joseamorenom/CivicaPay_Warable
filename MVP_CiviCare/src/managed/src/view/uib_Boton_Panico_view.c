
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

uib_view_context* uib_view_Boton_Panico_create(Evas_Object* parent, void* create_callback_param) {
	uib_Boton_Panico_view_context* vc = calloc(1, sizeof(uib_Boton_Panico_view_context));
	vc->parent = parent;
	vc->view_name = "Boton_Panico";
	vc->indicator_state = ELM_WIN_INDICATOR_SHOW;
	vc->is_user_view = false;
	uib_app_manager_get_instance()->add_view_context((uib_view_context*)vc);
	if (!vc->grid14) {
		vc->grid14= elm_grid_add(parent);
		vc->root_container = vc->grid14;
	}
	uib_views_get_instance()->set_targeted_view((uib_view_context*)vc);

	//bind event handler


	evas_object_data_set(vc->root_container, KEY_VIEW_CONTEXT, vc);
	uib_views_create_callback(vc, evas_object_evas_get(vc->root_container), vc->root_container, create_callback_param);
	evas_object_event_callback_add(vc->root_container, EVAS_CALLBACK_DEL, (Evas_Object_Event_Cb)uib_views_destroy_callback, vc);

	return (uib_view_context*)vc;
}
void uib_Boton_Panico_config_CIRCLE_360x360_portrait() {
	uib_app_manager_st* uib_app_manager = uib_app_manager_get_instance();
	uib_Boton_Panico_view_context* vc = (uib_Boton_Panico_view_context*)uib_app_manager->find_view_context("Boton_Panico");
	if(!vc) {
		return;
	}
	if(vc->grid14) {
		elm_grid_clear(vc->grid14, EINA_FALSE);
		evas_object_size_hint_align_set(vc->grid14, -1.0, -1.0);		evas_object_size_hint_weight_set(vc->grid14, 1.0, 1.0);		elm_grid_size_set(vc->grid14, 1000, 1000);
		if (!vc->bg14) {
			vc->bg14 = elm_bg_add(vc->grid14);
		}
		if(vc->bg14) {
			evas_object_size_hint_align_set(vc->bg14, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->bg14, 1.0, 1.0);			elm_bg_option_set(vc->bg14, (Elm_Bg_Option)ELM_BG_OPTION_SCALE);
			int hexValue = strtol("#ffffff"+1, NULL, 16);
			int r = (hexValue&0xFF0000)>>16;
			int g = (hexValue&0xFF00)>>8;
			int b = (hexValue&0xFF);
			elm_bg_color_set(vc->bg14, r, g, b);
			evas_object_show(vc->bg14);
		}
		if (!vc->PANICO) {
			vc->PANICO = elm_button_add(vc->grid14);
		}
		if (vc->PANICO) {
			evas_object_size_hint_align_set(vc->PANICO, -1.0, -1.0);			evas_object_size_hint_weight_set(vc->PANICO, 1.0, 1.0);			elm_object_text_set(vc->PANICO,_UIB_LOCALE("P??NICO"));
			elm_object_style_set(vc->PANICO,"default");
			evas_object_show(vc->PANICO);
		}
		elm_grid_pack(vc->grid14, vc->bg14, -25, -66, 1067, 1085);		elm_grid_pack(vc->grid14, vc->PANICO, 170, 338, 642, 359);		evas_object_show(vc->grid14);
	}
}

