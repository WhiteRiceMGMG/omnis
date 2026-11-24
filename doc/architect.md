/*+++ 変更履歴 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*	vert1.0 新規作成						       */
/*									       */
/*									       */
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

System Service
	Schedule
	g_vdSsScheduleInitCall( void )	実行管理初期化
	g_vdSsScheduleInCall( void )	実行管理入力
	g_vdSsScheduleCtlCall( void )	実行管理制御
	g_vdSsScheduleOutCall( void )	実行管理出力
	g_u8SsScheculeInCnt		実行管理入力カウンター
	g_u8SsScheduleCtlCnt		実行管理制御カウンター
	g_u8SsScheduleOutCnt		実行管理出力カウンター  
	g_vdSsSchedule1msCnt		実行管理1msカウンター

	CycleMng
	g_vdSsCyclemngInit( void )	周期管理初期化
	g_vdSsCyclemng4msin( void )	周期管理4ms入力
	g_vdSsCyclemng4msctl( void )	周期管理4ms制御
	g_vdSsCyclemng4msout( void )	周期管理 4ms出力
	g_vdSsCyclemng16msin( void )	周期管理16ms入力
	g_vdSsCyclemng16msctl(void )	周期管理16ms制御
	g_vdSsCyclemng16msout( void)	周期管理16ms出力
	g_vdSsCyclemng64msin( void )	周期管理64ms入力
	g_vdSsCyclemng64msctl( void )	周期管理64ms制御
	g_vdSsCyclemng64msout( void)	周期管理64ms出力
	g_u8SsCyclemng1msCnt		周期管理1msカウンター
	
	PrtLog
	g_vdPrtLog( const uint8 *PtrStr )	 	  デバッグ用差し込み関数
	g_vdPrtLogArg( const uint8 *PrtStr, uint32  Arg ) デバッグ用差し込み関数

I/O Abstraction Layer
	IoAbst
	g_u16IoaGetAdc( uint8 id )	IO抽象化ADC取得
	g_u8IoaGetDigin( uint8 id  )	IO抽象化デジタル取得
	g_vdIoaSetDigout( uint8 id )	IO抽象化デジタルセット
	g_vdIoaSetPwm( uint8 id, uint16 prd, uint16 duty )IO抽象化PWMセット
	
Microcontroller Abstraction Layer
	Mcal
	g_u16McalAdcRead( uint8 id )	MCALADC取得
	g_vdMcalGpioRead( uint8 id  )	MCALデジタル取得
	g_vdMcalGpioWrite( uint8 id )	MCALデジタルセット
	g_vdMcalPwmSet( uint8 id, uint16 prd, uint16 duty ) MCAL抽象化PWMセット

Sensor Actuator Layer
	SalAramng
	g_vdSalAramngInit( void )	SALエリア管理初期化
	g_vdSalAramng4msin( void )	SALエリア管理4ms入力
	g_vdSalAramng4msout( void )	SALエリア管理4ms出力
	g_vdSalAramng16msin( void )	SALエリア管理16ms入力
	g_vdSalAramng16msout( void )	SALエリア管理16ms出力
	g_vdSalAramng64msin( void )	SALエリア管理64ms入力
	g_vdSalAramng64msout( void )	SALエリア管理64ms出力

	SalAcel
	g_vdSalAceInit( void )		アクセル初期化
	g_vdSalAcel16msin( void )	アクセル16ms入力
	g_u8SalAcelPct			アクセル開度
	g_u8SalAcelFlg			アクセル補正有無

	SalBrk
	g_vdSalBrkInit( void )		ブレーキ初期化
	g_vdSalBrk4msin( void )		ブレーキ4ms入力
	g_u8SalBrkPct			ブレーキ開度
	g_u8SalBrkFlg			ブレーキ補正有無

	SalDrvmd
	g_vdSalDrvmdInit( void )	ドライブモード初期化
	g_vdSalDrvmd64msin( void )	ドライブモード64ms入力
	g_u8SalDrvmdMode		ドライブモード
	g_u8SalDrvmdFlg			ドライブモード補正有無

	SalIgsw
	g_vdSalIgswInit( void )		イグニッション初期化
	g_vdSalIgsw64msin( void )	イグニッション64ms入力
	g_u8SalIgswSts			イグニッション
	g_u8SalIgswFlg			イグニッション補正有無

	SalDrvOut
	g_vdSalDrvOutInit( void )	駆動出力初期化
	g_vdSalDrvOut16msout( void )	駆動出力16ms出力
	g_u8SalDrvOutPct		駆動出力パーセント

	SalBrkOut
	g_vdSalBrkOutInit( void )	ブレーキ出力初期化
	g_vdSalBrkOut16msout( void )	ブレーキ出力16ms出力
	g_u8SalBrkOutPct		ブレーキ出力パーセント

Application
	AppAramng
	g_vdAppAramngInit( void )	APPエリア管理初期化
	g_vdAppAramng4msin( void )	APPエリア管理4ms入力
	g_vdAppAramng4msout( void )	APPエリア管理4ms出力
	g_vdAppAramng16msin( void )	APPエリア管理16ms入力
	g_vdAppAramng16msout( void )	APPエリア管理16ms出力
	g_vdAppAramng64msin( void )	APPエリア管理64ms入力
	g_vdAppAramng64msout( void )	APPエリア管理64ms出力

	AppPerm
	g_vdAppPermInit( void )		APP許可初期化
	g_vdAppPerm16ms( void )		APP許可16ms
	g_u8AppPermDrvFlg		APP許可駆動

	AppDrvCtl
	g_vdAppDrvCtlInit( void )	APP駆動制御初期化
	g_vdAppDrvCtl16ms( void )	APP駆動制御16ms
	g_vdAppDrvCtlOut		APP駆動制御出力

	AppBrk
	g_vdAppBrkCtlInit( void )	APPブレーキ制御初期化
	g_vdAppBrkCtl4ms( void )	APPブレーキ制御4ms
	g_u8AppBrkCtlOut		APPブレーキ制御出力




