object FrmLogin: TFrmLogin
  Left = 0
  Top = 0
  Caption = 'Login'
  ClientHeight = 246
  ClientWidth = 380
  Color = clActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object LblPatientBook: TLabel
    Left = 8
    Top = 21
    Width = 138
    Height = 13
    Caption = 'Registered/ Regular Patients'
  end
  object lblPname: TLabel
    Left = 8
    Top = 64
    Width = 64
    Height = 13
    Caption = 'Patient Name'
  end
  object lblPPasswd: TLabel
    Left = 8
    Top = 107
    Width = 83
    Height = 13
    Caption = 'Patient Password'
  end
  object BtnNewReg: TButton
    Left = 144
    Top = 176
    Width = 145
    Height = 25
    Caption = 'New Patient Registration'
    TabOrder = 0
    OnClick = BtnNewRegClick
  end
  object btnLogIn: TButton
    Left = 16
    Top = 176
    Width = 75
    Height = 25
    Caption = 'log In'
    TabOrder = 1
    OnClick = btnLogInClick
  end
  object EdtPName: TEdit
    Left = 105
    Top = 59
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object EdtPasword: TEdit
    Left = 105
    Top = 108
    Width = 121
    Height = 21
    PasswordChar = '*'
    TabOrder = 3
  end
  object PnlLogin: TPanel
    Left = 256
    Top = 8
    Width = 108
    Height = 121
    TabOrder = 4
    object StatusBar1: TStatusBar
      Left = 1
      Top = 101
      Width = 106
      Height = 19
      Panels = <
        item
          Text = 'Dr Phuthego'
          Width = 50
        end>
    end
  end
  object StsBrLogin: TStatusBar
    Left = 0
    Top = 227
    Width = 380
    Height = 19
    Panels = <
      item
        Width = 150
      end
      item
        Text = 'Because Your Life Matters'
        Width = 50
      end>
  end
  object ListBox1: TListBox
    Left = 251
    Top = 134
    Width = 121
    Height = 97
    ItemHeight = 13
    TabOrder = 6
    Visible = False
  end
end
