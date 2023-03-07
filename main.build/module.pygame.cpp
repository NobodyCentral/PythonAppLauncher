/* Generated code for Python module 'pygame'
 * created by Nuitka version 1.2.7
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pygame" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pygame;
PyDictObject *moduledict_pygame;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[250];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[250];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pygame"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 250; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pygame(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 250; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e9896ab2697e41eaa8f0a0a68d21b6ec;
static PyCodeObject *codeobj_21fc3462c3f77df84104cebb85eed04e;
static PyCodeObject *codeobj_18182d285f525a950c311e00a3ed6509;
static PyCodeObject *codeobj_4fa19f1157e1bfacd4fab7bb3beee95c;
static PyCodeObject *codeobj_1b900d24055d7215ae6870b32744656d;
static PyCodeObject *codeobj_626eb3d446a3f7a5a948d843df0963c4;
static PyCodeObject *codeobj_003ce17c9a6226a605c2d70245dc24f2;
static PyCodeObject *codeobj_17f06c4938304ac10eb1828bc3c33409;
static PyCodeObject *codeobj_79dd8ae047b079c1da184ca244912d49;
static PyCodeObject *codeobj_6c8cd6ac135249e8b705b0de6ae07caa;
static PyCodeObject *codeobj_65d7dc8531ce138c1e54327776bc2450;
static PyCodeObject *codeobj_8602176b2adb4f3855b7c89f4eeedfcc;
static PyCodeObject *codeobj_318a5162d238939c32e46e0e91a40749;
static PyCodeObject *codeobj_45de78a1981e0730e3b20bffb7bc8b63;
static PyCodeObject *codeobj_0ab302c395e856cbd1b8255cc87fb54f;
static PyCodeObject *codeobj_60ad4fe84e268ee44bd7977620573333;
static PyCodeObject *codeobj_f0c0bd681e6aa1db9b46c038bcdae227;
static PyCodeObject *codeobj_e1ae2a00e9723aaa75fbea216d566bd7;
static PyCodeObject *codeobj_d67c666f51fb78e6db08ef0116b2ca85;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[234]); CHECK_OBJECT(module_filename_obj);
    codeobj_e9896ab2697e41eaa8f0a0a68d21b6ec = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_21fc3462c3f77df84104cebb85eed04e = MAKE_CODEOBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_18182d285f525a950c311e00a3ed6509 = MAKE_CODEOBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_4fa19f1157e1bfacd4fab7bb3beee95c = MAKE_CODEOBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_1b900d24055d7215ae6870b32744656d = MAKE_CODEOBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_626eb3d446a3f7a5a948d843df0963c4 = MAKE_CODEOBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[235], mod_consts[236], NULL, 1, 0, 0);
    codeobj_003ce17c9a6226a605c2d70245dc24f2 = MAKE_CODEOBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[235], mod_consts[237], NULL, 1, 0, 0);
    codeobj_17f06c4938304ac10eb1828bc3c33409 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[238], NULL, NULL, 0, 0, 0);
    codeobj_79dd8ae047b079c1da184ca244912d49 = MAKE_CODEOBJECT(module_filename_obj, 42, CO_NOFREE, mod_consts[92], mod_consts[239], NULL, 0, 0, 0);
    codeobj_6c8cd6ac135249e8b705b0de6ae07caa = MAKE_CODEOBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[240], NULL, 4, 0, 0);
    codeobj_65d7dc8531ce138c1e54327776bc2450 = MAKE_CODEOBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[228], mod_consts[241], NULL, 1, 0, 0);
    codeobj_8602176b2adb4f3855b7c89f4eeedfcc = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[242], NULL, 2, 0, 0);
    codeobj_318a5162d238939c32e46e0e91a40749 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[243], NULL, 3, 0, 0);
    codeobj_45de78a1981e0730e3b20bffb7bc8b63 = MAKE_CODEOBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[244], NULL, 1, 0, 0);
    codeobj_0ab302c395e856cbd1b8255cc87fb54f = MAKE_CODEOBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[245], NULL, 4, 0, 0);
    codeobj_60ad4fe84e268ee44bd7977620573333 = MAKE_CODEOBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[226], mod_consts[246], NULL, 1, 0, 0);
    codeobj_f0c0bd681e6aa1db9b46c038bcdae227 = MAKE_CODEOBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[224], mod_consts[247], NULL, 0, 0, 0);
    codeobj_e1ae2a00e9723aaa75fbea216d566bd7 = MAKE_CODEOBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[248], NULL, 1, 0, 0);
    codeobj_d67c666f51fb78e6db08ef0116b2ca85 = MAKE_CODEOBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[169], mod_consts[249], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pygame$$$function__10_lambda();


static PyObject *MAKE_FUNCTION_pygame$$$function__11_packager_imports();


static PyObject *MAKE_FUNCTION_pygame$$$function__12___rect_constructor();


static PyObject *MAKE_FUNCTION_pygame$$$function__13___rect_reduce();


static PyObject *MAKE_FUNCTION_pygame$$$function__14___color_constructor();


static PyObject *MAKE_FUNCTION_pygame$$$function__15___color_reduce();


static PyObject *MAKE_FUNCTION_pygame$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pygame$$$function__2___getattr__();


static PyObject *MAKE_FUNCTION_pygame$$$function__3___nonzero__();


static PyObject *MAKE_FUNCTION_pygame$$$function__4_warn();


static PyObject *MAKE_FUNCTION_pygame$$$function__5_lambda();


static PyObject *MAKE_FUNCTION_pygame$$$function__6_warn_unwanted_files();


static PyObject *MAKE_FUNCTION_pygame$$$function__7_lambda();


static PyObject *MAKE_FUNCTION_pygame$$$function__8_lambda();


static PyObject *MAKE_FUNCTION_pygame$$$function__9_lambda();


// The module function definitions.
static PyObject *impl_pygame$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_urgent = python_pars[2];
    PyObject *var_exc_type = NULL;
    PyObject *var_exc_msg = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_318a5162d238939c32e46e0e91a40749;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_318a5162d238939c32e46e0e91a40749 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_318a5162d238939c32e46e0e91a40749)) {
        Py_XDECREF(cache_frame_318a5162d238939c32e46e0e91a40749);

#if _DEBUG_REFCOUNTS
        if (cache_frame_318a5162d238939c32e46e0e91a40749 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_318a5162d238939c32e46e0e91a40749 = MAKE_FUNCTION_FRAME(codeobj_318a5162d238939c32e46e0e91a40749, module_pygame, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_318a5162d238939c32e46e0e91a40749->m_type_description == NULL);
    frame_318a5162d238939c32e46e0e91a40749 = cache_frame_318a5162d238939c32e46e0e91a40749;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_318a5162d238939c32e46e0e91a40749);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_318a5162d238939c32e46e0e91a40749) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_318a5162d238939c32e46e0e91a40749->m_frame.f_lineno = 47;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[2]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[3];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 47;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 47;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 47;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 47;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_exc_type == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_exc_type = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_exc_msg == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_exc_msg = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_exc_msg);
        tmp_args_element_value_1 = var_exc_msg;
        frame_318a5162d238939c32e46e0e91a40749->m_frame.f_lineno = 48;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_exc_type);
        tmp_expression_value_2 = var_exc_type;
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[8];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assattr_value_3 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[10], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_urgent);
        tmp_assattr_value_4 = par_urgent;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[11], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_urgent);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_urgent);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_318a5162d238939c32e46e0e91a40749->m_frame.f_lineno = 52;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[12]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_318a5162d238939c32e46e0e91a40749);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_318a5162d238939c32e46e0e91a40749);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_318a5162d238939c32e46e0e91a40749, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_318a5162d238939c32e46e0e91a40749->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_318a5162d238939c32e46e0e91a40749, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_318a5162d238939c32e46e0e91a40749,
        type_description_1,
        par_self,
        par_name,
        par_urgent,
        var_exc_type,
        var_exc_msg
    );


    // Release cached frame if used for exception.
    if (frame_318a5162d238939c32e46e0e91a40749 == cache_frame_318a5162d238939c32e46e0e91a40749) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_318a5162d238939c32e46e0e91a40749);
        cache_frame_318a5162d238939c32e46e0e91a40749 = NULL;
    }

    assertFrameObject(frame_318a5162d238939c32e46e0e91a40749);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_exc_type);
    Py_DECREF(var_exc_type);
    var_exc_type = NULL;
    CHECK_OBJECT(var_exc_msg);
    Py_DECREF(var_exc_msg);
    var_exc_msg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_exc_type);
    var_exc_type = NULL;
    Py_XDECREF(var_exc_msg);
    var_exc_msg = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_urgent);
    Py_DECREF(par_urgent);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_urgent);
    Py_DECREF(par_urgent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__2___getattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_var = python_pars[1];
    PyObject *var_missing_msg = NULL;
    struct Nuitka_FrameObject *frame_8602176b2adb4f3855b7c89f4eeedfcc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8602176b2adb4f3855b7c89f4eeedfcc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8602176b2adb4f3855b7c89f4eeedfcc)) {
        Py_XDECREF(cache_frame_8602176b2adb4f3855b7c89f4eeedfcc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8602176b2adb4f3855b7c89f4eeedfcc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8602176b2adb4f3855b7c89f4eeedfcc = MAKE_FUNCTION_FRAME(codeobj_8602176b2adb4f3855b7c89f4eeedfcc, module_pygame, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8602176b2adb4f3855b7c89f4eeedfcc->m_type_description == NULL);
    frame_8602176b2adb4f3855b7c89f4eeedfcc = cache_frame_8602176b2adb4f3855b7c89f4eeedfcc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8602176b2adb4f3855b7c89f4eeedfcc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8602176b2adb4f3855b7c89f4eeedfcc) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8602176b2adb4f3855b7c89f4eeedfcc->m_frame.f_lineno = 56;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[12]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[13];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[8];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_missing_msg == NULL);
        var_missing_msg = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_missing_msg);
        tmp_args_element_value_1 = var_missing_msg;
        frame_8602176b2adb4f3855b7c89f4eeedfcc->m_frame.f_lineno = 59;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 59;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8602176b2adb4f3855b7c89f4eeedfcc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8602176b2adb4f3855b7c89f4eeedfcc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8602176b2adb4f3855b7c89f4eeedfcc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8602176b2adb4f3855b7c89f4eeedfcc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8602176b2adb4f3855b7c89f4eeedfcc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8602176b2adb4f3855b7c89f4eeedfcc,
        type_description_1,
        par_self,
        par_var,
        var_missing_msg
    );


    // Release cached frame if used for exception.
    if (frame_8602176b2adb4f3855b7c89f4eeedfcc == cache_frame_8602176b2adb4f3855b7c89f4eeedfcc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8602176b2adb4f3855b7c89f4eeedfcc);
        cache_frame_8602176b2adb4f3855b7c89f4eeedfcc = NULL;
    }

    assertFrameObject(frame_8602176b2adb4f3855b7c89f4eeedfcc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_missing_msg);
    var_missing_msg = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_var);
    Py_DECREF(par_var);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pygame$$$function__4_warn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_msg_type = NULL;
    PyObject *var_message = NULL;
    PyObject *var_warnings = NULL;
    PyObject *var_level = NULL;
    struct Nuitka_FrameObject *frame_e1ae2a00e9723aaa75fbea216d566bd7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_e1ae2a00e9723aaa75fbea216d566bd7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e1ae2a00e9723aaa75fbea216d566bd7)) {
        Py_XDECREF(cache_frame_e1ae2a00e9723aaa75fbea216d566bd7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1ae2a00e9723aaa75fbea216d566bd7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1ae2a00e9723aaa75fbea216d566bd7 = MAKE_FUNCTION_FRAME(codeobj_e1ae2a00e9723aaa75fbea216d566bd7, module_pygame, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e1ae2a00e9723aaa75fbea216d566bd7->m_type_description == NULL);
    frame_e1ae2a00e9723aaa75fbea216d566bd7 = cache_frame_e1ae2a00e9723aaa75fbea216d566bd7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e1ae2a00e9723aaa75fbea216d566bd7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e1ae2a00e9723aaa75fbea216d566bd7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_1 = mod_consts[17];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = mod_consts[18];
        condexpr_end_1:;
        assert(var_msg_type == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_msg_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_msg_type);
        tmp_tuple_element_1 = var_msg_type;
        tmp_string_concat_values_1 = PyTuple_New(8);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[22];
        frame_e1ae2a00e9723aaa75fbea216d566bd7->m_frame.f_lineno = 70;
        tmp_assign_source_3 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_warnings == NULL);
        var_warnings = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_4 = mod_consts[23];
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_4 = mod_consts[24];
        condexpr_end_2:;
        assert(var_level == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_level = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_warnings);
        tmp_expression_value_6 = var_warnings;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_message);
        tmp_args_element_value_1 = var_message;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_level);
        tmp_args_element_value_3 = var_level;
        frame_e1ae2a00e9723aaa75fbea216d566bd7->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e1ae2a00e9723aaa75fbea216d566bd7, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e1ae2a00e9723aaa75fbea216d566bd7, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_message);
        tmp_args_element_value_4 = var_message;
        frame_e1ae2a00e9723aaa75fbea216d566bd7->m_frame.f_lineno = 75;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 69;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e1ae2a00e9723aaa75fbea216d566bd7->m_frame) frame_e1ae2a00e9723aaa75fbea216d566bd7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1ae2a00e9723aaa75fbea216d566bd7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1ae2a00e9723aaa75fbea216d566bd7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e1ae2a00e9723aaa75fbea216d566bd7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1ae2a00e9723aaa75fbea216d566bd7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1ae2a00e9723aaa75fbea216d566bd7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1ae2a00e9723aaa75fbea216d566bd7,
        type_description_1,
        par_self,
        var_msg_type,
        var_message,
        var_warnings,
        var_level
    );


    // Release cached frame if used for exception.
    if (frame_e1ae2a00e9723aaa75fbea216d566bd7 == cache_frame_e1ae2a00e9723aaa75fbea216d566bd7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e1ae2a00e9723aaa75fbea216d566bd7);
        cache_frame_e1ae2a00e9723aaa75fbea216d566bd7 = NULL;
    }

    assertFrameObject(frame_e1ae2a00e9723aaa75fbea216d566bd7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_msg_type);
    Py_DECREF(var_msg_type);
    var_msg_type = NULL;
    CHECK_OBJECT(var_message);
    Py_DECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_warnings);
    var_warnings = NULL;
    Py_XDECREF(var_level);
    var_level = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_msg_type);
    var_msg_type = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_warnings);
    var_warnings = NULL;
    Py_XDECREF(var_level);
    var_level = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__5_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e9896ab2697e41eaa8f0a0a68d21b6ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e9896ab2697e41eaa8f0a0a68d21b6ec = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e9896ab2697e41eaa8f0a0a68d21b6ec)) {
        Py_XDECREF(cache_frame_e9896ab2697e41eaa8f0a0a68d21b6ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9896ab2697e41eaa8f0a0a68d21b6ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9896ab2697e41eaa8f0a0a68d21b6ec = MAKE_FUNCTION_FRAME(codeobj_e9896ab2697e41eaa8f0a0a68d21b6ec, module_pygame, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e9896ab2697e41eaa8f0a0a68d21b6ec->m_type_description == NULL);
    frame_e9896ab2697e41eaa8f0a0a68d21b6ec = cache_frame_e9896ab2697e41eaa8f0a0a68d21b6ec;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e9896ab2697e41eaa8f0a0a68d21b6ec);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e9896ab2697e41eaa8f0a0a68d21b6ec) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[28]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 151;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9896ab2697e41eaa8f0a0a68d21b6ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9896ab2697e41eaa8f0a0a68d21b6ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9896ab2697e41eaa8f0a0a68d21b6ec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e9896ab2697e41eaa8f0a0a68d21b6ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9896ab2697e41eaa8f0a0a68d21b6ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9896ab2697e41eaa8f0a0a68d21b6ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9896ab2697e41eaa8f0a0a68d21b6ec,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_e9896ab2697e41eaa8f0a0a68d21b6ec == cache_frame_e9896ab2697e41eaa8f0a0a68d21b6ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e9896ab2697e41eaa8f0a0a68d21b6ec);
        cache_frame_e9896ab2697e41eaa8f0a0a68d21b6ec = NULL;
    }

    assertFrameObject(frame_e9896ab2697e41eaa8f0a0a68d21b6ec);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__6_warn_unwanted_files(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_install_path = NULL;
    PyObject *var_extension_ext = NULL;
    PyObject *var_ext_to_remove = NULL;
    PyObject *var_py_to_remove = NULL;
    PyObject *var_extension_files = NULL;
    PyObject *var_py_files = NULL;
    PyObject *var_files = NULL;
    PyObject *var_unwanted_files = NULL;
    PyObject *var_f = NULL;
    PyObject *var_ask_remove = NULL;
    PyObject *var_message = NULL;
    PyObject *var_warnings = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *outline_1_var_py_ext = NULL;
    PyObject *outline_1_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__iter_value_1 = NULL;
    struct Nuitka_FrameObject *frame_d67c666f51fb78e6db08ef0116b2ca85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_003ce17c9a6226a605c2d70245dc24f2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_003ce17c9a6226a605c2d70245dc24f2_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_626eb3d446a3f7a5a948d843df0963c4_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_626eb3d446a3f7a5a948d843df0963c4_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_d67c666f51fb78e6db08ef0116b2ca85 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d67c666f51fb78e6db08ef0116b2ca85)) {
        Py_XDECREF(cache_frame_d67c666f51fb78e6db08ef0116b2ca85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d67c666f51fb78e6db08ef0116b2ca85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d67c666f51fb78e6db08ef0116b2ca85 = MAKE_FUNCTION_FRAME(codeobj_d67c666f51fb78e6db08ef0116b2ca85, module_pygame, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d67c666f51fb78e6db08ef0116b2ca85->m_type_description == NULL);
    frame_d67c666f51fb78e6db08ef0116b2ca85 = cache_frame_d67c666f51fb78e6db08ef0116b2ca85;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d67c666f51fb78e6db08ef0116b2ca85);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d67c666f51fb78e6db08ef0116b2ca85) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[30]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[34]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame.f_lineno = 173;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[22];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert(var_install_path == NULL);
        var_install_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[30]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[35]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[33]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[34]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame.f_lineno = 174;
        tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[13];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 1);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert(var_extension_ext == NULL);
        var_extension_ext = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(mod_consts[36]);
        assert(var_ext_to_remove == NULL);
        var_ext_to_remove = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[37]);
        assert(var_py_to_remove == NULL);
        var_py_to_remove = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[38];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyList_New(0);
        {
            PyObject *old = var_py_to_remove;
            assert(old != NULL);
            var_py_to_remove = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_ext_to_remove);
            tmp_iter_arg_1 = var_ext_to_remove;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_1 = "ooooooooooooN";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_003ce17c9a6226a605c2d70245dc24f2_2)) {
            Py_XDECREF(cache_frame_003ce17c9a6226a605c2d70245dc24f2_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_003ce17c9a6226a605c2d70245dc24f2_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_003ce17c9a6226a605c2d70245dc24f2_2 = MAKE_FUNCTION_FRAME(codeobj_003ce17c9a6226a605c2d70245dc24f2, module_pygame, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_003ce17c9a6226a605c2d70245dc24f2_2->m_type_description == NULL);
        frame_003ce17c9a6226a605c2d70245dc24f2_2 = cache_frame_003ce17c9a6226a605c2d70245dc24f2_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_003ce17c9a6226a605c2d70245dc24f2_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_003ce17c9a6226a605c2d70245dc24f2_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 187;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_10 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_10;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_string_concat_values_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_format_value_1 = outline_0_var_x;
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_string_concat_values_1 = PyTuple_New(2);
            {
                PyObject *tmp_format_value_2;
                PyObject *tmp_format_spec_2;
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(var_extension_ext);
                tmp_format_value_2 = var_extension_ext;
                tmp_format_spec_2 = mod_consts[8];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 187;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_string_concat_values_1);
            goto try_except_handler_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_append_value_1 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
            Py_DECREF(tmp_string_concat_values_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_6 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_6);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_003ce17c9a6226a605c2d70245dc24f2_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_003ce17c9a6226a605c2d70245dc24f2_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_003ce17c9a6226a605c2d70245dc24f2_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_003ce17c9a6226a605c2d70245dc24f2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_003ce17c9a6226a605c2d70245dc24f2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_003ce17c9a6226a605c2d70245dc24f2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_003ce17c9a6226a605c2d70245dc24f2_2,
            type_description_2,
            outline_0_var_x,
            var_extension_ext
        );


        // Release cached frame if used for exception.
        if (frame_003ce17c9a6226a605c2d70245dc24f2_2 == cache_frame_003ce17c9a6226a605c2d70245dc24f2_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_003ce17c9a6226a605c2d70245dc24f2_2);
            cache_frame_003ce17c9a6226a605c2d70245dc24f2_2 = NULL;
        }

        assertFrameObject(frame_003ce17c9a6226a605c2d70245dc24f2_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooN";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 187;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_extension_files == NULL);
        var_extension_files = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = mod_consts[39];
            tmp_assign_source_12 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
            assert(!(tmp_assign_source_12 == NULL));
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = PyList_New(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_13;
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_626eb3d446a3f7a5a948d843df0963c4_3)) {
            Py_XDECREF(cache_frame_626eb3d446a3f7a5a948d843df0963c4_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_626eb3d446a3f7a5a948d843df0963c4_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_626eb3d446a3f7a5a948d843df0963c4_3 = MAKE_FUNCTION_FRAME(codeobj_626eb3d446a3f7a5a948d843df0963c4, module_pygame, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_626eb3d446a3f7a5a948d843df0963c4_3->m_type_description == NULL);
        frame_626eb3d446a3f7a5a948d843df0963c4_3 = cache_frame_626eb3d446a3f7a5a948d843df0963c4_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_626eb3d446a3f7a5a948d843df0963c4_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_626eb3d446a3f7a5a948d843df0963c4_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 189;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_1;
                tmp_listcomp_2__iter_value_1 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_1);
            tmp_assign_source_15 = tmp_listcomp_2__iter_value_1;
            {
                PyObject *old = outline_1_var_py_ext;
                outline_1_var_py_ext = tmp_assign_source_15;
                Py_INCREF(outline_1_var_py_ext);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_3;
            if (var_py_to_remove == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[40]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 190;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }

            tmp_iter_arg_3 = var_py_to_remove;
            tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp_2__contraction_iter_0;
                tmp_listcomp_2__contraction_iter_0 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_2__contraction_iter_0);
            tmp_next_source_3 = tmp_listcomp_2__contraction_iter_0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 189;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_18 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_x;
                outline_1_var_x = tmp_assign_source_18;
                Py_INCREF(outline_1_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_string_concat_values_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_x);
            tmp_format_value_3 = outline_1_var_x;
            tmp_format_spec_3 = mod_consts[8];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            tmp_string_concat_values_2 = PyTuple_New(2);
            {
                PyObject *tmp_format_value_4;
                PyObject *tmp_format_spec_4;
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
                CHECK_OBJECT(outline_1_var_py_ext);
                tmp_format_value_4 = outline_1_var_py_ext;
                tmp_format_spec_4 = mod_consts[8];
                tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_2 = "ooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_string_concat_values_2);
            goto try_except_handler_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_append_value_2 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_2);
            Py_DECREF(tmp_string_concat_values_2);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_2 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction_iter_0);
        Py_DECREF(tmp_listcomp_2__contraction_iter_0);
        tmp_listcomp_2__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_2 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_11 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_2__contraction_iter_0);
        tmp_listcomp_2__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_1);
        tmp_listcomp_2__iter_value_1 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_2__contraction_iter_0);
        tmp_listcomp_2__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_1);
        tmp_listcomp_2__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_626eb3d446a3f7a5a948d843df0963c4_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_626eb3d446a3f7a5a948d843df0963c4_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_626eb3d446a3f7a5a948d843df0963c4_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_626eb3d446a3f7a5a948d843df0963c4_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_626eb3d446a3f7a5a948d843df0963c4_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_626eb3d446a3f7a5a948d843df0963c4_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_626eb3d446a3f7a5a948d843df0963c4_3,
            type_description_2,
            outline_1_var_py_ext,
            outline_1_var_x,
            var_py_to_remove
        );


        // Release cached frame if used for exception.
        if (frame_626eb3d446a3f7a5a948d843df0963c4_3 == cache_frame_626eb3d446a3f7a5a948d843df0963c4_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_626eb3d446a3f7a5a948d843df0963c4_3);
            cache_frame_626eb3d446a3f7a5a948d843df0963c4_3 = NULL;
        }

        assertFrameObject(frame_626eb3d446a3f7a5a948d843df0963c4_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooooN";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_py_ext);
        outline_1_var_py_ext = NULL;
        Py_XDECREF(outline_1_var_x);
        outline_1_var_x = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_py_ext);
        outline_1_var_py_ext = NULL;
        Py_XDECREF(outline_1_var_x);
        outline_1_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 189;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_py_files == NULL);
        var_py_files = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_py_files);
        tmp_add_expr_left_1 = var_py_files;
        CHECK_OBJECT(var_extension_files);
        tmp_add_expr_right_1 = var_extension_files;
        tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert(var_files == NULL);
        var_files = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyList_New(0);
        assert(var_unwanted_files == NULL);
        var_unwanted_files = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(var_files);
        tmp_iter_arg_4 = var_files;
        tmp_assign_source_21 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_21;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_4 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_22 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooN";
                exception_lineno = 196;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_23 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_23;
            Py_INCREF(var_f);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        if (var_unwanted_files == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_6;
        }

        tmp_expression_value_12 = var_unwanted_files;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[42]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_6;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_6;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[30]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_6;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[43]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_6;
        }
        if (var_install_path == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_6;
        }

        tmp_args_element_value_4 = var_install_path;
        CHECK_OBJECT(var_f);
        tmp_args_element_value_5 = var_f;
        frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_6;
        }
        frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame.f_lineno = 197;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 196;
        type_description_1 = "ooooooooooooN";
        goto try_except_handler_6;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyList_New(0);
        assert(var_ask_remove == NULL);
        var_ask_remove = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_5;
        if (var_unwanted_files == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_5 = var_unwanted_files;
        tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_25;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_5 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooN";
                exception_lineno = 200;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_27 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_27;
            Py_INCREF(var_f);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_1;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_7;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[30]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_f);
        tmp_args_element_value_6 = var_f;
        frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame.f_lineno = 201;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[45], tmp_args_element_value_6);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_7;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_7;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        if (var_ask_remove == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_7;
        }

        tmp_called_instance_2 = var_ask_remove;
        CHECK_OBJECT(var_f);
        tmp_args_element_value_7 = var_f;
        frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame.f_lineno = 202;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[42], tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 200;
        type_description_1 = "ooooooooooooN";
        goto try_except_handler_7;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        if (var_ask_remove == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(var_ask_remove);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_iadd_expr_left_1 = mod_consts[47];
        tmp_str_arg_value_1 = mod_consts[19];
        if (var_ask_remove == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_ask_remove;
        tmp_iadd_expr_right_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_1);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_28 = tmp_iadd_expr_left_1;
        assert(var_message == NULL);
        var_message = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_message);
        tmp_iadd_expr_left_2 = var_message;
        tmp_iadd_expr_right_2 = mod_consts[48];
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        assert(!(tmp_result == false));
        tmp_assign_source_29 = tmp_iadd_expr_left_2;
        var_message = tmp_assign_source_29;

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[22];
        frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame.f_lineno = 210;
        tmp_assign_source_30 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_8;
        }
        assert(var_warnings == NULL);
        var_warnings = tmp_assign_source_30;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_warnings);
        tmp_expression_value_16 = var_warnings;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[12]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_message);
        tmp_args_element_value_8 = var_message;
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_8;
        }
        tmp_args_element_value_10 = mod_consts[23];
        frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_d67c666f51fb78e6db08ef0116b2ca85, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_d67c666f51fb78e6db08ef0116b2ca85, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_9;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_9;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_message);
        tmp_args_element_value_11 = var_message;
        frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame.f_lineno = 215;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_11);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 209;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame) frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooN";
    goto try_except_handler_9;
    branch_end_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d67c666f51fb78e6db08ef0116b2ca85);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d67c666f51fb78e6db08ef0116b2ca85);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d67c666f51fb78e6db08ef0116b2ca85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d67c666f51fb78e6db08ef0116b2ca85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d67c666f51fb78e6db08ef0116b2ca85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d67c666f51fb78e6db08ef0116b2ca85,
        type_description_1,
        var_install_path,
        var_extension_ext,
        var_ext_to_remove,
        var_py_to_remove,
        var_extension_files,
        var_py_files,
        var_files,
        var_unwanted_files,
        var_f,
        var_ask_remove,
        var_message,
        var_warnings,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_d67c666f51fb78e6db08ef0116b2ca85 == cache_frame_d67c666f51fb78e6db08ef0116b2ca85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d67c666f51fb78e6db08ef0116b2ca85);
        cache_frame_d67c666f51fb78e6db08ef0116b2ca85 = NULL;
    }

    assertFrameObject(frame_d67c666f51fb78e6db08ef0116b2ca85);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_install_path);
    var_install_path = NULL;
    CHECK_OBJECT(var_extension_ext);
    Py_DECREF(var_extension_ext);
    var_extension_ext = NULL;
    CHECK_OBJECT(var_ext_to_remove);
    Py_DECREF(var_ext_to_remove);
    var_ext_to_remove = NULL;
    Py_XDECREF(var_py_to_remove);
    var_py_to_remove = NULL;
    CHECK_OBJECT(var_extension_files);
    Py_DECREF(var_extension_files);
    var_extension_files = NULL;
    CHECK_OBJECT(var_py_files);
    Py_DECREF(var_py_files);
    var_py_files = NULL;
    CHECK_OBJECT(var_files);
    Py_DECREF(var_files);
    var_files = NULL;
    Py_XDECREF(var_unwanted_files);
    var_unwanted_files = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_ask_remove);
    var_ask_remove = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_warnings);
    var_warnings = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_install_path);
    var_install_path = NULL;
    Py_XDECREF(var_extension_ext);
    var_extension_ext = NULL;
    Py_XDECREF(var_ext_to_remove);
    var_ext_to_remove = NULL;
    Py_XDECREF(var_py_to_remove);
    var_py_to_remove = NULL;
    Py_XDECREF(var_extension_files);
    var_extension_files = NULL;
    Py_XDECREF(var_py_files);
    var_py_files = NULL;
    Py_XDECREF(var_files);
    var_files = NULL;
    Py_XDECREF(var_unwanted_files);
    var_unwanted_files = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_ask_remove);
    var_ask_remove = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_warnings);
    var_warnings = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__7_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_21fc3462c3f77df84104cebb85eed04e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_21fc3462c3f77df84104cebb85eed04e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21fc3462c3f77df84104cebb85eed04e)) {
        Py_XDECREF(cache_frame_21fc3462c3f77df84104cebb85eed04e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21fc3462c3f77df84104cebb85eed04e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21fc3462c3f77df84104cebb85eed04e = MAKE_FUNCTION_FRAME(codeobj_21fc3462c3f77df84104cebb85eed04e, module_pygame, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_21fc3462c3f77df84104cebb85eed04e->m_type_description == NULL);
    frame_21fc3462c3f77df84104cebb85eed04e = cache_frame_21fc3462c3f77df84104cebb85eed04e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_21fc3462c3f77df84104cebb85eed04e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_21fc3462c3f77df84104cebb85eed04e) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[28]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 225;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_21fc3462c3f77df84104cebb85eed04e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_21fc3462c3f77df84104cebb85eed04e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_21fc3462c3f77df84104cebb85eed04e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21fc3462c3f77df84104cebb85eed04e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21fc3462c3f77df84104cebb85eed04e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21fc3462c3f77df84104cebb85eed04e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21fc3462c3f77df84104cebb85eed04e,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_21fc3462c3f77df84104cebb85eed04e == cache_frame_21fc3462c3f77df84104cebb85eed04e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_21fc3462c3f77df84104cebb85eed04e);
        cache_frame_21fc3462c3f77df84104cebb85eed04e = NULL;
    }

    assertFrameObject(frame_21fc3462c3f77df84104cebb85eed04e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__8_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_18182d285f525a950c311e00a3ed6509;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18182d285f525a950c311e00a3ed6509 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_18182d285f525a950c311e00a3ed6509)) {
        Py_XDECREF(cache_frame_18182d285f525a950c311e00a3ed6509);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18182d285f525a950c311e00a3ed6509 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18182d285f525a950c311e00a3ed6509 = MAKE_FUNCTION_FRAME(codeobj_18182d285f525a950c311e00a3ed6509, module_pygame, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_18182d285f525a950c311e00a3ed6509->m_type_description == NULL);
    frame_18182d285f525a950c311e00a3ed6509 = cache_frame_18182d285f525a950c311e00a3ed6509;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_18182d285f525a950c311e00a3ed6509);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_18182d285f525a950c311e00a3ed6509) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[28]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 232;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18182d285f525a950c311e00a3ed6509);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_18182d285f525a950c311e00a3ed6509);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18182d285f525a950c311e00a3ed6509);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18182d285f525a950c311e00a3ed6509, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18182d285f525a950c311e00a3ed6509->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18182d285f525a950c311e00a3ed6509, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18182d285f525a950c311e00a3ed6509,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_18182d285f525a950c311e00a3ed6509 == cache_frame_18182d285f525a950c311e00a3ed6509) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_18182d285f525a950c311e00a3ed6509);
        cache_frame_18182d285f525a950c311e00a3ed6509 = NULL;
    }

    assertFrameObject(frame_18182d285f525a950c311e00a3ed6509);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__9_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_4fa19f1157e1bfacd4fab7bb3beee95c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4fa19f1157e1bfacd4fab7bb3beee95c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4fa19f1157e1bfacd4fab7bb3beee95c)) {
        Py_XDECREF(cache_frame_4fa19f1157e1bfacd4fab7bb3beee95c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4fa19f1157e1bfacd4fab7bb3beee95c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4fa19f1157e1bfacd4fab7bb3beee95c = MAKE_FUNCTION_FRAME(codeobj_4fa19f1157e1bfacd4fab7bb3beee95c, module_pygame, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4fa19f1157e1bfacd4fab7bb3beee95c->m_type_description == NULL);
    frame_4fa19f1157e1bfacd4fab7bb3beee95c = cache_frame_4fa19f1157e1bfacd4fab7bb3beee95c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4fa19f1157e1bfacd4fab7bb3beee95c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4fa19f1157e1bfacd4fab7bb3beee95c) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[28]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 237;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4fa19f1157e1bfacd4fab7bb3beee95c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4fa19f1157e1bfacd4fab7bb3beee95c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4fa19f1157e1bfacd4fab7bb3beee95c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4fa19f1157e1bfacd4fab7bb3beee95c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4fa19f1157e1bfacd4fab7bb3beee95c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4fa19f1157e1bfacd4fab7bb3beee95c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4fa19f1157e1bfacd4fab7bb3beee95c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_4fa19f1157e1bfacd4fab7bb3beee95c == cache_frame_4fa19f1157e1bfacd4fab7bb3beee95c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4fa19f1157e1bfacd4fab7bb3beee95c);
        cache_frame_4fa19f1157e1bfacd4fab7bb3beee95c = NULL;
    }

    assertFrameObject(frame_4fa19f1157e1bfacd4fab7bb3beee95c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__10_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_1b900d24055d7215ae6870b32744656d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1b900d24055d7215ae6870b32744656d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b900d24055d7215ae6870b32744656d)) {
        Py_XDECREF(cache_frame_1b900d24055d7215ae6870b32744656d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b900d24055d7215ae6870b32744656d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b900d24055d7215ae6870b32744656d = MAKE_FUNCTION_FRAME(codeobj_1b900d24055d7215ae6870b32744656d, module_pygame, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1b900d24055d7215ae6870b32744656d->m_type_description == NULL);
    frame_1b900d24055d7215ae6870b32744656d = cache_frame_1b900d24055d7215ae6870b32744656d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1b900d24055d7215ae6870b32744656d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1b900d24055d7215ae6870b32744656d) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[28]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 242;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b900d24055d7215ae6870b32744656d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b900d24055d7215ae6870b32744656d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b900d24055d7215ae6870b32744656d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b900d24055d7215ae6870b32744656d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b900d24055d7215ae6870b32744656d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b900d24055d7215ae6870b32744656d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b900d24055d7215ae6870b32744656d,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_1b900d24055d7215ae6870b32744656d == cache_frame_1b900d24055d7215ae6870b32744656d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1b900d24055d7215ae6870b32744656d);
        cache_frame_1b900d24055d7215ae6870b32744656d = NULL;
    }

    assertFrameObject(frame_1b900d24055d7215ae6870b32744656d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__11_packager_imports(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_atexit = NULL;
    PyObject *var_numpy = NULL;
    PyObject *var_OpenGL = NULL;
    PyObject *var_pygame = NULL;
    struct Nuitka_FrameObject *frame_f0c0bd681e6aa1db9b46c038bcdae227;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f0c0bd681e6aa1db9b46c038bcdae227 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[50];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[22];
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_atexit == NULL);
        var_atexit = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_f0c0bd681e6aa1db9b46c038bcdae227)) {
        Py_XDECREF(cache_frame_f0c0bd681e6aa1db9b46c038bcdae227);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0c0bd681e6aa1db9b46c038bcdae227 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0c0bd681e6aa1db9b46c038bcdae227 = MAKE_FUNCTION_FRAME(codeobj_f0c0bd681e6aa1db9b46c038bcdae227, module_pygame, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f0c0bd681e6aa1db9b46c038bcdae227->m_type_description == NULL);
    frame_f0c0bd681e6aa1db9b46c038bcdae227 = cache_frame_f0c0bd681e6aa1db9b46c038bcdae227;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f0c0bd681e6aa1db9b46c038bcdae227);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f0c0bd681e6aa1db9b46c038bcdae227) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[51];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[22];
        frame_f0c0bd681e6aa1db9b46c038bcdae227->m_frame.f_lineno = 326;
        tmp_assign_source_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_numpy == NULL);
        var_numpy = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[52];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[22];
        frame_f0c0bd681e6aa1db9b46c038bcdae227->m_frame.f_lineno = 327;
        tmp_assign_source_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_OpenGL == NULL);
        var_OpenGL = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[53];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[22];
        frame_f0c0bd681e6aa1db9b46c038bcdae227->m_frame.f_lineno = 328;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_pygame == NULL);
        var_pygame = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[54];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[22];
        frame_f0c0bd681e6aa1db9b46c038bcdae227->m_frame.f_lineno = 329;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pygame;
            assert(old != NULL);
            var_pygame = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f0c0bd681e6aa1db9b46c038bcdae227);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f0c0bd681e6aa1db9b46c038bcdae227);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0c0bd681e6aa1db9b46c038bcdae227, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0c0bd681e6aa1db9b46c038bcdae227->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0c0bd681e6aa1db9b46c038bcdae227, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0c0bd681e6aa1db9b46c038bcdae227,
        type_description_1,
        var_atexit,
        var_numpy,
        var_OpenGL,
        var_pygame
    );


    // Release cached frame if used for exception.
    if (frame_f0c0bd681e6aa1db9b46c038bcdae227 == cache_frame_f0c0bd681e6aa1db9b46c038bcdae227) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f0c0bd681e6aa1db9b46c038bcdae227);
        cache_frame_f0c0bd681e6aa1db9b46c038bcdae227 = NULL;
    }

    assertFrameObject(frame_f0c0bd681e6aa1db9b46c038bcdae227);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_atexit);
    Py_DECREF(var_atexit);
    var_atexit = NULL;
    CHECK_OBJECT(var_numpy);
    Py_DECREF(var_numpy);
    var_numpy = NULL;
    CHECK_OBJECT(var_OpenGL);
    Py_DECREF(var_OpenGL);
    var_OpenGL = NULL;
    CHECK_OBJECT(var_pygame);
    Py_DECREF(var_pygame);
    var_pygame = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_atexit);
    Py_DECREF(var_atexit);
    var_atexit = NULL;
    Py_XDECREF(var_numpy);
    var_numpy = NULL;
    Py_XDECREF(var_OpenGL);
    var_OpenGL = NULL;
    Py_XDECREF(var_pygame);
    var_pygame = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__12___rect_constructor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *par_w = python_pars[2];
    PyObject *par_h = python_pars[3];
    struct Nuitka_FrameObject *frame_0ab302c395e856cbd1b8255cc87fb54f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0ab302c395e856cbd1b8255cc87fb54f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ab302c395e856cbd1b8255cc87fb54f)) {
        Py_XDECREF(cache_frame_0ab302c395e856cbd1b8255cc87fb54f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ab302c395e856cbd1b8255cc87fb54f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ab302c395e856cbd1b8255cc87fb54f = MAKE_FUNCTION_FRAME(codeobj_0ab302c395e856cbd1b8255cc87fb54f, module_pygame, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0ab302c395e856cbd1b8255cc87fb54f->m_type_description == NULL);
    frame_0ab302c395e856cbd1b8255cc87fb54f = cache_frame_0ab302c395e856cbd1b8255cc87fb54f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0ab302c395e856cbd1b8255cc87fb54f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0ab302c395e856cbd1b8255cc87fb54f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_args_element_value_2 = par_y;
        CHECK_OBJECT(par_w);
        tmp_args_element_value_3 = par_w;
        CHECK_OBJECT(par_h);
        tmp_args_element_value_4 = par_h;
        frame_0ab302c395e856cbd1b8255cc87fb54f->m_frame.f_lineno = 338;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ab302c395e856cbd1b8255cc87fb54f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ab302c395e856cbd1b8255cc87fb54f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ab302c395e856cbd1b8255cc87fb54f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ab302c395e856cbd1b8255cc87fb54f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ab302c395e856cbd1b8255cc87fb54f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ab302c395e856cbd1b8255cc87fb54f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ab302c395e856cbd1b8255cc87fb54f,
        type_description_1,
        par_x,
        par_y,
        par_w,
        par_h
    );


    // Release cached frame if used for exception.
    if (frame_0ab302c395e856cbd1b8255cc87fb54f == cache_frame_0ab302c395e856cbd1b8255cc87fb54f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0ab302c395e856cbd1b8255cc87fb54f);
        cache_frame_0ab302c395e856cbd1b8255cc87fb54f = NULL;
    }

    assertFrameObject(frame_0ab302c395e856cbd1b8255cc87fb54f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);
    CHECK_OBJECT(par_h);
    Py_DECREF(par_h);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);
    CHECK_OBJECT(par_h);
    Py_DECREF(par_h);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__13___rect_reduce(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[0];
    struct Nuitka_FrameObject *frame_60ad4fe84e268ee44bd7977620573333;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_60ad4fe84e268ee44bd7977620573333 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_60ad4fe84e268ee44bd7977620573333)) {
        Py_XDECREF(cache_frame_60ad4fe84e268ee44bd7977620573333);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60ad4fe84e268ee44bd7977620573333 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60ad4fe84e268ee44bd7977620573333 = MAKE_FUNCTION_FRAME(codeobj_60ad4fe84e268ee44bd7977620573333, module_pygame, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_60ad4fe84e268ee44bd7977620573333->m_type_description == NULL);
    frame_60ad4fe84e268ee44bd7977620573333 = cache_frame_60ad4fe84e268ee44bd7977620573333;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_60ad4fe84e268ee44bd7977620573333);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_60ad4fe84e268ee44bd7977620573333) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_args_element_value_1 = par_r;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_60ad4fe84e268ee44bd7977620573333->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 342;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_r);
            tmp_expression_value_1 = par_r;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[59]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = PyTuple_New(4);
            {
                PyObject *tmp_expression_value_2;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_expression_value_4;
                PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
                CHECK_OBJECT(par_r);
                tmp_expression_value_2 = par_r;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[60]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 343;
                    type_description_1 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
                CHECK_OBJECT(par_r);
                tmp_expression_value_3 = par_r;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[61]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 343;
                    type_description_1 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_2);
                CHECK_OBJECT(par_r);
                tmp_expression_value_4 = par_r;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[62]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 343;
                    type_description_1 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 3, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60ad4fe84e268ee44bd7977620573333);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_60ad4fe84e268ee44bd7977620573333);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60ad4fe84e268ee44bd7977620573333);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60ad4fe84e268ee44bd7977620573333, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60ad4fe84e268ee44bd7977620573333->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60ad4fe84e268ee44bd7977620573333, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60ad4fe84e268ee44bd7977620573333,
        type_description_1,
        par_r
    );


    // Release cached frame if used for exception.
    if (frame_60ad4fe84e268ee44bd7977620573333 == cache_frame_60ad4fe84e268ee44bd7977620573333) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_60ad4fe84e268ee44bd7977620573333);
        cache_frame_60ad4fe84e268ee44bd7977620573333 = NULL;
    }

    assertFrameObject(frame_60ad4fe84e268ee44bd7977620573333);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__14___color_constructor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[0];
    PyObject *par_g = python_pars[1];
    PyObject *par_b = python_pars[2];
    PyObject *par_a = python_pars[3];
    struct Nuitka_FrameObject *frame_6c8cd6ac135249e8b705b0de6ae07caa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c8cd6ac135249e8b705b0de6ae07caa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6c8cd6ac135249e8b705b0de6ae07caa)) {
        Py_XDECREF(cache_frame_6c8cd6ac135249e8b705b0de6ae07caa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c8cd6ac135249e8b705b0de6ae07caa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c8cd6ac135249e8b705b0de6ae07caa = MAKE_FUNCTION_FRAME(codeobj_6c8cd6ac135249e8b705b0de6ae07caa, module_pygame, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6c8cd6ac135249e8b705b0de6ae07caa->m_type_description == NULL);
    frame_6c8cd6ac135249e8b705b0de6ae07caa = cache_frame_6c8cd6ac135249e8b705b0de6ae07caa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6c8cd6ac135249e8b705b0de6ae07caa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6c8cd6ac135249e8b705b0de6ae07caa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_args_element_value_1 = par_r;
        CHECK_OBJECT(par_g);
        tmp_args_element_value_2 = par_g;
        CHECK_OBJECT(par_b);
        tmp_args_element_value_3 = par_b;
        CHECK_OBJECT(par_a);
        tmp_args_element_value_4 = par_a;
        frame_6c8cd6ac135249e8b705b0de6ae07caa->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c8cd6ac135249e8b705b0de6ae07caa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c8cd6ac135249e8b705b0de6ae07caa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c8cd6ac135249e8b705b0de6ae07caa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c8cd6ac135249e8b705b0de6ae07caa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c8cd6ac135249e8b705b0de6ae07caa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c8cd6ac135249e8b705b0de6ae07caa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c8cd6ac135249e8b705b0de6ae07caa,
        type_description_1,
        par_r,
        par_g,
        par_b,
        par_a
    );


    // Release cached frame if used for exception.
    if (frame_6c8cd6ac135249e8b705b0de6ae07caa == cache_frame_6c8cd6ac135249e8b705b0de6ae07caa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6c8cd6ac135249e8b705b0de6ae07caa);
        cache_frame_6c8cd6ac135249e8b705b0de6ae07caa = NULL;
    }

    assertFrameObject(frame_6c8cd6ac135249e8b705b0de6ae07caa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygame$$$function__15___color_reduce(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    struct Nuitka_FrameObject *frame_65d7dc8531ce138c1e54327776bc2450;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_65d7dc8531ce138c1e54327776bc2450 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65d7dc8531ce138c1e54327776bc2450)) {
        Py_XDECREF(cache_frame_65d7dc8531ce138c1e54327776bc2450);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65d7dc8531ce138c1e54327776bc2450 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65d7dc8531ce138c1e54327776bc2450 = MAKE_FUNCTION_FRAME(codeobj_65d7dc8531ce138c1e54327776bc2450, module_pygame, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_65d7dc8531ce138c1e54327776bc2450->m_type_description == NULL);
    frame_65d7dc8531ce138c1e54327776bc2450 = cache_frame_65d7dc8531ce138c1e54327776bc2450;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_65d7dc8531ce138c1e54327776bc2450);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_65d7dc8531ce138c1e54327776bc2450) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_c);
        tmp_args_element_value_1 = par_c;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_65d7dc8531ce138c1e54327776bc2450->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 355;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_c);
            tmp_expression_value_1 = par_c;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = PyTuple_New(4);
            {
                PyObject *tmp_expression_value_2;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_expression_value_4;
                PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
                CHECK_OBJECT(par_c);
                tmp_expression_value_2 = par_c;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[66]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 356;
                    type_description_1 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
                CHECK_OBJECT(par_c);
                tmp_expression_value_3 = par_c;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[67]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 356;
                    type_description_1 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_2);
                CHECK_OBJECT(par_c);
                tmp_expression_value_4 = par_c;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[68]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 356;
                    type_description_1 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 3, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_65d7dc8531ce138c1e54327776bc2450);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_65d7dc8531ce138c1e54327776bc2450);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_65d7dc8531ce138c1e54327776bc2450);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_65d7dc8531ce138c1e54327776bc2450, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65d7dc8531ce138c1e54327776bc2450->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65d7dc8531ce138c1e54327776bc2450, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65d7dc8531ce138c1e54327776bc2450,
        type_description_1,
        par_c
    );


    // Release cached frame if used for exception.
    if (frame_65d7dc8531ce138c1e54327776bc2450 == cache_frame_65d7dc8531ce138c1e54327776bc2450) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_65d7dc8531ce138c1e54327776bc2450);
        cache_frame_65d7dc8531ce138c1e54327776bc2450 = NULL;
    }

    assertFrameObject(frame_65d7dc8531ce138c1e54327776bc2450);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__10_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__10_lambda,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1b900d24055d7215ae6870b32744656d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__11_packager_imports() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__11_packager_imports,
        mod_consts[224],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0c0bd681e6aa1db9b46c038bcdae227,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__12___rect_constructor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__12___rect_constructor,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0ab302c395e856cbd1b8255cc87fb54f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__13___rect_reduce() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__13___rect_reduce,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_60ad4fe84e268ee44bd7977620573333,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__14___color_constructor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__14___color_constructor,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c8cd6ac135249e8b705b0de6ae07caa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__15___color_reduce() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__15___color_reduce,
        mod_consts[228],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_65d7dc8531ce138c1e54327776bc2450,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__1___init__,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_318a5162d238939c32e46e0e91a40749,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__2___getattr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__2___getattr__,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_8602176b2adb4f3855b7c89f4eeedfcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__3___nonzero__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_45de78a1981e0730e3b20bffb7bc8b63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__4_warn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__4_warn,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_e1ae2a00e9723aaa75fbea216d566bd7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__5_lambda,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e9896ab2697e41eaa8f0a0a68d21b6ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__6_warn_unwanted_files() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__6_warn_unwanted_files,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d67c666f51fb78e6db08ef0116b2ca85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__7_lambda,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_21fc3462c3f77df84104cebb85eed04e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__8_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__8_lambda,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_18182d285f525a950c311e00a3ed6509,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygame$$$function__9_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygame$$$function__9_lambda,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4fa19f1157e1bfacd4fab7bb3beee95c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygame,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pygame[] = {
    impl_pygame$$$function__1___init__,
    impl_pygame$$$function__2___getattr__,
    NULL,
    impl_pygame$$$function__4_warn,
    impl_pygame$$$function__5_lambda,
    impl_pygame$$$function__6_warn_unwanted_files,
    impl_pygame$$$function__7_lambda,
    impl_pygame$$$function__8_lambda,
    impl_pygame$$$function__9_lambda,
    impl_pygame$$$function__10_lambda,
    impl_pygame$$$function__11_packager_imports,
    impl_pygame$$$function__12___rect_constructor,
    impl_pygame$$$function__13___rect_reduce,
    impl_pygame$$$function__14___color_constructor,
    impl_pygame$$$function__15___color_reduce,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pygame;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_pygame) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pygame[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pygame,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pygame(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pygame");

    // Store the module for future use.
    module_pygame = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pygame: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pygame: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pygame: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpygame\n");

    moduledict_pygame = MODULE_DICT(module_pygame);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pygame,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pygame,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[8]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pygame,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pygame,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pygame,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pygame);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pygame, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pygame, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pygame, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pygame);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_17f06c4938304ac10eb1828bc3c33409;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_pygame$$$class__1_MissingModule_42 = NULL;
    struct Nuitka_FrameObject *frame_79dd8ae047b079c1da184ca244912d49_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_79dd8ae047b079c1da184ca244912d49_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionStackItem exception_preserved_5;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_ExceptionStackItem exception_preserved_6;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_ExceptionStackItem exception_preserved_7;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_ExceptionStackItem exception_preserved_8;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    struct Nuitka_ExceptionStackItem exception_preserved_9;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    struct Nuitka_ExceptionStackItem exception_preserved_10;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    struct Nuitka_ExceptionStackItem exception_preserved_11;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    struct Nuitka_ExceptionStackItem exception_preserved_12;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    struct Nuitka_ExceptionStackItem exception_preserved_13;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    struct Nuitka_ExceptionStackItem exception_preserved_14;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    struct Nuitka_ExceptionStackItem exception_preserved_15;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    struct Nuitka_ExceptionStackItem exception_preserved_16;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    struct Nuitka_ExceptionStackItem exception_preserved_17;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    struct Nuitka_ExceptionStackItem exception_preserved_18;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    struct Nuitka_ExceptionStackItem exception_preserved_19;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    struct Nuitka_ExceptionStackItem exception_preserved_20;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    struct Nuitka_ExceptionStackItem exception_preserved_21;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    struct Nuitka_ExceptionStackItem exception_preserved_22;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    struct Nuitka_ExceptionStackItem exception_preserved_23;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    struct Nuitka_ExceptionStackItem exception_preserved_24;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    struct Nuitka_ExceptionStackItem exception_preserved_25;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    struct Nuitka_ExceptionStackItem exception_preserved_26;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    struct Nuitka_ExceptionStackItem exception_preserved_27;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    struct Nuitka_ExceptionStackItem exception_preserved_28;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_pygame, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pygame, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_17f06c4938304ac10eb1828bc3c33409 = MAKE_MODULE_FRAME(codeobj_17f06c4938304ac10eb1828bc3c33409, module_pygame);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_17f06c4938304ac10eb1828bc3c33409);
    assert(Py_REFCNT(frame_17f06c4938304ac10eb1828bc3c33409) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[30]);
            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[72]);
                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[73]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[74]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_subscript_value_1 = mod_consts[22];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[77], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[78], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[79], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pygame, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_pygame, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_pygame, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_5 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_5 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[31]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 33;
        tmp_expression_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[22];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_7);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[72]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[82];
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[83];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_add_expr_right_1 == NULL)) {
            tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[72]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[82];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[84];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        tmp_bases_value_1 = mod_consts[85];
        tmp_assign_source_9 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[84];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 42;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_9 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[86]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_10 = tmp_class_creation_1__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[86]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        tmp_args_value_1 = mod_consts[87];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 42;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_11 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[88]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[89];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[7];
        tmp_getattr_default_1 = mod_consts[90];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[7]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 42;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pygame$$$class__1_MissingModule_42 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[32];
        tmp_res = PyObject_SetItem(locals_pygame$$$class__1_MissingModule_42, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_pygame$$$class__1_MissingModule_42, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_79dd8ae047b079c1da184ca244912d49_2)) {
            Py_XDECREF(cache_frame_79dd8ae047b079c1da184ca244912d49_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_79dd8ae047b079c1da184ca244912d49_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_79dd8ae047b079c1da184ca244912d49_2 = MAKE_FUNCTION_FRAME(codeobj_79dd8ae047b079c1da184ca244912d49, module_pygame, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_79dd8ae047b079c1da184ca244912d49_2->m_type_description == NULL);
        frame_79dd8ae047b079c1da184ca244912d49_2 = cache_frame_79dd8ae047b079c1da184ca244912d49_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_79dd8ae047b079c1da184ca244912d49_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_79dd8ae047b079c1da184ca244912d49_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_pygame$$$class__1_MissingModule_42, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[95];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_pygame$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_pygame$$$class__1_MissingModule_42, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pygame$$$function__2___getattr__();

        tmp_res = PyObject_SetItem(locals_pygame$$$class__1_MissingModule_42, mod_consts[98], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygame$$$function__3___nonzero__();

        tmp_res = PyObject_SetItem(locals_pygame$$$class__1_MissingModule_42, mod_consts[100], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pygame$$$class__1_MissingModule_42, mod_consts[100]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[100]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_pygame$$$class__1_MissingModule_42, mod_consts[102], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygame$$$function__4_warn();

        tmp_res = PyObject_SetItem(locals_pygame$$$class__1_MissingModule_42, mod_consts[12], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_79dd8ae047b079c1da184ca244912d49_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_79dd8ae047b079c1da184ca244912d49_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_79dd8ae047b079c1da184ca244912d49_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_79dd8ae047b079c1da184ca244912d49_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_79dd8ae047b079c1da184ca244912d49_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_79dd8ae047b079c1da184ca244912d49_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_79dd8ae047b079c1da184ca244912d49_2 == cache_frame_79dd8ae047b079c1da184ca244912d49_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_79dd8ae047b079c1da184ca244912d49_2);
            cache_frame_79dd8ae047b079c1da184ca244912d49_2 = NULL;
        }

        assertFrameObject(frame_79dd8ae047b079c1da184ca244912d49_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[92];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[85];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_pygame$$$class__1_MissingModule_42;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 42;
            tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pygame$$$class__1_MissingModule_42);
        locals_pygame$$$class__1_MissingModule_42 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pygame$$$class__1_MissingModule_42);
        locals_pygame$$$class__1_MissingModule_42 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 42;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[104];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_pygame;
        tmp_fromlist_value_1 = mod_consts[105];
        tmp_level_value_1 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 83;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_pygame, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[106];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_pygame;
        tmp_fromlist_value_2 = mod_consts[105];
        tmp_level_value_2 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 84;
        tmp_star_imported_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_pygame, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[107];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_pygame;
        tmp_fromlist_value_3 = mod_consts[105];
        tmp_level_value_3 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 85;
        tmp_star_imported_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_pygame, true, tmp_star_imported_3);
        Py_DECREF(tmp_star_imported_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[108];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[109];
        tmp_level_value_4 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 86;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pygame,
                mod_consts[56],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[110];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[111];
        tmp_level_value_5 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 87;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pygame,
                mod_consts[112],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[112]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pygame,
                mod_consts[113],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[113]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_17);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[114];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 88;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[115];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 89;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_expression_value_14 == NULL));
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[116]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[63]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[117];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = Py_None;
        tmp_level_value_8 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 92;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_expression_value_16 == NULL));
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[118]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[119]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[120];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = Py_None;
        tmp_level_value_9 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 95;
        tmp_assign_source_23 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_expression_value_18 == NULL));
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[121]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[122]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[121]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[123]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_26 == NULL)) {
            tmp_assign_source_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pygame, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_26);
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 104;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[127];
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[128];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 107;
        tmp_assign_source_27 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_27);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_tuple_element_3;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_6;
        }
        tmp_cmp_expr_right_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_cmp_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_6;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 109;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[130], 0), mod_consts[131]);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_28);
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 106;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_6;
    branch_end_5:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[133];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = Py_None;
        tmp_level_value_11 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 112;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_29);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_tuple_element_4;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_3, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_3, 1, tmp_tuple_element_4);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_cmp_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_8;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_8;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 114;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[134], 0), mod_consts[131]);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_30);
    }
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 111;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_8;
    branch_end_6:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[136];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = Py_None;
        tmp_level_value_12 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 117;
        tmp_assign_source_31 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_31);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_9 == NULL) {
        exception_keeper_tb_9 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_9);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_keeper_tb_9 = ADD_TRACEBACK(exception_keeper_tb_9, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_9);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_tuple_element_5;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_10;
        }
        tmp_cmp_expr_right_4 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_4, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_4, 1, tmp_tuple_element_5);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_cmp_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_10;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_10;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 119;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[137], 0), mod_consts[131]);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_32);
    }
    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 116;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_10;
    branch_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[139];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = Py_None;
        tmp_level_value_13 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 122;
        tmp_assign_source_33 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_33);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_11 == NULL) {
        exception_keeper_tb_11 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_11);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_keeper_tb_11 = ADD_TRACEBACK(exception_keeper_tb_11, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_11);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_tuple_element_6;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_12;
        }
        tmp_cmp_expr_right_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_5, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_5, 1, tmp_tuple_element_6);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_cmp_expr_right_5);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_12;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_12;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 124;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[140], 0), mod_consts[131]);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_34);
    }
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 121;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_12;
    branch_end_8:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    goto try_end_9;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_9:;
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[142];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = Py_None;
        tmp_level_value_14 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 127;
        tmp_assign_source_35 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_35);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_13 == NULL) {
        exception_keeper_tb_13 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_13);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_keeper_tb_13 = ADD_TRACEBACK(exception_keeper_tb_13, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_13);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_tuple_element_7;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_14;
        }
        tmp_cmp_expr_right_6 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_6, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_6, 1, tmp_tuple_element_7);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_cmp_expr_right_6);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_14;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_14;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 129;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[143], 0), mod_consts[131]);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_36);
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 126;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_14;
    branch_end_9:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    goto try_end_11;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_11:;
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[145];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = Py_None;
        tmp_level_value_15 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 132;
        tmp_assign_source_37 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_37);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 6.
    exception_preserved_6 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_15 == NULL) {
        exception_keeper_tb_15 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_15);
    } else if (exception_keeper_lineno_15 != 0) {
        exception_keeper_tb_15 = ADD_TRACEBACK(exception_keeper_tb_15, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_15);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15);
    // Tried code:
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_tuple_element_8;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_16;
        }
        tmp_cmp_expr_right_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_7, 0, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_7, 1, tmp_tuple_element_8);
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_cmp_expr_right_7);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_16;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 134;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[146], 0), mod_consts[131]);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_38);
    }
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 131;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_16;
    branch_end_10:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(&exception_preserved_6);

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(&exception_preserved_6);

    goto try_end_13;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_13:;
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[148];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = Py_None;
        tmp_level_value_16 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 137;
        tmp_assign_source_39 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_39);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 7.
    exception_preserved_7 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_17 == NULL) {
        exception_keeper_tb_17 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_17);
    } else if (exception_keeper_lineno_17 != 0) {
        exception_keeper_tb_17 = ADD_TRACEBACK(exception_keeper_tb_17, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_17);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_17, &exception_keeper_value_17, &exception_keeper_tb_17);
    // Tried code:
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_tuple_element_9;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_18;
        }
        tmp_cmp_expr_right_8 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_8, 0, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_8, 1, tmp_tuple_element_9);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_cmp_expr_right_8);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_18;
        }
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_18;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 139;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[131]);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_40);
    }
    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 136;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_18;
    branch_end_11:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(&exception_preserved_7);

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(&exception_preserved_7);

    goto try_end_15;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_15:;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[151];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = Py_None;
        tmp_level_value_17 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 142;
        tmp_assign_source_41 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_41);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 8.
    exception_preserved_8 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_19 == NULL) {
        exception_keeper_tb_19 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_19);
    } else if (exception_keeper_lineno_19 != 0) {
        exception_keeper_tb_19 = ADD_TRACEBACK(exception_keeper_tb_19, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_19);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    // Tried code:
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_tuple_element_10;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        tmp_cmp_expr_right_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_9, 0, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_9, 1, tmp_tuple_element_10);
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_cmp_expr_right_9);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_right_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_20;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 144;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[152], 0), mod_consts[131]);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_42);
    }
    goto branch_end_12;
    branch_no_12:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 141;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_20;
    branch_end_12:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(&exception_preserved_8);

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(&exception_preserved_8);

    goto try_end_17;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_17:;
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[154];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = Py_None;
        tmp_level_value_18 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 147;
        tmp_assign_source_43 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[154];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[155];
        tmp_level_value_19 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 148;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_21;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pygame,
                mod_consts[156],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[156]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_44);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 9.
    exception_preserved_9 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_21 == NULL) {
        exception_keeper_tb_21 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_21);
    } else if (exception_keeper_lineno_21 != 0) {
        exception_keeper_tb_21 = ADD_TRACEBACK(exception_keeper_tb_21, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_21);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_21, &exception_keeper_value_21, &exception_keeper_tb_21);
    // Tried code:
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_tuple_element_11;
        tmp_cmp_expr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_22;
        }
        tmp_cmp_expr_right_10 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_10, 0, tmp_tuple_element_11);
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_10, 1, tmp_tuple_element_11);
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_cmp_expr_right_10);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_right_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_22;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 150;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[157], 0), mod_consts[131]);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_pygame$$$function__5_lambda();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_46);
    }
    goto branch_end_13;
    branch_no_13:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 146;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_22;
    branch_end_13:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(&exception_preserved_9);

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(&exception_preserved_9);

    goto try_end_19;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_19:;
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[160];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = Py_None;
        tmp_level_value_20 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 154;
        tmp_assign_source_47 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_47);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 10.
    exception_preserved_10 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_23 == NULL) {
        exception_keeper_tb_23 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_23);
    } else if (exception_keeper_lineno_23 != 0) {
        exception_keeper_tb_23 = ADD_TRACEBACK(exception_keeper_tb_23, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_23);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_23, &exception_keeper_value_23, &exception_keeper_tb_23);
    // Tried code:
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_tuple_element_12;
        tmp_cmp_expr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_24;
        }
        tmp_cmp_expr_right_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_11, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto tuple_build_exception_11;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_11, 1, tmp_tuple_element_12);
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_cmp_expr_right_11);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_24;
        }
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_24;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 156;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[161], 0), mod_consts[131]);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_48);
    }
    goto branch_end_14;
    branch_no_14:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 153;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_24;
    branch_end_14:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(&exception_preserved_10);

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(&exception_preserved_10);

    goto try_end_21;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_21:;
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[163];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = Py_None;
        tmp_level_value_21 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 159;
        tmp_assign_source_49 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto try_except_handler_25;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_49);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 11.
    exception_preserved_11 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_25 == NULL) {
        exception_keeper_tb_25 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_25);
    } else if (exception_keeper_lineno_25 != 0) {
        exception_keeper_tb_25 = ADD_TRACEBACK(exception_keeper_tb_25, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_25);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_25, &exception_keeper_value_25, &exception_keeper_tb_25);
    // Tried code:
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_tuple_element_13;
        tmp_cmp_expr_left_12 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_26;
        }
        tmp_cmp_expr_right_12 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_12, 0, tmp_tuple_element_13);
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto tuple_build_exception_12;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_12, 1, tmp_tuple_element_13);
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_cmp_expr_right_12);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_right_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_26;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_26;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 161;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[164], 0), mod_consts[131]);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_50);
    }
    goto branch_end_15;
    branch_no_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 158;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_26;
    branch_end_15:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(&exception_preserved_11);

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(&exception_preserved_11);

    goto try_end_23;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_23:;
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[166];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = Py_None;
        tmp_level_value_22 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 164;
        tmp_assign_source_51 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_51);
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 12.
    exception_preserved_12 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_27 == NULL) {
        exception_keeper_tb_27 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_27);
    } else if (exception_keeper_lineno_27 != 0) {
        exception_keeper_tb_27 = ADD_TRACEBACK(exception_keeper_tb_27, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_27);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_27, &exception_keeper_value_27, &exception_keeper_tb_27);
    // Tried code:
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_tuple_element_14;
        tmp_cmp_expr_left_13 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_28;
        }
        tmp_cmp_expr_right_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_13, 0, tmp_tuple_element_14);
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto tuple_build_exception_13;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_13, 1, tmp_tuple_element_14);
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_cmp_expr_right_13);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_right_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_28;
        }
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_28;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 166;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[131]);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_52);
    }
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 163;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_28;
    branch_end_16:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(&exception_preserved_12);

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(&exception_preserved_12);

    goto try_end_25;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_25:;
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_pygame$$$function__6_warn_unwanted_files();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_53);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[170];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[171];
        tmp_level_value_23 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 223;
        tmp_assign_source_54 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_29;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_54;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pygame,
                mod_consts[172],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[172]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pygame,
                mod_consts[173],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[173]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_56);
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_29;
    // End of try:
    try_end_27:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 13.
    exception_preserved_13 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_30 == NULL) {
        exception_keeper_tb_30 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_30);
    } else if (exception_keeper_lineno_30 != 0) {
        exception_keeper_tb_30 = ADD_TRACEBACK(exception_keeper_tb_30, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_30);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_30, &exception_keeper_value_30, &exception_keeper_tb_30);
    // Tried code:
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_tuple_element_15;
        tmp_cmp_expr_left_14 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto try_except_handler_31;
        }
        tmp_cmp_expr_right_14 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_14, 0, tmp_tuple_element_15);
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_14, 1, tmp_tuple_element_15);
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_cmp_expr_right_14);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_right_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto try_except_handler_31;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_57;


        tmp_assign_source_57 = MAKE_FUNCTION_pygame$$$function__7_lambda();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_57);
    }
    goto branch_end_17;
    branch_no_17:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 222;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_31;
    branch_end_17:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(&exception_preserved_13);

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(&exception_preserved_13);

    goto try_end_28;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_28:;
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[174];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = Py_None;
        tmp_level_value_24 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 228;
        tmp_assign_source_58 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[174];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[175];
        tmp_level_value_25 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 229;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto try_except_handler_32;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pygame,
                mod_consts[176],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[176]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_59);
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 14.
    exception_preserved_14 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_32 == NULL) {
        exception_keeper_tb_32 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_32);
    } else if (exception_keeper_lineno_32 != 0) {
        exception_keeper_tb_32 = ADD_TRACEBACK(exception_keeper_tb_32, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_32);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_32, &exception_keeper_value_32, &exception_keeper_tb_32);
    // Tried code:
    {
        bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_tuple_element_16;
        tmp_cmp_expr_left_15 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_33;
        }
        tmp_cmp_expr_right_15 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_15, 0, tmp_tuple_element_16);
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto tuple_build_exception_15;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_15, 1, tmp_tuple_element_16);
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_cmp_expr_right_15);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_right_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_33;
        }
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_33;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 231;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[177], 0), mod_consts[131]);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_33;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;


        tmp_assign_source_61 = MAKE_FUNCTION_pygame$$$function__8_lambda();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_61);
    }
    goto branch_end_18;
    branch_no_18:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 227;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_33;
    branch_end_18:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(&exception_preserved_14);

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(&exception_preserved_14);

    goto try_end_30;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_30:;
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[179];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[180];
        tmp_level_value_26 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 235;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_34;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_pygame,
                mod_consts[181],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[181]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_34;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_62);
    }
    goto try_end_32;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 15.
    exception_preserved_15 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_34 == NULL) {
        exception_keeper_tb_34 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_34);
    } else if (exception_keeper_lineno_34 != 0) {
        exception_keeper_tb_34 = ADD_TRACEBACK(exception_keeper_tb_34, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_34);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_34, &exception_keeper_value_34, &exception_keeper_tb_34);
    // Tried code:
    {
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_tuple_element_17;
        tmp_cmp_expr_left_16 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_35;
        }
        tmp_cmp_expr_right_16 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_16, 0, tmp_tuple_element_17);
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto tuple_build_exception_16;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_16, 1, tmp_tuple_element_17);
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_cmp_expr_right_16);
        goto try_except_handler_35;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_right_16);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto try_except_handler_35;
        }
        tmp_condition_result_20 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_63;


        tmp_assign_source_63 = MAKE_FUNCTION_pygame$$$function__9_lambda();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_63);
    }
    goto branch_end_19;
    branch_no_19:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 234;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_35;
    branch_end_19:;
    goto try_end_33;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(&exception_preserved_15);

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_33:;
    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(&exception_preserved_15);

    goto try_end_32;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_32:;
    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[182];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[183];
        tmp_level_value_27 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 240;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_36;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_pygame,
                mod_consts[184],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[184]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_36;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_64);
    }
    goto try_end_34;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 16.
    exception_preserved_16 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_36 == NULL) {
        exception_keeper_tb_36 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_36);
    } else if (exception_keeper_lineno_36 != 0) {
        exception_keeper_tb_36 = ADD_TRACEBACK(exception_keeper_tb_36, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_36);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_36, &exception_keeper_value_36, &exception_keeper_tb_36);
    // Tried code:
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_tuple_element_18;
        tmp_cmp_expr_left_17 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_37;
        }
        tmp_cmp_expr_right_17 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_17, 0, tmp_tuple_element_18);
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto tuple_build_exception_17;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_17, 1, tmp_tuple_element_18);
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_cmp_expr_right_17);
        goto try_except_handler_37;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_right_17);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_37;
        }
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_65;


        tmp_assign_source_65 = MAKE_FUNCTION_pygame$$$function__10_lambda();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_65);
    }
    goto branch_end_20;
    branch_no_20:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 239;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_37;
    branch_end_20:;
    goto try_end_35;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(&exception_preserved_16);

    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_35:;
    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(&exception_preserved_16);

    goto try_end_34;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_34:;
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[185];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = Py_None;
        tmp_level_value_28 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 245;
        tmp_assign_source_66 = IMPORT_MODULE5(tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_38;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_66);
    }
    goto try_end_36;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 17.
    exception_preserved_17 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_38 == NULL) {
        exception_keeper_tb_38 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_38);
    } else if (exception_keeper_lineno_38 != 0) {
        exception_keeper_tb_38 = ADD_TRACEBACK(exception_keeper_tb_38, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_38);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_38, &exception_keeper_value_38, &exception_keeper_tb_38);
    // Tried code:
    {
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        PyObject *tmp_tuple_element_19;
        tmp_cmp_expr_left_18 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_39;
        }
        tmp_cmp_expr_right_18 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_18, 0, tmp_tuple_element_19);
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto tuple_build_exception_18;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_18, 1, tmp_tuple_element_19);
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_cmp_expr_right_18);
        goto try_except_handler_39;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        Py_DECREF(tmp_cmp_expr_right_18);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_39;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_39;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 247;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[186], 0), mod_consts[131]);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_39;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_67);
    }
    goto branch_end_21;
    branch_no_21:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 244;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_39;
    branch_end_21:;
    goto try_end_37;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(&exception_preserved_17);

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_37:;
    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(&exception_preserved_17);

    goto try_end_36;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_36:;
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[188];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = Py_None;
        tmp_level_value_29 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 250;
        tmp_assign_source_68 = IMPORT_MODULE5(tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_40;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_68);
    }
    goto try_end_38;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 18.
    exception_preserved_18 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_40 == NULL) {
        exception_keeper_tb_40 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_40);
    } else if (exception_keeper_lineno_40 != 0) {
        exception_keeper_tb_40 = ADD_TRACEBACK(exception_keeper_tb_40, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_40);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_40, &exception_keeper_value_40, &exception_keeper_tb_40);
    // Tried code:
    {
        bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        PyObject *tmp_tuple_element_20;
        tmp_cmp_expr_left_19 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto try_except_handler_41;
        }
        tmp_cmp_expr_right_19 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_19, 0, tmp_tuple_element_20);
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto tuple_build_exception_19;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_19, 1, tmp_tuple_element_20);
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_cmp_expr_right_19);
        goto try_except_handler_41;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        Py_DECREF(tmp_cmp_expr_right_19);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto try_except_handler_41;
        }
        tmp_condition_result_23 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_41;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 252;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[189], 0), mod_consts[131]);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_41;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_69);
    }
    goto branch_end_22;
    branch_no_22:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 249;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_41;
    branch_end_22:;
    goto try_end_39;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 18.
    SET_CURRENT_EXCEPTION(&exception_preserved_18);

    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_39:;
    // Restore previous exception id 18.
    SET_CURRENT_EXCEPTION(&exception_preserved_18);

    goto try_end_38;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_38:;
    {
        bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        PyObject *tmp_expression_value_21;
        tmp_cmp_expr_left_20 = mod_consts[191];
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_expression_value_21 == NULL));
        tmp_cmp_expr_right_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[72]);
        if (tmp_cmp_expr_right_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_20, tmp_cmp_expr_left_20);
        Py_DECREF(tmp_cmp_expr_right_20);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_24 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[192];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = Py_None;
        tmp_level_value_30 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 257;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_42;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_pygame,
                mod_consts[193],
                mod_consts[22]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[193]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_42;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_70);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        assert(!(tmp_ass_subvalue_2 == NULL));
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        assert(!(tmp_expression_value_22 == NULL));
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[195]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_42;
        }
        tmp_ass_subscript_2 = mod_consts[196];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_42;
        }
    }
    goto try_end_40;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 19.
    exception_preserved_19 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_42 == NULL) {
        exception_keeper_tb_42 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_42);
    } else if (exception_keeper_lineno_42 != 0) {
        exception_keeper_tb_42 = ADD_TRACEBACK(exception_keeper_tb_42, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_42);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_42, &exception_keeper_value_42, &exception_keeper_tb_42);
    // Tried code:
    {
        bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        PyObject *tmp_tuple_element_21;
        tmp_cmp_expr_left_21 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_43;
        }
        tmp_cmp_expr_right_21 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_21, 0, tmp_tuple_element_21);
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto tuple_build_exception_20;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_21, 1, tmp_tuple_element_21);
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_cmp_expr_right_21);
        goto try_except_handler_43;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        Py_DECREF(tmp_cmp_expr_right_21);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_43;
        }
        tmp_condition_result_25 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 256;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_43;
    branch_no_24:;
    goto try_end_41;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 19.
    SET_CURRENT_EXCEPTION(&exception_preserved_19);

    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_41:;
    // Restore previous exception id 19.
    SET_CURRENT_EXCEPTION(&exception_preserved_19);

    goto try_end_40;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_40:;
    branch_no_23:;
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[196];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = Py_None;
        tmp_level_value_31 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 263;
        tmp_assign_source_71 = IMPORT_MODULE5(tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_44;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_name_value_32;
        PyObject *tmp_globals_arg_value_32;
        PyObject *tmp_locals_arg_value_32;
        PyObject *tmp_fromlist_value_32;
        PyObject *tmp_level_value_32;
        tmp_name_value_32 = mod_consts[197];
        tmp_globals_arg_value_32 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_32 = Py_None;
        tmp_fromlist_value_32 = Py_None;
        tmp_level_value_32 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 264;
        tmp_assign_source_72 = IMPORT_MODULE5(tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_25;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_expression_value_24 == NULL));
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[198]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_44;
        }
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[199]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_44;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 266;

            goto try_except_handler_44;
        }
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[194]);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 266;

            goto try_except_handler_44;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[199], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_44;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_28;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_44;
        }
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[198]);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_44;
        }
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[200]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_44;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 267;

            goto try_except_handler_44;
        }
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[194]);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 267;

            goto try_except_handler_44;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[200], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_44;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_31;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto try_except_handler_44;
        }
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[198]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto try_except_handler_44;
        }
        tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[201]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto try_except_handler_44;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 268;

            goto try_except_handler_44;
        }
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[194]);
        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 268;

            goto try_except_handler_44;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[201], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto try_except_handler_44;
        }
    }
    goto try_end_42;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 20.
    exception_preserved_20 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_44 == NULL) {
        exception_keeper_tb_44 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_44);
    } else if (exception_keeper_lineno_44 != 0) {
        exception_keeper_tb_44 = ADD_TRACEBACK(exception_keeper_tb_44, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_44);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_44, &exception_keeper_value_44, &exception_keeper_tb_44);
    // Tried code:
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        PyObject *tmp_tuple_element_22;
        tmp_cmp_expr_left_22 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_45;
        }
        tmp_cmp_expr_right_22 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_22, 0, tmp_tuple_element_22);
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto tuple_build_exception_21;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_22, 1, tmp_tuple_element_22);
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_cmp_expr_right_22);
        goto try_except_handler_45;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        Py_DECREF(tmp_cmp_expr_right_22);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_45;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_45;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 270;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[202], 0), mod_consts[131]);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto try_except_handler_45;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_73);
    }
    goto branch_end_25;
    branch_no_25:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 262;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_45;
    branch_end_25:;
    goto try_end_43;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 20.
    SET_CURRENT_EXCEPTION(&exception_preserved_20);

    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_43:;
    // Restore previous exception id 20.
    SET_CURRENT_EXCEPTION(&exception_preserved_20);

    goto try_end_42;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_42:;
    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_name_value_33;
        PyObject *tmp_globals_arg_value_33;
        PyObject *tmp_locals_arg_value_33;
        PyObject *tmp_fromlist_value_33;
        PyObject *tmp_level_value_33;
        tmp_name_value_33 = mod_consts[203];
        tmp_globals_arg_value_33 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_33 = Py_None;
        tmp_fromlist_value_33 = Py_None;
        tmp_level_value_33 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 274;
        tmp_assign_source_74 = IMPORT_MODULE5(tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto try_except_handler_46;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_74);
    }
    goto try_end_44;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 21.
    exception_preserved_21 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_46 == NULL) {
        exception_keeper_tb_46 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_46);
    } else if (exception_keeper_lineno_46 != 0) {
        exception_keeper_tb_46 = ADD_TRACEBACK(exception_keeper_tb_46, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_46);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_46, &exception_keeper_value_46, &exception_keeper_tb_46);
    // Tried code:
    {
        bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        PyObject *tmp_tuple_element_23;
        tmp_cmp_expr_left_23 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto try_except_handler_47;
        }
        tmp_cmp_expr_right_23 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_23, 0, tmp_tuple_element_23);
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto tuple_build_exception_22;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_23, 1, tmp_tuple_element_23);
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_cmp_expr_right_23);
        goto try_except_handler_47;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        Py_DECREF(tmp_cmp_expr_right_23);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto try_except_handler_47;
        }
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 273;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_47;
    branch_no_26:;
    goto try_end_45;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 21.
    SET_CURRENT_EXCEPTION(&exception_preserved_21);

    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_45:;
    // Restore previous exception id 21.
    SET_CURRENT_EXCEPTION(&exception_preserved_21);

    goto try_end_44;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_44:;
    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_name_value_34;
        PyObject *tmp_globals_arg_value_34;
        PyObject *tmp_locals_arg_value_34;
        PyObject *tmp_fromlist_value_34;
        PyObject *tmp_level_value_34;
        tmp_name_value_34 = mod_consts[204];
        tmp_globals_arg_value_34 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_34 = Py_None;
        tmp_fromlist_value_34 = Py_None;
        tmp_level_value_34 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 282;
        tmp_assign_source_75 = IMPORT_MODULE5(tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto try_except_handler_48;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_75);
    }
    goto try_end_46;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 22.
    exception_preserved_22 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_48 == NULL) {
        exception_keeper_tb_48 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_48);
    } else if (exception_keeper_lineno_48 != 0) {
        exception_keeper_tb_48 = ADD_TRACEBACK(exception_keeper_tb_48, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_48);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_48, &exception_keeper_value_48, &exception_keeper_tb_48);
    // Tried code:
    {
        bool tmp_condition_result_28;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        PyObject *tmp_tuple_element_24;
        tmp_cmp_expr_left_24 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_49;
        }
        tmp_cmp_expr_right_24 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_24, 0, tmp_tuple_element_24);
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto tuple_build_exception_23;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_24, 1, tmp_tuple_element_24);
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_cmp_expr_right_24);
        goto try_except_handler_49;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        Py_DECREF(tmp_cmp_expr_right_24);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_49;
        }
        tmp_condition_result_28 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_49;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 284;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[205], 0), mod_consts[131]);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_49;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_76);
    }
    goto branch_end_27;
    branch_no_27:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 281;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_49;
    branch_end_27:;
    goto try_end_47;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 22.
    SET_CURRENT_EXCEPTION(&exception_preserved_22);

    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_47:;
    // Restore previous exception id 22.
    SET_CURRENT_EXCEPTION(&exception_preserved_22);

    goto try_end_46;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_46:;
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_name_value_35;
        PyObject *tmp_globals_arg_value_35;
        PyObject *tmp_locals_arg_value_35;
        PyObject *tmp_fromlist_value_35;
        PyObject *tmp_level_value_35;
        tmp_name_value_35 = mod_consts[207];
        tmp_globals_arg_value_35 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_35 = Py_None;
        tmp_fromlist_value_35 = Py_None;
        tmp_level_value_35 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 288;
        tmp_assign_source_77 = IMPORT_MODULE5(tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto try_except_handler_50;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_77);
    }
    goto try_end_48;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 23.
    exception_preserved_23 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_50 == NULL) {
        exception_keeper_tb_50 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_50);
    } else if (exception_keeper_lineno_50 != 0) {
        exception_keeper_tb_50 = ADD_TRACEBACK(exception_keeper_tb_50, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_50);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_50, &exception_keeper_value_50, &exception_keeper_tb_50);
    // Tried code:
    {
        bool tmp_condition_result_29;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        PyObject *tmp_tuple_element_25;
        tmp_cmp_expr_left_25 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_51;
        }
        tmp_cmp_expr_right_25 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_25, 0, tmp_tuple_element_25);
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto tuple_build_exception_24;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_25, 1, tmp_tuple_element_25);
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_cmp_expr_right_25);
        goto try_except_handler_51;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        Py_DECREF(tmp_cmp_expr_right_25);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto try_except_handler_51;
        }
        tmp_condition_result_29 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_51;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 290;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[208], 0), mod_consts[131]);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_51;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_78);
    }
    goto branch_end_28;
    branch_no_28:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 287;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_51;
    branch_end_28:;
    goto try_end_49;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 23.
    SET_CURRENT_EXCEPTION(&exception_preserved_23);

    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_49:;
    // Restore previous exception id 23.
    SET_CURRENT_EXCEPTION(&exception_preserved_23);

    goto try_end_48;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_48:;
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_name_value_36;
        PyObject *tmp_globals_arg_value_36;
        PyObject *tmp_locals_arg_value_36;
        PyObject *tmp_fromlist_value_36;
        PyObject *tmp_level_value_36;
        tmp_name_value_36 = mod_consts[210];
        tmp_globals_arg_value_36 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_36 = Py_None;
        tmp_fromlist_value_36 = Py_None;
        tmp_level_value_36 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 293;
        tmp_assign_source_79 = IMPORT_MODULE5(tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto try_except_handler_52;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_79);
    }
    goto try_end_50;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 24.
    exception_preserved_24 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_52 == NULL) {
        exception_keeper_tb_52 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_52);
    } else if (exception_keeper_lineno_52 != 0) {
        exception_keeper_tb_52 = ADD_TRACEBACK(exception_keeper_tb_52, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_52);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_52, &exception_keeper_value_52, &exception_keeper_tb_52);
    // Tried code:
    {
        bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        PyObject *tmp_tuple_element_26;
        tmp_cmp_expr_left_26 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_26 == NULL)) {
            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_53;
        }
        tmp_cmp_expr_right_26 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_26, 0, tmp_tuple_element_26);
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_26 == NULL)) {
            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto tuple_build_exception_25;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_26, 1, tmp_tuple_element_26);
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_cmp_expr_right_26);
        goto try_except_handler_53;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
        Py_DECREF(tmp_cmp_expr_right_26);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_53;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_25;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto try_except_handler_53;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 295;
        tmp_assign_source_80 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[211], 0), mod_consts[131]);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto try_except_handler_53;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_80);
    }
    goto branch_end_29;
    branch_no_29:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 292;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_53;
    branch_end_29:;
    goto try_end_51;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 24.
    SET_CURRENT_EXCEPTION(&exception_preserved_24);

    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_51:;
    // Restore previous exception id 24.
    SET_CURRENT_EXCEPTION(&exception_preserved_24);

    goto try_end_50;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_50:;
    // Tried code:
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_name_value_37;
        PyObject *tmp_globals_arg_value_37;
        PyObject *tmp_locals_arg_value_37;
        PyObject *tmp_fromlist_value_37;
        PyObject *tmp_level_value_37;
        tmp_name_value_37 = mod_consts[213];
        tmp_globals_arg_value_37 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_37 = Py_None;
        tmp_fromlist_value_37 = Py_None;
        tmp_level_value_37 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 298;
        tmp_assign_source_81 = IMPORT_MODULE5(tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_54;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_81);
    }
    goto try_end_52;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 25.
    exception_preserved_25 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_54 == NULL) {
        exception_keeper_tb_54 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_54);
    } else if (exception_keeper_lineno_54 != 0) {
        exception_keeper_tb_54 = ADD_TRACEBACK(exception_keeper_tb_54, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_54);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_54, &exception_keeper_value_54, &exception_keeper_tb_54);
    // Tried code:
    {
        bool tmp_condition_result_31;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        PyObject *tmp_tuple_element_27;
        tmp_cmp_expr_left_27 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_55;
        }
        tmp_cmp_expr_right_27 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_27, 0, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto tuple_build_exception_26;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_27, 1, tmp_tuple_element_27);
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_cmp_expr_right_27);
        goto try_except_handler_55;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
        Py_DECREF(tmp_cmp_expr_right_27);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto try_except_handler_55;
        }
        tmp_condition_result_31 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_55;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 300;
        tmp_assign_source_82 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[214], 0), mod_consts[131]);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto try_except_handler_55;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_82);
    }
    goto branch_end_30;
    branch_no_30:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 297;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_55;
    branch_end_30:;
    goto try_end_53;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 25.
    SET_CURRENT_EXCEPTION(&exception_preserved_25);

    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto frame_exception_exit_1;
    // End of try:
    try_end_53:;
    // Restore previous exception id 25.
    SET_CURRENT_EXCEPTION(&exception_preserved_25);

    goto try_end_52;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_52:;
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_name_value_38;
        PyObject *tmp_globals_arg_value_38;
        PyObject *tmp_locals_arg_value_38;
        PyObject *tmp_fromlist_value_38;
        PyObject *tmp_level_value_38;
        tmp_name_value_38 = mod_consts[216];
        tmp_globals_arg_value_38 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_38 = Py_None;
        tmp_fromlist_value_38 = Py_None;
        tmp_level_value_38 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 303;
        tmp_assign_source_83 = IMPORT_MODULE5(tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto try_except_handler_56;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_83);
    }
    goto try_end_54;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 26.
    exception_preserved_26 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_56 == NULL) {
        exception_keeper_tb_56 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_56);
    } else if (exception_keeper_lineno_56 != 0) {
        exception_keeper_tb_56 = ADD_TRACEBACK(exception_keeper_tb_56, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_56);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_56, &exception_keeper_value_56, &exception_keeper_tb_56);
    // Tried code:
    {
        bool tmp_condition_result_32;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        PyObject *tmp_tuple_element_28;
        tmp_cmp_expr_left_28 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto try_except_handler_57;
        }
        tmp_cmp_expr_right_28 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_28, 0, tmp_tuple_element_28);
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto tuple_build_exception_27;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_28, 1, tmp_tuple_element_28);
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_cmp_expr_right_28);
        goto try_except_handler_57;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        Py_DECREF(tmp_cmp_expr_right_28);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto try_except_handler_57;
        }
        tmp_condition_result_32 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_27;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_57;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 305;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[217], 0), mod_consts[131]);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto try_except_handler_57;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_84);
    }
    goto branch_end_31;
    branch_no_31:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 302;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_57;
    branch_end_31:;
    goto try_end_55;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 26.
    SET_CURRENT_EXCEPTION(&exception_preserved_26);

    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_55:;
    // Restore previous exception id 26.
    SET_CURRENT_EXCEPTION(&exception_preserved_26);

    goto try_end_54;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_54:;
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_name_value_39;
        PyObject *tmp_globals_arg_value_39;
        PyObject *tmp_locals_arg_value_39;
        PyObject *tmp_fromlist_value_39;
        PyObject *tmp_level_value_39;
        tmp_name_value_39 = mod_consts[219];
        tmp_globals_arg_value_39 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_39 = Py_None;
        tmp_fromlist_value_39 = Py_None;
        tmp_level_value_39 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 308;
        tmp_assign_source_85 = IMPORT_MODULE5(tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_58;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_85);
    }
    goto try_end_56;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 27.
    exception_preserved_27 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_58 == NULL) {
        exception_keeper_tb_58 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_58);
    } else if (exception_keeper_lineno_58 != 0) {
        exception_keeper_tb_58 = ADD_TRACEBACK(exception_keeper_tb_58, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_58);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_58, &exception_keeper_value_58, &exception_keeper_tb_58);
    // Tried code:
    {
        bool tmp_condition_result_33;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        PyObject *tmp_tuple_element_29;
        tmp_cmp_expr_left_29 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_59;
        }
        tmp_cmp_expr_right_29 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_29, 0, tmp_tuple_element_29);
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto tuple_build_exception_28;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_29, 1, tmp_tuple_element_29);
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_cmp_expr_right_29);
        goto try_except_handler_59;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_29, tmp_cmp_expr_right_29);
        Py_DECREF(tmp_cmp_expr_right_29);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_59;
        }
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_28;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_59;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 310;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[220], 0), mod_consts[131]);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_59;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_86);
    }
    goto branch_end_32;
    branch_no_32:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 307;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_59;
    branch_end_32:;
    goto try_end_57;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 27.
    SET_CURRENT_EXCEPTION(&exception_preserved_27);

    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto frame_exception_exit_1;
    // End of try:
    try_end_57:;
    // Restore previous exception id 27.
    SET_CURRENT_EXCEPTION(&exception_preserved_27);

    goto try_end_56;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_56:;
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_name_value_40;
        PyObject *tmp_globals_arg_value_40;
        PyObject *tmp_locals_arg_value_40;
        PyObject *tmp_fromlist_value_40;
        PyObject *tmp_level_value_40;
        tmp_name_value_40 = mod_consts[222];
        tmp_globals_arg_value_40 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_40 = Py_None;
        tmp_fromlist_value_40 = Py_None;
        tmp_level_value_40 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 316;
        tmp_assign_source_87 = IMPORT_MODULE5(tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_60;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_87);
    }
    {
        PyObject *tmp_attrdel_target_1;
        tmp_attrdel_target_1 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_attrdel_target_1 == NULL)) {
            tmp_attrdel_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_attrdel_target_1 == NULL));
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[223]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
    }
    goto try_end_58;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 28.
    exception_preserved_28 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_60 == NULL) {
        exception_keeper_tb_60 = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_60);
    } else if (exception_keeper_lineno_60 != 0) {
        exception_keeper_tb_60 = ADD_TRACEBACK(exception_keeper_tb_60, frame_17f06c4938304ac10eb1828bc3c33409, exception_keeper_lineno_60);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_60, &exception_keeper_value_60, &exception_keeper_tb_60);
    // Tried code:
    {
        bool tmp_condition_result_34;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        PyObject *tmp_tuple_element_30;
        tmp_cmp_expr_left_30 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_30 == NULL)) {
            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_61;
        }
        tmp_cmp_expr_right_30 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_30, 0, tmp_tuple_element_30);
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_tuple_element_30 == NULL)) {
            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto tuple_build_exception_29;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_30, 1, tmp_tuple_element_30);
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_cmp_expr_right_30);
        goto try_except_handler_61;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_30, tmp_cmp_expr_right_30);
        Py_DECREF(tmp_cmp_expr_right_30);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_61;
        }
        tmp_condition_result_34 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 315;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_61;
    branch_no_33:;
    goto try_end_59;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 28.
    SET_CURRENT_EXCEPTION(&exception_preserved_28);

    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto frame_exception_exit_1;
    // End of try:
    try_end_59:;
    // Restore previous exception id 28.
    SET_CURRENT_EXCEPTION(&exception_preserved_28);

    goto try_end_58;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_58:;
    {
        PyObject *tmp_assign_source_88;


        tmp_assign_source_88 = MAKE_FUNCTION_pygame$$$function__11_packager_imports();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_name_value_41;
        PyObject *tmp_globals_arg_value_41;
        PyObject *tmp_locals_arg_value_41;
        PyObject *tmp_fromlist_value_41;
        PyObject *tmp_level_value_41;
        tmp_name_value_41 = mod_consts[225];
        tmp_globals_arg_value_41 = (PyObject *)moduledict_pygame;
        tmp_locals_arg_value_41 = Py_None;
        tmp_fromlist_value_41 = Py_None;
        tmp_level_value_41 = mod_consts[22];
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 334;
        tmp_assign_source_89 = IMPORT_MODULE5(tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;


        tmp_assign_source_90 = MAKE_FUNCTION_pygame$$$function__12___rect_constructor();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;


        tmp_assign_source_91 = MAKE_FUNCTION_pygame$$$function__13___rect_reduce();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_91);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[225]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[225]);
        }

        assert(!(tmp_expression_value_32 == NULL));
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[227]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[226]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[226]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 346;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_92;


        tmp_assign_source_92 = MAKE_FUNCTION_pygame$$$function__14___color_constructor();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;


        tmp_assign_source_93 = MAKE_FUNCTION_pygame$$$function__15___color_reduce();

        UPDATE_STRING_DICT1(moduledict_pygame, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_93);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[225]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[225]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[227]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[228]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[228]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_called_value_30);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        PyObject *tmp_expression_value_34;
        tmp_cmp_expr_left_31 = mod_consts[229];
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_expression_value_34 == NULL));
        tmp_cmp_expr_right_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[72]);
        if (tmp_cmp_expr_right_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_31, tmp_cmp_expr_left_31);
        Py_DECREF(tmp_cmp_expr_right_31);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_called_value_32;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = mod_consts[230];
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[231]);
        assert(!(tmp_dircall_arg1_1 == NULL));
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_tuple_element_31 == NULL)) {
            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_31);
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 365;
        tmp_add_expr_left_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_32);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[232];
        tmp_dircall_arg3_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_9 = impl___main__$$$function__3_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 363;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_result_4;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        frame_17f06c4938304ac10eb1828bc3c33409->m_frame.f_lineno = 368;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[233]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_34:;
    tmp_res = PyDict_DelItem((PyObject *)moduledict_pygame, mod_consts[32]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[32]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 371;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem((PyObject *)moduledict_pygame, mod_consts[29]);
    if (tmp_res == -1) CLEAR_ERROR_OCCURRED();

    tmp_res = PyDict_DelItem((PyObject *)moduledict_pygame, mod_consts[1]);
    if (tmp_res == -1) CLEAR_ERROR_OCCURRED();

    tmp_res = PyDict_DelItem((PyObject *)moduledict_pygame, mod_consts[92]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[92]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 371;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem((PyObject *)moduledict_pygame, mod_consts[225]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[225]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 371;

        goto frame_exception_exit_1;
    }


    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_17f06c4938304ac10eb1828bc3c33409);
#endif
    popFrameStack();

    assertFrameObject(frame_17f06c4938304ac10eb1828bc3c33409);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_17f06c4938304ac10eb1828bc3c33409);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_17f06c4938304ac10eb1828bc3c33409, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17f06c4938304ac10eb1828bc3c33409->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17f06c4938304ac10eb1828bc3c33409, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pygame", false);

    Py_INCREF(module_pygame);
    return module_pygame;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygame, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pygame", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
