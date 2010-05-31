# VBLex (Lexer for VB6)

## VBLexとは

VB6のソースコードの字句解析を行うためのCOMコンポーネントです。

## 使い方

<pre><code>Private Sub Command1_Click()
    Dim lex As VBLexLib.Tokenizer
    Set lex = New Tokenizer
    
    lex.SourceText = "set abc = hoge(""fuga, """"moge""""!!!"")"
    
    Debug.Print lex.SourceText
    
    Dim tk As Token
    
    For Each tk In lex.Tokens
        Debug.Print tk.Type, tk.Text
    Next
    
    Set lex = Nothing
    
End Sub
</code></pre>

上記のようなコードを実行すると,以下のような出力が得られます。

<pre><code>set abc = hoge("fuga, ""moge""!!!")
 6            set
 9            abc
 3            =
 9            hoge
 4            (
 5            fuga, "moge"!!!
 4            )
</code></pre>

TokenizerのSourceTextに解析するテキストを設定して、
Tokensコレクションにアクセスすると、字句解析結果をトークン単位で
取得することができます。

Tokenオブジェクトは、トークンの種類をあらわすTypeプロパティと
Token自身のテキストをあらわすTextプロパティを持ちます。

Typeの数値の意味は以下のようになってます。
<pre><code>#define TkBLANK         1
#define TkNL            2
#define TkOP            3
#define TkPUNC          4
#define TkSTRING        5
#define TkSTMT          6
#define TkKEYW          7
#define TkVB            8
#define TkIDENT         9
#define TkDIGIT         10
#define TkCOMMENT       11
#define TkOTHER         99
</code></pre>

## ライセンス

The MIT License

Copyright (c) 2010 snaka.gml@gmail.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

== コンタクト

snaka.gml@gmail.com

http://d.hatena.ne.jp/snaka72/

