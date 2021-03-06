/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2013 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: krakjoe@php.net                                              |
  +----------------------------------------------------------------------+
*/
#ifndef HAVE_BITS_INSN_H
#define HAVE_BITS_INSN_H

#define PHP_JIT_INSN_FUNCTIONS \
	JIT_FE(jit_insn_mul) \
	JIT_FE(jit_insn_mul_ovf) \
	JIT_FE(jit_insn_add) \
	JIT_FE(jit_insn_add_ovf) \
	JIT_FE(jit_insn_sub) \
	JIT_FE(jit_insn_sub_ovf) \
	JIT_FE(jit_insn_div) \
	JIT_FE(jit_insn_pow) \
	JIT_FE(jit_insn_rem) \
	JIT_FE(jit_insn_rem_ieee) \
	JIT_FE(jit_insn_neg) \
	JIT_FE(jit_insn_and) \
	JIT_FE(jit_insn_or) \
	JIT_FE(jit_insn_xor) \
	JIT_FE(jit_insn_shl) \
	JIT_FE(jit_insn_shr) \
	JIT_FE(jit_insn_ushr) \
	JIT_FE(jit_insn_sshr) \
	JIT_FE(jit_insn_eq) \
	JIT_FE(jit_insn_ne) \
	JIT_FE(jit_insn_lt) \
	JIT_FE(jit_insn_le) \
	JIT_FE(jit_insn_gt) \
	JIT_FE(jit_insn_ge) \
	JIT_FE(jit_insn_cmpl) \
	JIT_FE(jit_insn_cmpg) \
	JIT_FE(jit_insn_to_bool) \
	JIT_FE(jit_insn_to_not_bool) \
	JIT_FE(jit_insn_acos) \
	JIT_FE(jit_insn_asin) \
	JIT_FE(jit_insn_atan) \
	JIT_FE(jit_insn_atan2) \
	JIT_FE(jit_insn_ceil) \
	JIT_FE(jit_insn_cos) \
	JIT_FE(jit_insn_cosh) \
	JIT_FE(jit_insn_exp) \
	JIT_FE(jit_insn_floor) \
	JIT_FE(jit_insn_log) \
	JIT_FE(jit_insn_log10) \
	JIT_FE(jit_insn_rint) \
	JIT_FE(jit_insn_round) \
	JIT_FE(jit_insn_sin) \
	JIT_FE(jit_insn_sinh) \
	JIT_FE(jit_insn_sqrt) \
	JIT_FE(jit_insn_tan) \
	JIT_FE(jit_insn_tanh) \
	JIT_FE(jit_insn_is_nan) \
	JIT_FE(jit_insn_is_finite) \
	JIT_FE(jit_insn_is_inf) \
	JIT_FE(jit_insn_abs) \
	JIT_FE(jit_insn_min) \
	JIT_FE(jit_insn_max) \
	JIT_FE(jit_insn_sign) \
	JIT_FE(jit_insn_branch) \
	JIT_FE(jit_insn_branch_if) \
	JIT_FE(jit_insn_branch_if_not) \
	JIT_FE(jit_insn_label) \
	JIT_FE(jit_insn_call) \
	JIT_FE(jit_insn_call_indirect) \
	JIT_FE(jit_insn_call_indirect_vtable) \
	JIT_FE(jit_insn_incoming_reg) \
	JIT_FE(jit_insn_outgoing_reg) \
	JIT_FE(jit_insn_return_reg) \
	JIT_FE(jit_insn_setup_for_nested) \
	JIT_FE(jit_insn_flush_struct) \
	JIT_FE(jit_insn_push) \
	JIT_FE(jit_insn_push_ptr) \
	JIT_FE(jit_insn_import) \
	JIT_FE(jit_insn_return)

