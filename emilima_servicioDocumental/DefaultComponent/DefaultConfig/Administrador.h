/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: i202016924
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Administrador
//!	Generated Date	: Sun, 2, Jan 2022  
	File Path	: DefaultComponent\DefaultConfig\Administrador.h
*********************************************************************/

#ifndef Administrador_H
#define Administrador_H

//## auto_generated
#include <oxf\oxf.h>
//## actor Administrador
#include "Usuario.h"
//## auto_generated
class CI_AgregarSolicitud;

//## link itsCI_AgregarUsuario
class CI_AgregarUsuario;

//## auto_generated
class CI_CambiarClave;

//## auto_generated
class CI_EditarSolicitud;

//## link itsCI_EditarUsuario
class CI_EditarUsuario;

//## auto_generated
class CI_IniciarSesion;

//## auto_generated
class CI_ListarSolicitud;

//## link itsCI_ListarUsuario
class CI_ListarUsuario;

//## auto_generated
class CI_MantenerDocumento;

//## auto_generated
class CI_MantenerSolicitud;

//## link itsCI_MantenerUsuario
class CI_MantenerUsuario;

//## auto_generated
class CI_MenuPrincipal;

//## auto_generated
class CI_VentanaPregunta;

//## package MCUS

//## actor Administrador
class Administrador : public Usuario {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Administrador();
    
    //## auto_generated
    ~Administrador();
    
    ////    Additional operations    ////
    
    //## auto_generated
    CI_AgregarUsuario* getItsCI_AgregarUsuario() const;
    
    //## auto_generated
    void setItsCI_AgregarUsuario(CI_AgregarUsuario* p_CI_AgregarUsuario);
    
    //## auto_generated
    CI_EditarUsuario* getItsCI_EditarUsuario() const;
    
    //## auto_generated
    void setItsCI_EditarUsuario(CI_EditarUsuario* p_CI_EditarUsuario);
    
    //## auto_generated
    CI_ListarUsuario* getItsCI_ListarUsuario() const;
    
    //## auto_generated
    void setItsCI_ListarUsuario(CI_ListarUsuario* p_CI_ListarUsuario);
    
    //## auto_generated
    CI_MantenerUsuario* getItsCI_MantenerUsuario() const;
    
    //## auto_generated
    void setItsCI_MantenerUsuario(CI_MantenerUsuario* p_CI_MantenerUsuario);
    
    //## auto_generated
    CI_MenuPrincipal* getItsCI_MenuPrincipal_1() const;
    
    //## auto_generated
    void setItsCI_MenuPrincipal_1(CI_MenuPrincipal* p_CI_MenuPrincipal);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    CI_AgregarUsuario* itsCI_AgregarUsuario;		//## link itsCI_AgregarUsuario
    
    CI_EditarUsuario* itsCI_EditarUsuario;		//## link itsCI_EditarUsuario
    
    CI_ListarUsuario* itsCI_ListarUsuario;		//## link itsCI_ListarUsuario
    
    CI_MantenerUsuario* itsCI_MantenerUsuario;		//## link itsCI_MantenerUsuario
    
    CI_MenuPrincipal* itsCI_MenuPrincipal_1;		//## link itsCI_MenuPrincipal_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCI_AgregarUsuario(CI_AgregarUsuario* p_CI_AgregarUsuario);
    
    //## auto_generated
    void _setItsCI_AgregarUsuario(CI_AgregarUsuario* p_CI_AgregarUsuario);
    
    //## auto_generated
    void _clearItsCI_AgregarUsuario();
    
    //## auto_generated
    void __setItsCI_EditarUsuario(CI_EditarUsuario* p_CI_EditarUsuario);
    
    //## auto_generated
    void _setItsCI_EditarUsuario(CI_EditarUsuario* p_CI_EditarUsuario);
    
    //## auto_generated
    void _clearItsCI_EditarUsuario();
    
    //## auto_generated
    void __setItsCI_ListarUsuario(CI_ListarUsuario* p_CI_ListarUsuario);
    
    //## auto_generated
    void _setItsCI_ListarUsuario(CI_ListarUsuario* p_CI_ListarUsuario);
    
    //## auto_generated
    void _clearItsCI_ListarUsuario();
    
    //## auto_generated
    void __setItsCI_MantenerUsuario(CI_MantenerUsuario* p_CI_MantenerUsuario);
    
    //## auto_generated
    void _setItsCI_MantenerUsuario(CI_MantenerUsuario* p_CI_MantenerUsuario);
    
    //## auto_generated
    void _clearItsCI_MantenerUsuario();
    
    //## auto_generated
    void __setItsCI_MenuPrincipal_1(CI_MenuPrincipal* p_CI_MenuPrincipal);
    
    //## auto_generated
    void _setItsCI_MenuPrincipal_1(CI_MenuPrincipal* p_CI_MenuPrincipal);
    
    //## auto_generated
    void _clearItsCI_MenuPrincipal_1();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Administrador.h
*********************************************************************/
