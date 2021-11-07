/*
 * This file was auto-generated by speedy-antlr-tool v1.2.0
 *  https://github.com/amykyta3/speedy-antlr-tool
 */

#define PY_SSIZE_T_CLEAN
#include <Python.h>

#include <cstring>

#include "antlr4-runtime.h"
#include "SystemRDLLexer.h"
#include "SystemRDLParser.h"
#include "speedy_antlr.h"

#include "sa_systemrdl_translator.h"

/*
 * Python function prototype:
 *  do_parse(
 *      parser_cls:antlr4.Parser,
 *      stream:antlr4.InputStream,
 *      entry_rule_name:str,
 *      sa_err_listener:SA_ErrorListener
 *  )
 */
PyObject* do_parse(PyObject *self, PyObject *args) {
    PyObject *strdata = NULL;
    PyObject *result = NULL;
    PyObject *token_module = NULL;

    try {
        // Get args
        PyObject *parser_cls = NULL;
        PyObject *stream = NULL;
        const char *entry_rule_name = NULL;
        PyObject *sa_err_listener = NULL;
        if(!PyArg_ParseTuple(args,
            "OOsO:do_parse",
            &parser_cls, &stream, &entry_rule_name, &sa_err_listener
        )) {
            return NULL;
        }

        // Extract input stream's string
        const char *cstrdata;
        Py_ssize_t bufsize;
        strdata = PyObject_GetAttrString(stream, "strdata");
        if(!strdata) throw speedy_antlr::PythonException();
        cstrdata = PyUnicode_AsUTF8AndSize(strdata, &bufsize);
        if(!cstrdata) throw speedy_antlr::PythonException();

        // Create an antlr InputStream object
        antlr4::ANTLRInputStream cpp_stream(cstrdata, bufsize);

        // in case error listener is overridden
        token_module = PyImport_ImportModule("antlr4.Token");
        if(!token_module) throw speedy_antlr::PythonException();
        speedy_antlr::Translator translator(parser_cls, stream);
        speedy_antlr::ErrorTranslatorListener err_listener(&translator, sa_err_listener);

        // Lex
        SystemRDLLexer lexer(&cpp_stream);
        if(sa_err_listener != Py_None){
            lexer.removeErrorListeners();
            lexer.addErrorListener(&err_listener);
        }
        antlr4::CommonTokenStream token_stream(&lexer);
        token_stream.fill();

        // Parse
        SystemRDLParser parser(&token_stream);
        if(sa_err_listener != Py_None){
            parser.removeErrorListeners();
            parser.addErrorListener(&err_listener);
        }
        antlr4::tree::ParseTree *parse_tree;
        if(!strcmp(entry_rule_name, "root")){
            parse_tree = parser.root();

        } else if(!strcmp(entry_rule_name, "root_elem")){
            parse_tree = parser.root_elem();

        } else if(!strcmp(entry_rule_name, "component_def")){
            parse_tree = parser.component_def();

        } else if(!strcmp(entry_rule_name, "explicit_component_inst")){
            parse_tree = parser.explicit_component_inst();

        } else if(!strcmp(entry_rule_name, "component_inst_alias")){
            parse_tree = parser.component_inst_alias();

        } else if(!strcmp(entry_rule_name, "component_named_def")){
            parse_tree = parser.component_named_def();

        } else if(!strcmp(entry_rule_name, "component_anon_def")){
            parse_tree = parser.component_anon_def();

        } else if(!strcmp(entry_rule_name, "component_body")){
            parse_tree = parser.component_body();

        } else if(!strcmp(entry_rule_name, "component_body_elem")){
            parse_tree = parser.component_body_elem();

        } else if(!strcmp(entry_rule_name, "component_insts")){
            parse_tree = parser.component_insts();

        } else if(!strcmp(entry_rule_name, "component_inst")){
            parse_tree = parser.component_inst();

        } else if(!strcmp(entry_rule_name, "field_inst_reset")){
            parse_tree = parser.field_inst_reset();

        } else if(!strcmp(entry_rule_name, "inst_addr_fixed")){
            parse_tree = parser.inst_addr_fixed();

        } else if(!strcmp(entry_rule_name, "inst_addr_stride")){
            parse_tree = parser.inst_addr_stride();

        } else if(!strcmp(entry_rule_name, "inst_addr_align")){
            parse_tree = parser.inst_addr_align();

        } else if(!strcmp(entry_rule_name, "component_inst_type")){
            parse_tree = parser.component_inst_type();

        } else if(!strcmp(entry_rule_name, "component_type")){
            parse_tree = parser.component_type();

        } else if(!strcmp(entry_rule_name, "component_type_primary")){
            parse_tree = parser.component_type_primary();

        } else if(!strcmp(entry_rule_name, "param_def")){
            parse_tree = parser.param_def();

        } else if(!strcmp(entry_rule_name, "param_def_elem")){
            parse_tree = parser.param_def_elem();

        } else if(!strcmp(entry_rule_name, "param_inst")){
            parse_tree = parser.param_inst();

        } else if(!strcmp(entry_rule_name, "param_assignment")){
            parse_tree = parser.param_assignment();

        } else if(!strcmp(entry_rule_name, "expr")){
            parse_tree = parser.expr();

        } else if(!strcmp(entry_rule_name, "expr_primary")){
            parse_tree = parser.expr_primary();

        } else if(!strcmp(entry_rule_name, "concatenate")){
            parse_tree = parser.concatenate();

        } else if(!strcmp(entry_rule_name, "replicate")){
            parse_tree = parser.replicate();

        } else if(!strcmp(entry_rule_name, "paren_expr")){
            parse_tree = parser.paren_expr();

        } else if(!strcmp(entry_rule_name, "cast")){
            parse_tree = parser.cast();

        } else if(!strcmp(entry_rule_name, "cast_width_expr")){
            parse_tree = parser.cast_width_expr();

        } else if(!strcmp(entry_rule_name, "range_suffix")){
            parse_tree = parser.range_suffix();

        } else if(!strcmp(entry_rule_name, "array_suffix")){
            parse_tree = parser.array_suffix();

        } else if(!strcmp(entry_rule_name, "array_type_suffix")){
            parse_tree = parser.array_type_suffix();

        } else if(!strcmp(entry_rule_name, "data_type")){
            parse_tree = parser.data_type();

        } else if(!strcmp(entry_rule_name, "basic_data_type")){
            parse_tree = parser.basic_data_type();

        } else if(!strcmp(entry_rule_name, "literal")){
            parse_tree = parser.literal();

        } else if(!strcmp(entry_rule_name, "number")){
            parse_tree = parser.number();

        } else if(!strcmp(entry_rule_name, "string_literal")){
            parse_tree = parser.string_literal();

        } else if(!strcmp(entry_rule_name, "boolean_literal")){
            parse_tree = parser.boolean_literal();

        } else if(!strcmp(entry_rule_name, "array_literal")){
            parse_tree = parser.array_literal();

        } else if(!strcmp(entry_rule_name, "struct_literal")){
            parse_tree = parser.struct_literal();

        } else if(!strcmp(entry_rule_name, "struct_kv")){
            parse_tree = parser.struct_kv();

        } else if(!strcmp(entry_rule_name, "enum_literal")){
            parse_tree = parser.enum_literal();

        } else if(!strcmp(entry_rule_name, "accesstype_literal")){
            parse_tree = parser.accesstype_literal();

        } else if(!strcmp(entry_rule_name, "onreadtype_literal")){
            parse_tree = parser.onreadtype_literal();

        } else if(!strcmp(entry_rule_name, "onwritetype_literal")){
            parse_tree = parser.onwritetype_literal();

        } else if(!strcmp(entry_rule_name, "addressingtype_literal")){
            parse_tree = parser.addressingtype_literal();

        } else if(!strcmp(entry_rule_name, "precedencetype_literal")){
            parse_tree = parser.precedencetype_literal();

        } else if(!strcmp(entry_rule_name, "instance_ref")){
            parse_tree = parser.instance_ref();

        } else if(!strcmp(entry_rule_name, "instance_ref_element")){
            parse_tree = parser.instance_ref_element();

        } else if(!strcmp(entry_rule_name, "prop_ref")){
            parse_tree = parser.prop_ref();

        } else if(!strcmp(entry_rule_name, "local_property_assignment")){
            parse_tree = parser.local_property_assignment();

        } else if(!strcmp(entry_rule_name, "dynamic_property_assignment")){
            parse_tree = parser.dynamic_property_assignment();

        } else if(!strcmp(entry_rule_name, "normal_prop_assign")){
            parse_tree = parser.normal_prop_assign();

        } else if(!strcmp(entry_rule_name, "encode_prop_assign")){
            parse_tree = parser.encode_prop_assign();

        } else if(!strcmp(entry_rule_name, "prop_mod_assign")){
            parse_tree = parser.prop_mod_assign();

        } else if(!strcmp(entry_rule_name, "prop_assignment_rhs")){
            parse_tree = parser.prop_assignment_rhs();

        } else if(!strcmp(entry_rule_name, "prop_keyword")){
            parse_tree = parser.prop_keyword();

        } else if(!strcmp(entry_rule_name, "prop_mod")){
            parse_tree = parser.prop_mod();

        } else if(!strcmp(entry_rule_name, "udp_def")){
            parse_tree = parser.udp_def();

        } else if(!strcmp(entry_rule_name, "udp_attr")){
            parse_tree = parser.udp_attr();

        } else if(!strcmp(entry_rule_name, "udp_type")){
            parse_tree = parser.udp_type();

        } else if(!strcmp(entry_rule_name, "udp_data_type")){
            parse_tree = parser.udp_data_type();

        } else if(!strcmp(entry_rule_name, "udp_usage")){
            parse_tree = parser.udp_usage();

        } else if(!strcmp(entry_rule_name, "udp_comp_type")){
            parse_tree = parser.udp_comp_type();

        } else if(!strcmp(entry_rule_name, "udp_default")){
            parse_tree = parser.udp_default();

        } else if(!strcmp(entry_rule_name, "udp_constraint")){
            parse_tree = parser.udp_constraint();

        } else if(!strcmp(entry_rule_name, "enum_def")){
            parse_tree = parser.enum_def();

        } else if(!strcmp(entry_rule_name, "enum_entry")){
            parse_tree = parser.enum_entry();

        } else if(!strcmp(entry_rule_name, "enum_prop_assign")){
            parse_tree = parser.enum_prop_assign();

        } else if(!strcmp(entry_rule_name, "struct_def")){
            parse_tree = parser.struct_def();

        } else if(!strcmp(entry_rule_name, "struct_elem")){
            parse_tree = parser.struct_elem();

        } else if(!strcmp(entry_rule_name, "struct_type")){
            parse_tree = parser.struct_type();

        } else if(!strcmp(entry_rule_name, "constraint_def")){
            parse_tree = parser.constraint_def();

        } else if(!strcmp(entry_rule_name, "constraint_named_def")){
            parse_tree = parser.constraint_named_def();

        } else if(!strcmp(entry_rule_name, "constraint_anon_def")){
            parse_tree = parser.constraint_anon_def();

        } else if(!strcmp(entry_rule_name, "constraint_body")){
            parse_tree = parser.constraint_body();

        } else if(!strcmp(entry_rule_name, "constraint_body_elem")){
            parse_tree = parser.constraint_body_elem();

        } else if(!strcmp(entry_rule_name, "constraint_insts")){
            parse_tree = parser.constraint_insts();

        } else if(!strcmp(entry_rule_name, "constr_relational")){
            parse_tree = parser.constr_relational();

        } else if(!strcmp(entry_rule_name, "constr_prop_assign")){
            parse_tree = parser.constr_prop_assign();

        } else if(!strcmp(entry_rule_name, "constr_inside_values")){
            parse_tree = parser.constr_inside_values();

        } else if(!strcmp(entry_rule_name, "constr_inside_enum")){
            parse_tree = parser.constr_inside_enum();

        } else if(!strcmp(entry_rule_name, "constr_lhs")){
            parse_tree = parser.constr_lhs();

        } else if(!strcmp(entry_rule_name, "constr_inside_value")){
            parse_tree = parser.constr_inside_value();

        } else {
            PyErr_SetString(PyExc_ValueError, "Invalid entry_rule_name");
            throw speedy_antlr::PythonException();
        }

        // Translate Parse tree to Python
        SA_SystemRDLTranslator visitor(&translator);
        result = visitor.visit(parse_tree).as<PyObject *>();

        // Clean up data
        Py_XDECREF(token_module);
        Py_XDECREF(strdata);

        return result;

    } catch(speedy_antlr::PythonException &e) {
        Py_XDECREF(token_module);
        Py_XDECREF(strdata);
        Py_XDECREF(result);

        // Python exception already has error indicator set
        return NULL;
    } catch(...) {
        Py_XDECREF(token_module);
        Py_XDECREF(strdata);
        Py_XDECREF(result);

        // An internal C++ exception was thrown.
        // Set error indicator to a generic runtime error
        PyErr_SetString(PyExc_RuntimeError, "Internal error");
        return NULL;
    }
}


extern "C" {

    static PyObject* c_do_parse(PyObject *self, PyObject *args) {
        return do_parse(self, args);
    }

    static PyMethodDef methods[] = {
        {
            "do_parse",  c_do_parse, METH_VARARGS,
            "Run parser"
        },
        {NULL, NULL, 0, NULL} /* Sentinel */
    };

    static struct PyModuleDef module = {
        PyModuleDef_HEAD_INIT,
        "sa_systemrdl_cpp_parser",   /* name of module */
        NULL, /* module documentation, may be NULL */
        -1,       /* size of per-interpreter state of the module,
                    or -1 if the module keeps state in global variables. */
        methods
    };
}


PyMODINIT_FUNC
PyInit_sa_systemrdl_cpp_parser(void) {
    PyObject *m = PyModule_Create(&module);
    return m;
}