#define PHP_JIT_BINARY_ARGINFO(n) \
	ZEND_BEGIN_ARG_INFO_EX(n, 0, 0, 3) \
		ZEND_ARG_INFO(0, function) \
		ZEND_ARG_INFO(0, op1) \
		ZEND_ARG_INFO(0, op2) \
	ZEND_END_ARG_INFO() \
	
#define PHP_JIT_UNARY_ARGINFO(n) \
	ZEND_BEGIN_ARG_INFO_EX(n, 0, 0, 3) \
		ZEND_ARG_INFO(0, function) \
		ZEND_ARG_INFO(0, op) \
	ZEND_END_ARG_INFO() \

PHP_JIT_BINARY_ARGINFO(jit_insn_mul_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_mul_ovf_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_sub_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_sub_ovf_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_add_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_add_ovf_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_div_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_pow_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_rem_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_rem_ieee_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_neg_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_and_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_or_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_xor_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_shl_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_shr_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_ushr_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_sshr_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_eq_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_ne_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_lt_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_le_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_gt_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_ge_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_cmpl_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_cmpg_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_to_bool_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_to_not_bool_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_acos_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_asin_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_atan_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_atan2_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_ceil_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_cos_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_cosh_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_exp_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_floor_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_log_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_log10_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_rint_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_round_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_sin_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_sinh_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_sqrt_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_tan_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_tanh_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_is_nan_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_is_finite_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_is_inf_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_abs_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_min_arginfo)
PHP_JIT_BINARY_ARGINFO(jit_insn_max_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_sign_arginfo)

ZEND_BEGIN_ARG_INFO_EX(jit_insn_branch_arginfo, 0, 0, 1)
	ZEND_ARG_INFO(0, function)
ZEND_END_ARG_INFO()

PHP_JIT_UNARY_ARGINFO(jit_insn_branch_if_arginfo)
PHP_JIT_UNARY_ARGINFO(jit_insn_branch_if_not_arginfo)

ZEND_BEGIN_ARG_INFO_EX(jit_insn_label_arginfo, 0, 0, 2)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, label)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_call_arginfo, 0, 0, 5)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, call)
	ZEND_ARG_INFO(0, signature)
	ZEND_ARG_INFO(0, params)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_call_indirect_arginfo, 0, 0, 3)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, signature)
	ZEND_ARG_INFO(0, params)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_call_indirect_vtable_arginfo, 0, 0, 3)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, signature)
	ZEND_ARG_INFO(0, params)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_incoming_reg_arginfo, 0, 0, 3)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, reg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_outgoing_reg_arginfo, 0, 0, 3)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, reg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_return_reg_arginfo, 0, 0, 3)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, reg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_setup_for_nested_arginfo, 0, 0, 3)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, nested)
	ZEND_ARG_INFO(0, reg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_flush_struct_arginfo, 0, 0, 2)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_import_arginfo, 0, 0, 2)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_push_arginfo, 0, 0, 2)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_push_ptr_arginfo, 0, 0, 3)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(jit_insn_return_arginfo, 0, 0, 2)
	ZEND_ARG_INFO(0, function)
	ZEND_ARG_INFO(0, result)
ZEND_END_ARG_INFO()

