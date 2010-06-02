
enum VBLexTokenTypes {
	TkBLANK = 1,		// 空白
	TkNL,				// 改行
	TkOP,				// 演算子
	TkPUNC,				// 約物（カンマ，ピリオド，かっこなど…）
	TkSTRING,			// 文字列
	TkSTMT,				// ステートメント
	TkKEYW,				// キーワード
	TkCOND,				// 条件分岐のステートメント
	TkPROC,				// プロシージャの開始ステートメント
	TkENDPROC,			// プロシージャの終了ステートメント
	TkVB,				// cls,frmファイル内部で使用しているキーワード
	TkIDENT,			// 識別子（変数名，プロシージャ名など）
	TkDIGIT,			// 数字
	TkCOMMENT,			// コメント
	TkOTHER				// その他
};
