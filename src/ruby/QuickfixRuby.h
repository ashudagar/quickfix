/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.24
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_Quickfix_WRAP_H_
#define SWIG_Quickfix_WRAP_H_

class Swig::Director;


class SwigDirector_Application : public FIX::Application, public Swig::Director {

public:
    SwigDirector_Application(VALUE self);
    virtual void onCreate(FIX::SessionID const &arg0);
    virtual void onLogon(FIX::SessionID const &arg0);
    virtual void onLogout(FIX::SessionID const &arg0);
    virtual void toApp(FIX::Message &arg0, FIX::SessionID const &arg1) throw(FIX::DoNotSend);
    virtual void fromAdmin(FIX::Message const &arg0, FIX::SessionID const &arg1) throw(FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::RejectLogon);
    virtual void fromApp(FIX::Message const &arg0, FIX::SessionID const &arg1) throw(FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::UnsupportedMessageType);
    virtual ~SwigDirector_Application();
    virtual void toAdmin(FIX::Message &arg0, FIX::SessionID const &arg1);
};


#endif