PHP_FUNCTION(jit_insn_mul);
PHP_FUNCTION(jit_insn_mul_ovf);
PHP_FUNCTION(jit_insn_add);
PHP_FUNCTION(jit_insn_add_ovf);
PHP_FUNCTION(jit_insn_sub);
PHP_FUNCTION(jit_insn_sub_ovf);
PHP_FUNCTION(jit_insn_div);
PHP_FUNCTION(jit_insn_pow);
PHP_FUNCTION(jit_insn_rem);
PHP_FUNCTION(jit_insn_rem_ieee);
PHP_FUNCTION(jit_insn_neg);
PHP_FUNCTION(jit_insn_and);
PHP_FUNCTION(jit_insn_or);
PHP_FUNCTION(jit_insn_xor);
PHP_FUNCTION(jit_insn_shl);
PHP_FUNCTION(jit_insn_shr);
PHP_FUNCTION(jit_insn_ushr);
PHP_FUNCTION(jit_insn_sshr);
PHP_FUNCTION(jit_insn_eq);
PHP_FUNCTION(jit_insn_ne);
PHP_FUNCTION(jit_insn_lt);
PHP_FUNCTION(jit_insn_le);
PHP_FUNCTION(jit_insn_gt);
PHP_FUNCTION(jit_insn_ge);
PHP_FUNCTION(jit_insn_cmpl);
PHP_FUNCTION(jit_insn_cmpg);
PHP_FUNCTION(jit_insn_to_bool);
PHP_FUNCTION(jit_insn_to_not_bool);
PHP_FUNCTION(jit_insn_acos);
PHP_FUNCTION(jit_insn_asin);
PHP_FUNCTION(jit_insn_atan);
PHP_FUNCTION(jit_insn_atan2);
PHP_FUNCTION(jit_insn_ceil);
PHP_FUNCTION(jit_insn_cos);
PHP_FUNCTION(jit_insn_cosh);
PHP_FUNCTION(jit_insn_exp);
PHP_FUNCTION(jit_insn_floor);
PHP_FUNCTION(jit_insn_log);
PHP_FUNCTION(jit_insn_log10);
PHP_FUNCTION(jit_insn_rint);
PHP_FUNCTION(jit_insn_round);
PHP_FUNCTION(jit_insn_sin);
PHP_FUNCTION(jit_insn_sinh);
PHP_FUNCTION(jit_insn_sqrt);
PHP_FUNCTION(jit_insn_tan);
PHP_FUNCTION(jit_insn_tanh);
PHP_FUNCTION(jit_insn_is_nan);
PHP_FUNCTION(jit_insn_is_finite);
PHP_FUNCTION(jit_insn_is_inf);
PHP_FUNCTION(jit_insn_min);
PHP_FUNCTION(jit_insn_max);
PHP_FUNCTION(jit_insn_abs);
PHP_FUNCTION(jit_insn_sign);
PHP_FUNCTION(jit_insn_branch);
PHP_FUNCTION(jit_insn_branch_if);
PHP_FUNCTION(jit_insn_branch_if_not);
PHP_FUNCTION(jit_insn_label);
PHP_FUNCTION(jit_insn_call);
PHP_FUNCTION(jit_insn_call_indirect);
PHP_FUNCTION(jit_insn_call_indirect_vtable);
PHP_FUNCTION(jit_insn_incoming_reg);
PHP_FUNCTION(jit_insn_outgoing_reg);
PHP_FUNCTION(jit_insn_return_reg);
PHP_FUNCTION(jit_insn_setup_for_nested);
PHP_FUNCTION(jit_insn_flush_struct);
PHP_FUNCTION(jit_insn_import);
PHP_FUNCTION(jit_insn_push);
PHP_FUNCTION(jit_insn_push_ptr);

PHP_FUNCTION(jit_insn_return);

