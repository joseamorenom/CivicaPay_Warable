

#ifndef __VIEW_DATA_H__
#define __VIEW_DATA_H__

#include <Elementary.h>
#include "uib_views.h"

/**
 * @brief Forward declaration of model
 */
typedef struct _uib_view_data {
	Evas_Object* win;

	uib_view_context* Menu_Inicial;
	uib_view_context* Configuracion_PIN;
	uib_view_context* Menu_2;
	uib_view_context* Menu_Life;
	uib_view_context* view6;
	uib_view_context* Menu_Pagos;
	uib_view_context* Pago_Transporte;
	uib_view_context* Trans_Neg;
	uib_view_context* Trans_aprob;
	uib_view_context* view12;
	uib_view_context* view13;
	uib_view_context* view14;
	uib_view_context* Boton_Panico;
	uib_view_context* Rutas;
	uib_view_context* Report;
} uib_view_data;

static uib_view_data* view_data;

uib_view_data* get_uib_view_data();

#endif /* __VIEW_DATA_H__ */

