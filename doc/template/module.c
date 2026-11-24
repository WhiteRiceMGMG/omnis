/*+++ abstraction ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/**
 * @file      mymodule.c
 * @brief     モジュール処理本体
 * @details   モジュールの内部処理を実装する。
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
 *
 */

/*+++ include ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
#include "../../inc/common.h"

#if ( g_PRT_LOG_SETTING == g_PRT_LOG_VALID )
#include "../../ss/debug/log/print_log.h"
#endif

#include "mymodule.h"

/*+++ external variable, macros ++++++++++++++++++++++++++++++++++++++++++++++*/
/** @brief モジュール状態 */
uint8 g_u8ModuleSample;

/*+++ internal variable, macros ++++++++++++++++++++++++++++++++++++++++++++++*/
/**
 * @name 内部変数
 * @{
 */

/** @brief 現在の動作モード */
static uint8 s_u8ModuleMode;

/** @brief 前回の動作モード */
static uint8 s_u8ModuleMode_o;

/** @} */

/**
 * @name 判定閾値
 * @{
 */

/** @brief 動作判定閾値 */
#define s_u8_MYMODULE_THRESHOLD ((uint8)100U)

/** @} */

/*+++ internal function prototype ++++++++++++++++++++++++++++++++++++++++++++*/

/** @brief  モジュール関数 */
static uint8 s_u8ModuleFunction( uint8 t_u8Val );

/** @brief  モジュールアップデート */
static void  s_vdModuleUpdate( void );

/*+++ external function ++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/**
 * @brief   モジュール初期化関数
 * @details モジュール内部の状態を初期化する。
 *
 * @pre     なし
 * @post    各内部変数が初期値になっていること。
 */
void
g_vdModuleInit( void )
{
    s_u8ModuleMode   = u8s_MYMODULE_MODE_OFF;
    s_u8ModuleMode_o = u8s_MYMODULE_MODE_OFF;

    g_u8ModuleSample = u8s_MYMODULE_MODE_OFF;
}

/**
 * @brief   モジュール周期処理関数
 * @details モジュールの主処理を実行する。
 *
 * @pre     g_vdModuleInit() が呼び出されていること。
 * @see     s_vdModuleUpdate()
 */
void
g_vdModuleMainFunction( void )
{
    /* 内部処理 */
    s_vdModuleUpdate();

}

/**
 * @brief   モジュール動作モード設定関数
 * @details 指定されたモードの妥当性を確認し、動作モードを更新する。
 *
 * @param[in] t_u8Mode 設定する動作モード
 *
 * @return  処理結果
 * @retval  s_u8_MYMODULE_RET_OK  正常終了
 * @retval  s_u8_MYMODULE_RET_NG  異常終了
 */
uint8
g_vdModuleSetMode( uint8 t_u8Mode )
{
    uint8 t_u8Result;

    t_u8Result = g_u8_MYMODULE_RET_NG;

    if ( s_u8ModuleFunction( u8tMode ) == (uint8)ON )
    {
        s_u8ModuleMode = u8tMode;
        t_u8Result = g_u8_MYMODULE_RET_NG;
    }

    return t_u8Result;
}

/*+++ internal function ++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/**
 * @brief   動作モード妥当性判定
 * @details 指定された動作モードが有効範囲内であるか判定する。
 *
 * @param[in] t_u8Mode 判定する動作モード
 *
 * @return  判定結果
 * @retval  ON   有効
 * @retval  OFF  無効
 *
 * @scope   internal
 */
static uint8
s_u8ModuleFunction( uint8 u8tMode )
{
    uint8 t_u8Result;

    t_u8Result = (uint8)OFF;

    if ( ( t_u8Mode == g_u8_MYMODULE_MODE_OFF )
      || ( u8tMode == g_u8_MYMODULE_MODE_ON ) )
    {
        t_u8Result = (uint8)ON;
    }

    return t_u8Result;
}


/**
 * @brief   内部状態更新
 * @details 前回値と現在値を比較し、内部状態を更新する。
 *
 * @scope   internal
 */
static void
s_vdModuleUpdate( void )
{
    s_u8ModuleMode_o = s_u8ModuleMode;
}