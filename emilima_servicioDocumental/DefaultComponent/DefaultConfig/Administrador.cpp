/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: i202016924
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Administrador
//!	Generated Date	: Sun, 2, Jan 2022  
	File Path	: DefaultComponent\DefaultConfig\Administrador.cpp
*********************************************************************/

//## auto_generated
#include "Administrador.h"
//## auto_generated
#include "CI_AgregarSolicitud.h"
//## link itsCI_AgregarUsuario
#include "CI_AgregarUsuario.h"
//## auto_generated
#include "CI_CambiarClave.h"
//## auto_generated
#include "CI_EditarSolicitud.h"
//## link itsCI_EditarUsuario
#include "CI_EditarUsuario.h"
//## auto_generated
#include "CI_IniciarSesion.h"
//## auto_generated
#include "CI_ListarSolicitud.h"
//## link itsCI_ListarUsuario
#include "CI_ListarUsuario.h"
//## auto_generated
#include "CI_MantenerDocumento.h"
//## auto_generated
#include "CI_MantenerSolicitud.h"
//## link itsCI_MantenerUsuario
#include "CI_MantenerUsuario.h"
//## auto_generated
#include "CI_MenuPrincipal.h"
//## auto_generated
#include "CI_VentanaPregunta.h"
//## package MCUS

//## actor Administrador
Administrador::Administrador() {
    itsCI_AgregarUsuario = NULL;
    itsCI_EditarUsuario = NULL;
    itsCI_ListarUsuario = NULL;
    itsCI_MantenerUsuario = NULL;
    itsCI_MenuPrincipal_1 = NULL;
}

Administrador::~Administrador() {
    cleanUpRelations();
}

CI_AgregarUsuario* Administrador::getItsCI_AgregarUsuario() const {
    return itsCI_AgregarUsuario;
}

void Administrador::setItsCI_AgregarUsuario(CI_AgregarUsuario* p_CI_AgregarUsuario) {
    if(p_CI_AgregarUsuario != NULL)
        {
            p_CI_AgregarUsuario->_setItsAdministrador(this);
        }
    _setItsCI_AgregarUsuario(p_CI_AgregarUsuario);
}

CI_EditarUsuario* Administrador::getItsCI_EditarUsuario() const {
    return itsCI_EditarUsuario;
}

void Administrador::setItsCI_EditarUsuario(CI_EditarUsuario* p_CI_EditarUsuario) {
    if(p_CI_EditarUsuario != NULL)
        {
            p_CI_EditarUsuario->_setItsAdministrador(this);
        }
    _setItsCI_EditarUsuario(p_CI_EditarUsuario);
}

CI_ListarUsuario* Administrador::getItsCI_ListarUsuario() const {
    return itsCI_ListarUsuario;
}

void Administrador::setItsCI_ListarUsuario(CI_ListarUsuario* p_CI_ListarUsuario) {
    if(p_CI_ListarUsuario != NULL)
        {
            p_CI_ListarUsuario->_setItsAdministrador(this);
        }
    _setItsCI_ListarUsuario(p_CI_ListarUsuario);
}

CI_MantenerUsuario* Administrador::getItsCI_MantenerUsuario() const {
    return itsCI_MantenerUsuario;
}

void Administrador::setItsCI_MantenerUsuario(CI_MantenerUsuario* p_CI_MantenerUsuario) {
    if(p_CI_MantenerUsuario != NULL)
        {
            p_CI_MantenerUsuario->_setItsAdministrador(this);
        }
    _setItsCI_MantenerUsuario(p_CI_MantenerUsuario);
}

CI_MenuPrincipal* Administrador::getItsCI_MenuPrincipal_1() const {
    return itsCI_MenuPrincipal_1;
}

void Administrador::setItsCI_MenuPrincipal_1(CI_MenuPrincipal* p_CI_MenuPrincipal) {
    if(p_CI_MenuPrincipal != NULL)
        {
            p_CI_MenuPrincipal->_setItsAdministrador(this);
        }
    _setItsCI_MenuPrincipal_1(p_CI_MenuPrincipal);
}

