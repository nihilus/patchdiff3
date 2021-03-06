/* 
   Patchdiff3
   Portions (C) 2014 - 2014 namreeb (patchdiff@namreeb.org)
   Portions (C) 2010 - 2011 Nicolas Pouvesle
   Portions (C) 2007 - 2009 Tenable Network Security, Inc.
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License version 2 as 
   published by the Free Software Foundation.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once

#include <stdio.h>
#include <stack>

#define NO_OBSOLETE_FUNCS

#include <ida.hpp>
#include <idp.hpp>
#include <kernwin.hpp>
#include <pro.h>
#include <xref.hpp>
#include <gdl.hpp>
#include <bytes.hpp>
#include <funcs.hpp>
#include <fpro.h>
#include <diskio.hpp>
#include <name.hpp>
#include <ua.hpp>
#include <demangle.hpp>
#include <loader.hpp>
#include <auto.hpp>

// The graph API spams "forcing value to bool" warnings...
#pragma warning(push)
#pragma warning(disable: 4800)
#include <graph.hpp>
#pragma warning(pop)

static_assert(IDA_SDK_VERSION >= 610, "This plugin expects IDA SDK 6.1 or later");
