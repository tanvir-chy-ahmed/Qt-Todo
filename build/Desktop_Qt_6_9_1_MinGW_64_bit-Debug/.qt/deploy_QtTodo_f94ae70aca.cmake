include("C:/Users/sdeve/Qt Projects/QtTodo/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/QtTodo-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE C:/Users/sdeve/Qt Projects/QtTodo/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/QtTodo.exe
    GENERATE_QT_CONF
)
