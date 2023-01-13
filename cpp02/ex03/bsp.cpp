#include "Point.hpp"

/*
*	@details Indique si un point donné est à l’intérieur d’un triangle.
*	@param a sommet a du triangle
*	@param b sommet b du triangle
*	@param c sommet c du triangle
*	@param point Le point à évaluer
*	@return True si le point est à l’intérieur du triangle. 
*		False dans le cas contraire.Cela veut dire que, si 
*		le point est un sommet ou placé sur une arrête, 
*		la fonction retournera False.
*	=>	w1 = (Ax(Cy - Ay) + (Py - Ay)(Cx - Ax) - Px(Cy - Ay))
*				/ ((By - Ay)(Cx - Ax) - (Bx - Ax)(Cy - Ay))
*		w2 = (Py - Ay - w1(By - Ay)) / (Cy - Ay)
*		=> Point P is inside if W1 > 0 and W2 > 0 and (w1 + w2) < 1 
*	@link https://www.youtube.com/watch?v=HYAgJN3x4GA @endlink
*/
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed s1 = c.getY() - a.getY();
	Fixed s2 = c.getX() - a.getX();
	Fixed s3 = b.getY() - a.getY();
	Fixed s4 = point.getY() - a.getY();

	Fixed w1 = (a.getX()* s1 + s4 * s2 - point.getX() * s1) / (s3 * s2 - (b.getX()-a.getX()) * s1);
	Fixed w2 = (s4- w1 * s3) / s1;
	return w1 > 0 && w2 > 0 && (w1 + w2) < 1;
}