void Administrador::cleanUpRelations() {
    if(itsCI_AgregarUsuario != NULL)
        {
            Administrador* p_Administrador = itsCI_AgregarUsuario->getItsAdministrador();
            if(p_Administrador != NULL)
                {
                    itsCI_AgregarUsuario->__setItsAdministrador(NULL);
                }
            itsCI_AgregarUsuario = NULL;
        }
    if(itsCI_EditarUsuario != NULL)
        {
            Administrador* p_Administrador = itsCI_EditarUsuario->getItsAdministrador();
            if(p_Administrador != NULL)
                {
                    itsCI_EditarUsuario->__setItsAdministrador(NULL);
                }
            itsCI_EditarUsuario = NULL;
        }
    if(itsCI_ListarUsuario != NULL)
        {
            Administrador* p_Administrador = itsCI_ListarUsuario->getItsAdministrador();
            if(p_Administrador != NULL)
                {
                    itsCI_ListarUsuario->__setItsAdministrador(NULL);
                }
            itsCI_ListarUsuario = NULL;
        }
    if(itsCI_MantenerUsuario != NULL)
        {
            Administrador* p_Administrador = itsCI_MantenerUsuario->getItsAdministrador();
            if(p_Administrador != NULL)
                {
                    itsCI_MantenerUsuario->__setItsAdministrador(NULL);
                }
            itsCI_MantenerUsuario = NULL;
        }
    if(itsCI_MenuPrincipal_1 != NULL)
        {
            Administrador* p_Administrador = itsCI_MenuPrincipal_1->getItsAdministrador();
            if(p_Administrador != NULL)
                {
                    itsCI_MenuPrincipal_1->__setItsAdministrador(NULL);
                }
            itsCI_MenuPrincipal_1 = NULL;
        }
}

void Administrador::__setItsCI_AgregarUsuario(CI_AgregarUsuario* p_CI_AgregarUsuario) {
    itsCI_AgregarUsuario = p_CI_AgregarUsuario;
}

void Administrador::_setItsCI_AgregarUsuario(CI_AgregarUsuario* p_CI_AgregarUsuario) {
    if(itsCI_AgregarUsuario != NULL)
        {
            itsCI_AgregarUsuario->__setItsAdministrador(NULL);
        }
    __setItsCI_AgregarUsuario(p_CI_AgregarUsuario);
}

void Administrador::_clearItsCI_AgregarUsuario() {
    itsCI_AgregarUsuario = NULL;
}

void Administrador::__setItsCI_EditarUsuario(CI_EditarUsuario* p_CI_EditarUsuario) {
    itsCI_EditarUsuario = p_CI_EditarUsuario;
}

void Administrador::_setItsCI_EditarUsuario(CI_EditarUsuario* p_CI_EditarUsuario) {
    if(itsCI_EditarUsuario != NULL)
        {
            itsCI_EditarUsuario->__setItsAdministrador(NULL);
        }
    __setItsCI_EditarUsuario(p_CI_EditarUsuario);
}

void Administrador::_clearItsCI_EditarUsuario() {
    itsCI_EditarUsuario = NULL;
}

void Administrador::__setItsCI_ListarUsuario(CI_ListarUsuario* p_CI_ListarUsuario) {
    itsCI_ListarUsuario = p_CI_ListarUsuario;
}

void Administrador::_setItsCI_ListarUsuario(CI_ListarUsuario* p_CI_ListarUsuario) {
    if(itsCI_ListarUsuario != NULL)
        {
            itsCI_ListarUsuario->__setItsAdministrador(NULL);
        }
    __setItsCI_ListarUsuario(p_CI_ListarUsuario);
}

void Administrador::_clearItsCI_ListarUsuario() {
    itsCI_ListarUsuario = NULL;
}

void Administrador::__setItsCI_MantenerUsuario(CI_MantenerUsuario* p_CI_MantenerUsuario) {
    itsCI_MantenerUsuario = p_CI_MantenerUsuario;
}

void Administrador::_setItsCI_MantenerUsuario(CI_MantenerUsuario* p_CI_MantenerUsuario) {
    if(itsCI_MantenerUsuario != NULL)
        {
            itsCI_MantenerUsuario->__setItsAdministrador(NULL);
        }
    __setItsCI_MantenerUsuario(p_CI_MantenerUsuario);
}

void Administrador::_clearItsCI_MantenerUsuario() {
    itsCI_MantenerUsuario = NULL;
}

void Administrador::__setItsCI_MenuPrincipal_1(CI_MenuPrincipal* p_CI_MenuPrincipal) {
    itsCI_MenuPrincipal_1 = p_CI_MenuPrincipal;
}

void Administrador::_setItsCI_MenuPrincipal_1(CI_MenuPrincipal* p_CI_MenuPrincipal) {
    if(itsCI_MenuPrincipal_1 != NULL)
        {
            itsCI_MenuPrincipal_1->__setItsAdministrador(NULL);
        }
    __setItsCI_MenuPrincipal_1(p_CI_MenuPrincipal);
}

void Administrador::_clearItsCI_MenuPrincipal_1() {
    itsCI_MenuPrincipal_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Administrador.cpp
*********************************************************************/