static inline php_jit_minit_insn(int module_number TSRMLS_DC) {
	REGISTER_LONG_CONSTANT("JIT_CALL_NOTHROW",  JIT_CALL_NOTHROW,  CONST_CS|CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JIT_CALL_NORETURN", JIT_CALL_NORETURN, CONST_CS|CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("JIT_CALL_TAIL",     JIT_CALL_TAIL, CONST_CS|CONST_PERSISTENT);
}

#else
#ifndef HAVE_BITS_INSN
#define HAVE_BITS_INSN

typedef jit_value_t (*jit_binary_insn_func) (jit_function_t, jit_value_t, jit_value_t);
typedef jit_value_t (*jit_unary_insn_func) (jit_function_t, jit_value_t);

/* {{{ */
static inline jit_value_t php_jit_do_binary_op(jit_binary_insn_func func, zval *zfunction, zval *zin[2], zval *return_value TSRMLS_DC) {
	jit_function_t function;
	jit_value_t in[2], result;
	
	ZEND_FETCH_RESOURCE(function, jit_function_t, &zfunction, -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(in[0], jit_value_t, &zin[0], -1, le_jit_value_name, le_jit_value);
	ZEND_FETCH_RESOURCE(in[1], jit_value_t, &zin[1], -1, le_jit_value_name, le_jit_value);
	
	result = func(function, in[0], in[1]);
	
	ZEND_REGISTER_RESOURCE(return_value, result, le_jit_value);
} /* }}} */

/* {{{ */
static inline jit_value_t php_jit_do_unary_op(jit_unary_insn_func func, zval *zfunction, zval *zin, zval *return_value TSRMLS_DC) {
	jit_function_t function;
	jit_value_t in, result;
	
	ZEND_FETCH_RESOURCE(function, jit_function_t, &zfunction, -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(in, jit_value_t, &zin, -1, le_jit_value_name, le_jit_value);
	
	result = func(function, in);
	
	ZEND_REGISTER_RESOURCE(return_value, result, le_jit_value);
} /* }}} */

/* {{{ jit_value_t jit_insn_mul(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_mul) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_mul, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_mul_ovf(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_mul_ovf) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_mul_ovf, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_add(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_add) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_add, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_add_ovf(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_add_ovf) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_add_ovf, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_sub(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_sub) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_sub, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_sub_ovf(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_sub_ovf) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_sub_ovf, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_div(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_div) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_div, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_pow(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_pow) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_pow, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_rem(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_rem) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_rem, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_rem_ieee(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_rem_ieee) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_rem_ieee, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_neg(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_neg) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_neg, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_and(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_and) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_and, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_or(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_or) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_or, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_xor(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_xor) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_xor, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_shl(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_shl) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_shl, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_shr(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_shr) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_shr, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_ushr(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_ushr) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_ushr, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_sshr(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_sshr) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_sshr, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_eq(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_eq) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_eq, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_ne(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_ne) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_ne, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_lt(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_lt) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_lt, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_le(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_le) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_le, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_gt(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_gt) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_gt, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_ge(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_ge) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_ge, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_cmpl(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_cmpl) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_cmpl, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_cmpg(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_cmpg) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_cmpg, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_to_bool(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_to_bool) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_to_bool, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_to_not_bool(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_to_not_bool) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_to_not_bool, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_acos(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_acos) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_acos, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_asin(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_asin) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_asin, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_atan(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_atan) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_atan, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_atan2(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_atan2) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_atan2, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_ceil(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_ceil) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_ceil, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_cos(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_cos) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_cos, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_cosh(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_cosh) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_cosh, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_exp(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_exp) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_exp, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_floor(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_floor) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_floor, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_log(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_log) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_log, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_log10(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_log10) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_log10, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_rint(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_rint) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_rint, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_round(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_round) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_round, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_sin(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_sin) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_sin, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_sinh(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_sinh) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_sinh, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_sqrt(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_sqrt) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_sqrt, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_tan(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_tan) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_tan, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_tanh(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_tanh) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_tanh, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_is_nan(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_is_nan) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_is_nan, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_is_finite(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_is_finite) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_is_finite, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_is_inf(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_is_inf) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_is_inf, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_abs(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_abs) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_abs, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_min(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_min) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_min, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_max(jit_function_t function, jit_value_t op1, jit_value_t op2) */
PHP_FUNCTION(jit_insn_max) {
	zval *zfunction, *zin[2];
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr", &zfunction, &zin[0], &zin[1]) != SUCCESS) {
		return;
	}
	
	php_jit_do_binary_op(jit_insn_max, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_value_t jit_insn_sign(jit_function_t function, jit_value_t op1) */
PHP_FUNCTION(jit_insn_sign) {
	zval *zfunction, *zin;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	php_jit_do_unary_op(jit_insn_sign, zfunction, zin, return_value TSRMLS_CC);
} /* }}} */

/* {{{ jit_label_t jit_insn_branch(jit_function_t function) */
PHP_FUNCTION(jit_insn_branch) {
	zval *zfunction;
	jit_function_t function;
	jit_label_t label = jit_label_undefined;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "r", &zfunction) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function, jit_function_t, &zfunction, -1, le_jit_function_name, le_jit_function);

	jit_insn_branch(function, &label);
	
	RETURN_LONG(label);
} /* }}} */

/* {{{ jit_label_t jit_insn_branch_if(jit_function_t function, jit_value_t op) */
PHP_FUNCTION(jit_insn_branch_if) {
	zval *zfunction, *zin;
	jit_function_t function;
	jit_value_t in;
	jit_label_t label = jit_label_undefined;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function, jit_function_t, &zfunction, -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(in, jit_value_t, &zin, -1, le_jit_value_name, le_jit_value);

	jit_insn_branch_if(function, in, &label);
	
	RETURN_LONG(label);
} /* }}} */

/* {{{ jit_label_t jit_insn_branch_if_not(jit_function_t function, jit_value_t op) */
PHP_FUNCTION(jit_insn_branch_if_not) {
	zval *zfunction, *zin;
	jit_function_t function;
	jit_value_t in;
	jit_label_t label = jit_label_undefined;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zin) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function, jit_function_t, &zfunction, -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(in, jit_value_t, &zin, -1, le_jit_value_name, le_jit_value);

	jit_insn_branch_if_not(function, in, &label);
	
	RETURN_LONG(label);
} /* }}} */

/* {{{ int jit_insn_label(jit_function_t function, jit_label_t label) */
PHP_FUNCTION(jit_insn_label) {
	zval *zfunction, *zin;
	jit_function_t function;
	jit_label_t label;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rl", &zfunction, &label) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function, jit_function_t, &zfunction, -1, le_jit_function_name, le_jit_function);

	RETURN_LONG(jit_insn_label(function, &label));
} /* }}} */
	
/* {{{ int jit_insn_call(jit_function_t function, string name, jit_function_t call, jit_type_t signature [, array params [, int flags = 0]]) */
PHP_FUNCTION(jit_insn_call) {
	zval *zfunction, *zname, *zcall, *zsignature, **zparam;
	HashTable *zparams;
	HashPosition position;
	zend_uint param;
	jit_function_t function, call;
	jit_type_t signature;
	jit_value_t *args, result;
	zend_uint arg = 0;
	int flags = 0;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rzr|zHl", &zfunction, &zname, &zcall, &zsignature, &zparams, &flags) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	if (zsignature && Z_TYPE_P(zsignature) == IS_RESOURCE) {
		ZEND_FETCH_RESOURCE(signature, jit_type_t,     &zsignature, -1, le_jit_type_name,     le_jit_type);
	} else signature = NULL;
	ZEND_FETCH_RESOURCE(call,  jit_function_t, &zcall,  -1, le_jit_function_name, le_jit_function);
	
	args = (jit_value_t*) ecalloc(zend_hash_num_elements(zparams), sizeof(jit_value_t));
	
	for (zend_hash_internal_pointer_reset_ex(zparams, &position);
		zend_hash_get_current_data_ex(zparams, (void**)&zparam, &position) == SUCCESS;
		zend_hash_move_forward_ex(zparams, &position)) {
		ZEND_FETCH_RESOURCE(args[arg], jit_value_t, zparam, -1, le_jit_value_name, le_jit_value);
		arg++;
	}

	result = jit_insn_call(function, Z_STRVAL_P(zname), call, signature, args, arg, flags);
	
	ZEND_REGISTER_RESOURCE(return_value, result, le_jit_value);
	
	efree(args);
} /* }}} */

