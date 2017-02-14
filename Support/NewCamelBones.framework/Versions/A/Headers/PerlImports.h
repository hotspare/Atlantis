//
//  PerlImports.h
//  CamelBones
//
//  Copyright (c) 2004 Sherm Pendley. All rights reserved.
//

#ifndef PERL_LEOPARD
#ifdef bool
#undef bool
#endif
#endif

#ifdef STRINGIFY
#undef STRINGIFY
#endif

#ifdef _
#undef _
#endif

#define PERL_NO_GET_CONTEXT     /* we want efficiency */ 
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

extern PerlInterpreter *_CBPerlInterpreter;
