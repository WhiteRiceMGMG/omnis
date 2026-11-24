/**
 * @file      SalAcel.h
 * @brief     SalAcel 公開ヘッダ
 * @ingroup   SalAcel
 *
 * @par ドメイン
 *            SAL
 *
 * @author    agawa
 * @date      2026.11.25
 * @copyright (c) 2026 agawa
 *
 * @par 改訂履歴
 * | 日付       | 内容             |
 * |------------|------------------|
 * | 2026.11.25 | 新規作成         |
 */

#ifndef SALACEL_H
#define SALACEL_H

/**
 * @defgroup SalAcel モジュール和名
 * @brief    アクセル補正を実施する。
 * @{
 */

/*+++ include ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



/*+++ external variable, macros ++++++++++++++++++++++++++++++++++++++++++++++*/

/**
 * @name 外部公開変数・定数
 * @{
 */

/** @brief アクセル開度 */
extern uint8 g_u8SalAcelPct;

/** @brief アクセル補正有無 */
extern uint8 g_u8SalAcelFlg;

/** @} */

/*+++ external function prototype +++++++++++++++++++++++++++++++++++++++++++*/

/**
 * @brief   アクセル初期化
 * @par 処理タイミング
 *          初期化時
 */
void g_vdSalAceInit( void );


/**
 * @brief   アクセル16ms入力
 * @par 処理タイミング
 *          16ms入力時
 */
uint8 g_vdModuleSetMode( uint8 t_u8Mode );


/** @} */ /* end of group SalAcel */

#endif /* SALACEL_H */