/* {{{ int jit_insn_call_indirect(jit_function_t function, jit_value_t value, jit_type_t signature [, array params [, int flags = 0]]) */
PHP_FUNCTION(jit_insn_call_indirect) {
	zval *zfunction, *zname, *zvalue, *zsignature, **zparam;
	HashTable *zparams;
	HashPosition position;
	zend_uint param;
	jit_function_t function;
	jit_type_t signature;
	jit_value_t *args, result, value;
	zend_uint arg = 0;
	int flags = 0;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr|Hl", &zfunction, &zvalue, &zsignature, &zparams, &flags) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(value,     jit_value_t, &zvalue,  -1, le_jit_value_name, le_jit_value);
	
	args = (jit_value_t*) ecalloc(zend_hash_num_elements(zparams), sizeof(jit_value_t));
	
	for (zend_hash_internal_pointer_reset_ex(zparams, &position);
		zend_hash_get_current_data_ex(zparams, (void**)&zparam, &position) == SUCCESS;
		zend_hash_move_forward_ex(zparams, &position)) {
		ZEND_FETCH_RESOURCE(args[arg], jit_value_t, zparam, -1, le_jit_value_name, le_jit_value);
		arg++;
	}

	result = jit_insn_call_indirect(function, value, signature, args, arg, flags);
	
	ZEND_REGISTER_RESOURCE(return_value, result, le_jit_value);
	
	efree(args);
} /* }}} */

