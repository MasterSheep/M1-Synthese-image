#include "../structure/Shape.h"

/**************************************************************************************/
/* Function   -> display a "sphere" shape with only square faces.                    */
/* Parameters -> shape "Shape", scale factor "G3Xvector", camera distance "double". */
/* Return     -> nothing.                                                          */
/**********************************************************************************/
void draw_faces_sphere(struct _shape_* shape, G3Xvector scale_factor, double dcam);

/**************************************************************************************/
/* Function   -> display a "sphere" shape with only pointes.                         */
/* Parameters -> shape "Shape", scale factor "G3Xvector", camera distance "double". */
/* Return     -> nothing.                                                          */
/**********************************************************************************/
void draw_points_sphere(struct _shape_* shape, G3Xvector scale_factor, double dcam);

/*****************************************************************************/
/* Function   -> initialize all parameters of the "sphere" shape reference. */
/* Parameters -> nothing.                                                  */
/* Return     -> nothing.                                                 */
/*************************************************************************/
void draw_initialisation_sphere(void);