/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/directory.fws.h>
#include <php/classes/directory.h>

// Dependencies
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/directory.php line 3 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(Directory)
extern const InstanceOfInfo cw_Directory$$instanceof_table[] = {
  {0x34C95AF311506C8FLL,1,"Directory",&cw_Directory},
};
const int cw_Directory$$instanceof_index[] = {
  1,
  -1,0,
};
extern const CallInfo ci_Directory$$close = { (void*)&c_Directory::i_close, (void*)&c_Directory::ifa_close, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Directory$$rewind = { (void*)&c_Directory::i_rewind, (void*)&c_Directory::ifa_rewind, 0, 4, 0x0000000000000000LL};
extern const CallInfo ci_Directory$$__construct = { (void*)&c_Directory::i___construct, (void*)&c_Directory::ifa___construct, 1, 4, 0x0000000000000000LL};
extern const CallInfo ci_Directory$$read = { (void*)&c_Directory::i_read, (void*)&c_Directory::ifa_read, 0, 4, 0x0000000000000000LL};
Variant c_Directory::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_Directory::i_read(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_read);
}
Variant c_Directory::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_Directory::i_close(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_close);
}
Variant c_Directory::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_Directory);
  }
  c_Directory *self ATTRIBUTE_UNUSED (static_cast<c_Directory*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("Directory::__construct", count, 1, 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant c_Directory::ifa_read(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_read, coo_Directory);
  }
  c_Directory *self ATTRIBUTE_UNUSED (static_cast<c_Directory*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Directory::read", 0, 1);
  return (self->t_read());
}
Variant c_Directory::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_Directory);
  }
  c_Directory *self ATTRIBUTE_UNUSED (static_cast<c_Directory*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Directory::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant c_Directory::ifa_close(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_close, coo_Directory);
  }
  c_Directory *self ATTRIBUTE_UNUSED (static_cast<c_Directory*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("Directory::close", 0, 1);
  return (self->t_close(), null);
}
extern const MethodCallInfoTable cw_Directory$$call_info_table[] = {
  { 0x1F479267E49EF301LL, 0, 4, "read", &ci_Directory$$read },
  { 0x78AE97BFBEBF5341LL, 1, 5, "close", &ci_Directory$$close },
  { 0x1670096FDE27AF6ALL, 1, 6, "rewind", &ci_Directory$$rewind },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &ci_Directory$$__construct },
};
extern const int cw_Directory$$call_info_index[] = {
  7,
  -1,0,2,-1,-1,-1,-1,3,

};
c_Directory *c_Directory::create(CVarRef v_path) {
  CountableHelper h(this);
  init();
  t___construct(v_path);
  return this;
}
extern const MethodCallInfoTable cw_Directory$$call_info_table[];
extern const int cw_Directory$$call_info_index[];
extern const InstanceOfInfo cw_Directory$$instanceof_table[];
extern const int cw_Directory$$instanceof_index[];
const ObjectStaticCallbacks cw_Directory = {
  (ObjectData*(*)(ObjectData*))coo_Directory,
  cw_Directory$$call_info_table,cw_Directory$$call_info_index,
  cw_Directory$$instanceof_table,cw_Directory$$instanceof_index,
  &c_Directory::s_class_name,
  &c_Directory::os_prop_table,&ci_Directory$$__construct,0,0,0x0,
  &c_Directory::s_cls
};
/* SRC: classes/directory.php line 7 */
void c_Directory::t___construct(Variant v_path) {
  INSTANCE_METHOD_INJECTION_BUILTIN(Directory, Directory::__construct);
  ObjectData *obj_tmp UNUSED;
  m_path.assignVal(v_path);
  {
    const Variant &tmp0((x_opendir(toString(v_path))));
    m_handle.assignVal(tmp0);
  }
}
namespace hphp_impl_splitter {}
/* SRC: classes/directory.php line 12 */
Variant c_Directory::t_read() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Directory, Directory::read);
  ObjectData *obj_tmp UNUSED;
  return x_readdir(toObject(m_handle));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directory.php line 16 */
void c_Directory::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Directory, Directory::rewind);
  ObjectData *obj_tmp UNUSED;
  x_rewinddir(toObject(m_handle));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directory.php line 20 */
void c_Directory::t_close() {
  INSTANCE_METHOD_INJECTION_BUILTIN(Directory, Directory::close);
  ObjectData *obj_tmp UNUSED;
  x_closedir(toObject(m_handle));
}
namespace hphp_impl_splitter {}
ObjectData *coo_Directory() {
  return NEWOBJ(c_Directory)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&null_variant,
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x5C4CA333F4541532LL,0,0,0,68,-1,GET_PROPERTY_OFFSET(c_Directory, m_handle),&NAMSTR(s_sys_ss46eeef5c, "handle") },
  {0x1429F792A6880074LL,-1,0,0,68,-1,GET_PROPERTY_OFFSET(c_Directory, m_path),&NAMSTR(s_sys_ssf362b3c4, "path") },

};
static const int cpt_hash_entries[] = {
  // Directory hash
  -1,-1,0,-1,1,-1,-1,-1,
  // Directory lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_Directory::os_prop_table = {
  7,1,-1,-1,-1,-1,9,0,
  cpt_hash_entries+0,0,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
