// 
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +                                                                      +
// + This file is part of enGrid.                                         +
// +                                                                      +
// + Copyright 2008-2013 enGits GmbH                                      +
// +                                                                      +
// + enGrid is free software: you can redistribute it and/or modify       +
// + it under the terms of the GNU General Public License as published by +
// + the Free Software Foundation, either version 3 of the License, or    +
// + (at your option) any later version.                                  +
// +                                                                      +
// + enGrid is distributed in the hope that it will be useful,            +
// + but WITHOUT ANY WARRANTY; without even the implied warranty of       +
// + MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        +
// + GNU General Public License for more details.                         +
// +                                                                      +
// + You should have received a copy of the GNU General Public License    +
// + along with enGrid. If not, see <http://www.gnu.org/licenses/>.       +
// +                                                                      +
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// 
#ifndef GUIINFLATEMESH_H
#define GUIINFLATEMESH_H

class GuiInflateMesh;

#include "dialogoperation.h"
#include "surfacealgorithm.h"
#include "ui_guiinflatemesh.h"

class GuiInflateMesh : public DialogOperation<Ui::GuiInflateMesh, SurfaceOperation>
{

private:

  double m_EdgeLength;

  void setupSurfaceParameters();

public:

  GuiInflateMesh();

};

#endif // GUIINFLATEMESH_H
