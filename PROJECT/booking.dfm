object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Login'
  ClientHeight = 231
  ClientWidth = 268
  Color = clActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object LblPatientBook: TLabel
    Left = 24
    Top = 96
    Width = 138
    Height = 13
    Caption = 'Registered/ Regular Patients'
  end
  object lblPname: TLabel
    Left = 24
    Top = 128
    Width = 64
    Height = 13
    Caption = 'Patient Name'
  end
  object Label2: TLabel
    Left = 24
    Top = 155
    Width = 83
    Height = 13
    Caption = 'Patient Password'
  end
  object BtnNewReg: TButton
    Left = 8
    Top = 40
    Width = 145
    Height = 25
    Caption = 'New Patient Registration'
    TabOrder = 0
    OnClick = BtnNewRegClick
  end
  object btnLogIn: TButton
    Left = 24
    Top = 184
    Width = 75
    Height = 25
    Caption = 'log In'
    TabOrder = 1
  end
  object EdtPName: TEdit
    Left = 113
    Top = 128
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object EdtPasword: TEdit
    Left = 113
    Top = 152
    Width = 121
    Height = 21
    TabOrder = 3
  end
end