/* {{{ int jit_insn_call_indirect_vtable(jit_function_t function, jit_value_t value, jit_type_t signature [, array params [, int flags = 0]]) */
PHP_FUNCTION(jit_insn_call_indirect_vtable) {
	zval *zfunction, *zname, *zvalue, *zsignature, **zparam;
	HashTable *zparams;
	HashPosition position;
	zend_uint param;
	jit_function_t function;
	jit_type_t signature;
	jit_value_t *args, result, value;
	zend_uint arg = 0;
	int flags = 0;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrr|Hl", &zfunction, &zvalue, &zsignature, &zparams, &flags) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(value,     jit_value_t, &zvalue,  -1, le_jit_value_name, le_jit_value);
	
	args = (jit_value_t*) ecalloc(zend_hash_num_elements(zparams), sizeof(jit_value_t));
	
	for (zend_hash_internal_pointer_reset_ex(zparams, &position);
		zend_hash_get_current_data_ex(zparams, (void**)&zparam, &position) == SUCCESS;
		zend_hash_move_forward_ex(zparams, &position)) {
		ZEND_FETCH_RESOURCE(args[arg], jit_value_t, zparam, -1, le_jit_value_name, le_jit_value);
		arg++;
	}

	result = jit_insn_call_indirect_vtable(function, value, signature, args, arg, flags);
	
	ZEND_REGISTER_RESOURCE(return_value, result, le_jit_value);
	
	efree(args);
} /* }}} */

/* {{{ int jit_insn_incoming_reg(jit_function_t function, jit_value_t value, int reg) */
PHP_FUNCTION(jit_insn_incoming_reg) {
	zval *zfunction, *zvalue;
	jit_function_t function;
	jit_value_t  value;
	long reg = 0;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrl", &zfunction, &zvalue, &reg) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(value,     jit_value_t,    &zvalue,     -1, le_jit_value_name,    le_jit_value);
	
	RETURN_LONG(jit_insn_incoming_reg(function, value, reg));
} /* }}} */

/* {{{ int jit_insn_outgoing_reg(jit_function_t function, jit_value_t value, int reg) */
PHP_FUNCTION(jit_insn_outgoing_reg) {
	zval *zfunction, *zvalue;
	jit_function_t function;
	jit_value_t  value;
	long reg = 0;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrl", &zfunction, &zvalue, &reg) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(value,     jit_value_t,    &zvalue,     -1, le_jit_value_name,    le_jit_value);
	
	RETURN_LONG(jit_insn_outgoing_reg(function, value, reg));
} /* }}} */

