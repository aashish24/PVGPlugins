PROJECT(OBBtoGrid)
FIND_PACKAGE(ParaView REQUIRED)
INCLUDE(${PARAVIEW_USE_FILE})
 
ADD_PARAVIEW_PLUGIN(OBBtoGridSMPlugin "1.0"
	SERVER_MANAGER_XML OBBtoGrid.xml
	SERVER_MANAGER_SOURCES vtkOBBtoGrid.cpp)
 
ADD_PARAVIEW_PLUGIN(OBBtoGridCPlugin "1.0"
	GUI_RESOURCE_FILES OBBtoGridCategory.xml)


