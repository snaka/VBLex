VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3120
   ClientLeft      =   75
   ClientTop       =   405
   ClientWidth     =   4650
   LinkTopic       =   "Form1"
   ScaleHeight     =   3120
   ScaleWidth      =   4650
   StartUpPosition =   3  'Windows ‚ÌŠù’è’l
   Begin VB.CommandButton Command1 
      Caption         =   "Command1"
      Height          =   1935
      Left            =   480
      TabIndex        =   0
      Top             =   480
      Width           =   3615
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    Dim lex As VBLexLib.Tokenizer
    Set lex = New Tokenizer
    
    lex.SourceText = "Function hoge()" & vbCrLf & _
                        "set abc = hoge(""fuga, """"moge""""!!!"")" & vbCrLf & _
                        "if len(abc) > 0 then" & vbCrLf & _
                        "  Debug.print ""abc""" & vbCrLf & _
                        "end if" & vbCrLf & _
                        "Exit function" & vbCrLf & _
                      "End Function"
                        
    
    Debug.Print lex.SourceText
    
    Dim tk As Token
    
    For Each tk In lex.Tokens
        
        Debug.Print tk.Type & vbTab;
        
        Select Case tk.Type
            Case TkSTRING
                Debug.Print """" & tk.Text & """"""
            Case Else
                Debug.Print tk.Text
        End Select
        
    Next
    
    Set lex = Nothing
    
End Sub
