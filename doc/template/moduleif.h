/**
 * @file      [mymodule].h
 * @brief     [MYMODULE] 公開ヘッダ
 * @ingroup   [mymodule]
 *
 * @par ドメイン
 *            [DOMAIN]
 *
 * @author    agawa
 * @date      YYYY.MM.DD
 * @copyright (c) 20XX agawa
 *
 * @par 改訂履歴
 * | 日付       | 内容             |
 * |------------|------------------|
 * | YYYY.MM.DD | 新規作成         |
 */

#ifndef MYMODULE_H
#define MYMODULE_H

/**
 * @defgroup [mymodule] [モジュール和名]
 * @brief    [このモジュールが何をするかを1行で書く。]
 * @{
 */

/*+++ include ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


/*+++ external variable, macros ++++++++++++++++++++++++++++++++++++++++++++++*/

/**
 * @name 外部公開変数・定数
 * @{
 */

/** @brief モジュール状態 */
extern uint8 g_XxxxXxxx;

/** @brief 異常終了 */
#define g_u8s_MYMODULE_RET_NG ((uint8)1U)

/** @} */


/*+++ external function prototype +++++++++++++++++++++++++++++++++++++++++++*/

/**
 * @brief   [関数の概要を記入]
 * @par 処理タイミング
 *          [処理タイミングを記入]
 * @details [詳細あり場合のみ記載]
 */
void g_vdModuleInit( void );


/**
 * @brief   [関数の概要を記入]
 * @par 処理タイミング
 *          [処理タイミングを記入]
 * @details [詳細あり場合のみ記載]
 */
uint8 g_vdModuleSetMode( uint8 t_u8Mode );

/** @} */ /* end of group [mymodule] */

#endif /* [MYMODULE_H] */