/* {{{ int jit_insn_return_reg(jit_function_t function, jit_value_t value, int reg) */
PHP_FUNCTION(jit_insn_return_reg) {
	zval *zfunction, *zvalue;
	jit_function_t function;
	jit_value_t  value;
	long reg = 0;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrl", &zfunction, &zvalue, &reg) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(value,     jit_value_t,    &zvalue,     -1, le_jit_value_name,    le_jit_value);
	
	RETURN_LONG(jit_insn_return_reg(function, value, reg));
} /* }}} */

/* {{{ int jit_insn_setup_for_nested(jit_function_t function, int level, int reg) */
PHP_FUNCTION(jit_insn_setup_for_nested) {
	zval *zfunction;
	jit_function_t function;
	long reg = 0, level = 0;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rll", &zfunction, &level, &reg) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	
	RETURN_LONG(jit_insn_setup_for_nested(function, level, reg));
} /* }}} */

/* {{{ int jit_insn_flush_struct(jit_function_t function, jit_value_t value) */
PHP_FUNCTION(jit_insn_flush_struct) {
	zval *zfunction, *zvalue;
	jit_function_t function;
	jit_value_t value;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zvalue) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(value,     jit_value_t,    &zvalue,     -1, le_jit_value_name,    le_jit_value);
	
	RETURN_LONG(jit_insn_flush_struct(function, value));
} /* }}} */

/* {{{ jit_value_t jit_insn_import(jit_function_t function, jit_value_t value) */
PHP_FUNCTION(jit_insn_import) {
	zval *zfunction, *zvalue;
	jit_function_t function;
	jit_value_t value, import;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zvalue) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(value,     jit_value_t,    &zvalue,     -1, le_jit_value_name,    le_jit_value);
	
	import = jit_insn_import(function, value);
	
	ZEND_REGISTER_RESOURCE(return_value, import, le_jit_value);
} /* }}} */

/* {{{ int jit_insn_push(jit_function_t function, jit_value_t value) */
PHP_FUNCTION(jit_insn_push) {
	zval *zfunction, *zvalue;
	jit_function_t function;
	jit_value_t value;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zvalue) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(value,     jit_value_t,    &zvalue,     -1, le_jit_value_name,    le_jit_value);
	
	RETURN_LONG(jit_insn_push(function, value));
} /* }}} */

/* {{{ int jit_insn_push_ptr(jit_function_t function, jit_value_t value, jit_type_t type) */
PHP_FUNCTION(jit_insn_push_ptr) {
	zval *zfunction, *zvalue, *ztype;
	jit_function_t function;
	jit_value_t value;
	jit_type_t type;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rrz", &zfunction, &zvalue, &ztype) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function,  jit_function_t, &zfunction,  -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(value,     jit_value_t,    &zvalue,     -1, le_jit_value_name,    le_jit_value);
	
	if (Z_TYPE_P(ztype) == IS_LONG) {
		type = (jit_type_t) Z_LVAL_P(ztype);
	} else ZEND_FETCH_RESOURCE(type, jit_type_t, &ztype, -1, le_jit_type_name, le_jit_type);
	
	RETURN_LONG(jit_insn_push_ptr(function, value, type));
} /* }}} */

/* {{{ void jit_insn_return(jit_function_t function, jit_value_t result) */
PHP_FUNCTION(jit_insn_return) {
	zval *zfunction, *zresult;
	jit_function_t function;
	jit_value_t result;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "rr", &zfunction, &zresult) != SUCCESS) {
		return;
	}
	
	ZEND_FETCH_RESOURCE(function, jit_function_t, &zfunction, -1, le_jit_function_name, le_jit_function);
	ZEND_FETCH_RESOURCE(result, jit_value_t, &zresult, -1, le_jit_value_name, le_jit_value);

	RETURN_LONG(jit_insn_return(function, result));
} /* }}} */
#endif
#endif
