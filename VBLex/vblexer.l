%option noyywrap
%option c++
%{

#include "vblexDefs.h"

char string_buff[1024];

%}

%x QUOTE

%%

\r\n |
\n   { return TkNL; }

[\ \t]+       { return TkBLANK; }
_[\ \t]*$     { return TkBLANK; }

[[:digit:]]+  { return TkDIGIT; }

(&|\*|\+|-|\/|\\|\^|AddressOf|And|Or|Eqv|Is|Like|Mod|Not|Xor)  {
  return TkOP;
}

(\=|<\=|\=<|<|>|>\=|\=>)  {
  return TkOP;
}

\'.*$         { return TkCOMMENT; }

\" {
  string_buff[0] = '\0';
  BEGIN(QUOTE);
}
<QUOTE>[^\"]+ {
  strcat(string_buff, yytext);
}
<QUOTE>\"\" {
  strcat(string_buff, "\"");
}
<QUOTE>\" {
  BEGIN(INITIAL);
  return TkSTRING;
}

(\(|\)|,|:|;|\.)  {
  return TkPUNC;
}


(?xi:If|
  Else|
  ElseIf|
  Select|
  Do|
  While|
  For
) { return TkCOND; }

(?xi:Exit\ Sub|
  Exit\ Function|
  Exit\ Property
) { return TkEXIT; }

(?xi:End\ Sub|
  End\ Function|
  End\ Property
) { return TkENDPROC; }

(?xi:Sub|
  Function|
  Property
) { return TkPROC; }

(?xi:AppActivate|
  Beep|
  Call|
  ChDir|
  ChDrive|
  Close|
  Const|
  Date|
  Declare|
  Deftype|
  DeleteSetting|
  Dim|
  Loop|
  End\ If|
  End|
  Enum|
  Erase|
  Event|
  FileCopy|
  Each|
  In|
  Next|
  To|
  Step|
  Function|
  Get|
  Gosub|
  Return|
  Goto|
  On|
  Implements|
  Input|
  Kill|
  Let|
  Line|
  Load|
  Unlock|
  LSet|
  MkDir|
  Name|
  On\ Error|
  Open|
  Option\ Base|
  Option\ Compare|
  Option\ Explicit|
  Option\ Private|
  Print\ \#|
  Private|
  Property\ Get|
  Property\ Let|
  Property\ Set|
  Public|
  Put|
  RaiseEvent|
  Randomize|
  ReDim|
  Rem|
  Reset|
  Resume|
  RmDir|
  RSet|
  SavePicture|
  SaveSetting|
  Seek|
  Case|
  end\ select|
  SendKeys|
  Set|
  SetAttr|
  Static|
  Stop|
  Sub|
  Time|
  Type|
  Unload|
  Wend|
  Width\ \#|
  With|
  Write\ \#
) { return TkSTMT; }

(?xi:As|
  Binary|
  ByRef|
  ByVal|
  Date|
  Else|
  Empty|
  False|
  Friend|
  Get|
  Input|
  Is|
  Len|
  Let|
  Lock|
  Me|
  New|
  Next|
  Nothing|
  Null|
  On|
  Option|
  Optional|
  ParamArray|
  Print|
  Private|
  Property|
  Public|
  Resulme|
  Seek|
  Set|
  Static|
  Step|
  Then|
  Time|
  To|
  True|
  WithEvents
) { return TkKEYW; }

(?xi:VERSION|
  CLASS|
  BEGIN|
  MultiUse|
  Persistable|
  DataBindingBehavior|
  DataSourceBehavior|
  MTSTransactionMode|
  END|
  Attribute|
  VB_Name|
  VB_GlobalNameSpace|
  VB_Creatable|
  VB_PredeclaredId|
  VB_Exposed
) { return TkVB; }

[A-Za-z][A-Za-z0-9_]*\$?  {
  return TkIDENT;
}

. { return TkOTHER; }

%%

int main(void) {
  FlexLexer* lex = new yyFlexLexer;
  int ret;

  while((ret = lex->yylex()) != 0)
  {
    switch(ret) {

      case TkSTRING:
        std::cout << ret << "::" << string_buff << std::endl;
        break;

      default:
        std::cout << ret << "::" << lex->YYText() << std::endl;
        break;
    }
  }

  delete lex;
}

// vim: ff=dos ts=2 sw=2 et
