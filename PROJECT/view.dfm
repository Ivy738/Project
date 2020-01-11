object FrmView: TFrmView
  Left = 0
  Top = 0
  Caption = 'View File'
  ClientHeight = 178
  ClientWidth = 379
  Color = clInactiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object MemView: TMemo
    Left = 0
    Top = 0
    Width = 377
    Height = 188
    Lines.Strings = (
      '')
    TabOrder = 0
  end
  object StsbrView: TStatusBar
    Left = 0
    Top = 159
    Width = 379
    Height = 19
    Panels = <
      item
        Width = 150
      end
      item
        Text = 'Because Your life Matters'
        Width = 150
      end>
    ExplicitLeft = 200
    ExplicitTop = 96
    ExplicitWidth = 0
  end
end
