object FrmFile: TFrmFile
  Left = 0
  Top = 0
  Caption = 'File Openning'
  ClientHeight = 494
  ClientWidth = 560
  Color = clActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 16
  object LblDetatails: TLabel
    Left = 0
    Top = 0
    Width = 560
    Height = 25
    Align = alTop
    Alignment = taCenter
    Caption = 'Fill In Your Information'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
    ExplicitWidth = 220
  end
  object LblLName: TLabel
    Left = 8
    Top = 93
    Width = 67
    Height = 16
    Caption = 'Last Name'
  end
  object LblFName: TLabel
    Left = 8
    Top = 64
    Width = 67
    Height = 16
    Caption = 'First Name'
  end
  object LblCNumbers: TLabel
    Left = 8
    Top = 120
    Width = 111
    Height = 16
    Caption = 'Contact Numbers'
  end
  object lblAddress: TLabel
    Left = 8
    Top = 158
    Width = 54
    Height = 16
    Caption = 'Address'
  end
  object LblAge: TLabel
    Left = 8
    Top = 180
    Width = 26
    Height = 16
    Caption = 'Age'
  end
  object lblHistory: TLabel
    Left = 8
    Top = 217
    Width = 46
    Height = 16
    Caption = 'Gender'
  end
  object LblUserName: TLabel
    Left = 8
    Top = 333
    Width = 64
    Height = 16
    Caption = 'UserName'
    ParentShowHint = False
    ShowHint = False
  end
  object LblPassword: TLabel
    Left = 8
    Top = 371
    Width = 63
    Height = 16
    Caption = 'Password'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object LblConfirmPswd: TLabel
    Left = 8
    Top = 409
    Width = 116
    Height = 16
    Caption = 'Confirm Password'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblFRD: TLabel
    Left = 8
    Top = 239
    Width = 147
    Height = 16
    Caption = 'Family Related Disease'
  end
  object Label1: TLabel
    Left = 8
    Top = 261
    Width = 148
    Height = 16
    Caption = 'OR Any known Disease'
  end
  object EdtFName: TEdit
    Left = 192
    Top = 61
    Width = 121
    Height = 24
    TabOrder = 0
  end
  object EdtLName: TEdit
    Left = 192
    Top = 88
    Width = 121
    Height = 24
    TabOrder = 1
  end
  object CmbGender: TComboBox
    Left = 192
    Top = 208
    Width = 121
    Height = 24
    TabOrder = 2
    Items.Strings = (
      'Male'
      'Female')
  end
  object BtnSave: TButton
    Left = 33
    Top = 284
    Width = 91
    Height = 25
    Caption = 'Save Info'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = BtnSaveClick
  end
  object EdtAge: TEdit
    Left = 192
    Top = 178
    Width = 121
    Height = 24
    TabOrder = 4
  end
  object EdtUserName: TEdit
    Left = 192
    Top = 325
    Width = 121
    Height = 24
    TabOrder = 5
  end
  object EdtPswd: TEdit
    Left = 192
    Top = 363
    Width = 121
    Height = 24
    PasswordChar = '*'
    TabOrder = 6
  end
  object EdtCPswd: TEdit
    Left = 192
    Top = 401
    Width = 121
    Height = 24
    PasswordChar = '*'
    TabOrder = 7
  end
  object BtbtnOk: TBitBtn
    Left = 72
    Top = 444
    Width = 89
    Height = 25
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 8
    OnClick = BtbtnOkClick
  end
  object EdtAddress: TEdit
    Left = 192
    Top = 148
    Width = 121
    Height = 24
    TabOrder = 9
  end
  object EdtCNum: TEdit
    Left = 192
    Top = 118
    Width = 121
    Height = 24
    MaxLength = 10
    NumbersOnly = True
    TabOrder = 10
  end
  object StsbrFile: TStatusBar
    Left = 0
    Top = 475
    Width = 560
    Height = 19
    Panels = <
      item
        Width = 150
      end
      item
        Text = 'Because Your Life Matters'
        Width = 50
      end>
    ExplicitWidth = 371
  end
  object cmbDisease: TComboBox
    Left = 192
    Top = 253
    Width = 121
    Height = 24
    TabOrder = 12
    Items.Strings = (
      'TB'
      'Cancer'
      'Low\High blood'
      'Sugar Diabetes'
      'Allergiest'
      'Other'
      'Not Available')
  end
  object Btnview: TButton
    Left = 392
    Top = 444
    Width = 75
    Height = 25
    Caption = 'View File'
    TabOrder = 13
    Visible = False
    OnClick = BtnviewClick
  end
  object MemView: TMemo
    Left = 344
    Top = 168
    Width = 217
    Height = 226
    Lines.Strings = (
      '')
    TabOrder = 14
  end
  object Panel2: TPanel
    Left = 408
    Top = 48
    Width = 105
    Height = 114
    TabOrder = 15
    object StatusBar1: TStatusBar
      Left = 1
      Top = 94
      Width = 103
      Height = 19
      Panels = <
        item
          Text = 'Dr Phuthego'
          Width = 50
        end>
      ExplicitWidth = 104
    end
  end
end
