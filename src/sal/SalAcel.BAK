/**
 * @file      mymodule.h
 * @brief     モジュールの公開インターフェース
 * @details   モジュールの役割・提供する機能を記入する。
 * @ingroup   mymodule
 *
 * @par ドメイン
 *            APL
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
 * @defgroup mymodule モジュール和名 (MYMODULE)
 * @brief    このモジュールが提供する機能を記入する。
 * @details  モジュールの責務や役割を簡潔に記入する。
 * @{
 */

/*+++ include ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/**
 * @name 外部公開変数
 * @{
 */

/** @brief 停止モード */
#define g_u8_MYMODULE_MODE_OFF ((uint8)0U)

/** @brief 動作モード */
#define g_u8_MYMODULE_MODE_ON  ((uint8)1U)

/** @} */

/**
 * @name 処理結果定義
 * @{
 */

/** @brief 正常終了 */
#define g_u8_MYMODULE_RET_OK ((uint8)0U)

/** @brief 異常終了 */
#define g_u8s_MYMODULE_RET_NG ((uint8)1U)

/** @} */


/*+++ external variable, macros ++++++++++++++++++++++++++++++++++++++++++++++*/

/** @brief モジュール状態 */
extern uint8 g_u8ModuleStatus;

/*+++ public external function prototype +++++++++++++++++++++++++++++++++++++*/

/**
 * @brief   モジュール初期化関数
 * @details モジュール内部の状態を初期化する。
 *
 * @pre     システム初期化処理から呼び出されること。
 * @post    モジュールが初期状態になっていること。
 */
void g_vdModuleInit( void );

/**
 * @brief   モジュール周期処理関数
 * @details モジュールの主処理を実行する。
 *
 * @pre     g_vdMymoduleInit() が呼び出されていること。
 * @note    呼び出し周期を記入する（例：4ms）。
 */
void g_vdModuleMainFunction( void );

/**
 * @brief   モジュール動作モード設定関数
 * @details 指定されたモードを設定する。
 *
 * @param[in] t_u8Mode 設定する動作モード
 *
 * @return  処理結果
 * @retval  s_u8_MYMODULE_RET_OK  正常終了
 * @retval  s_u8_MYMODULE_RET_NG  異常終了
 *
 * @note    不正なモードが指定された場合は設定しない。
 */
uint8 g_vdModuleSetMode( uint8 t_u8Mode );

/** @} */ /* end of group mymodule */

#endif /* MYMODULE_H */