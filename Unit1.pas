//  Foobar is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Foobar is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms, Unit2, Unit3;


type
  KonyshevWord = class(Form)
    procedure toolStripMenuItem5_Click(sender: Object; e: EventArgs);
    procedure Openbutton_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem6_Click(sender: Object; e: EventArgs);
    procedure Savebutton_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem4_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem9_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem7_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem8_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure Newbutton_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem10_Click(sender: Object; e: EventArgs);
    procedure Printbutton_Click(sender: Object; e: EventArgs);
    procedure AbProgButton_Click(sender: Object; e: EventArgs);
    procedure OtmenaButton_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem12_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem14_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem15_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem25_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem21_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem22_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem23_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem24_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem18_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem19_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem27_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.KonyshevWord.resources}
    menuStrip1: MenuStrip;
    toolStripMenuItem1: ToolStripMenuItem;
    toolStripMenuItem5: ToolStripMenuItem;
    toolStripMenuItem6: ToolStripMenuItem;
    toolStripMenuItem2: ToolStripMenuItem;
    toolStripMenuItem4: ToolStripMenuItem;
    Openbutton: Button;
    Newbutton: Button;
    Savebutton: Button;
    Printbutton: Button;
    openFileDialog1: OpenFileDialog;
    saveFileDialog1: SaveFileDialog;
    fontDialog1: FontDialog;
    contextMenuStrip1: System.Windows.Forms.ContextMenuStrip;
    components: System.ComponentModel.IContainer;
    toolStripMenuItem7: ToolStripMenuItem;
    toolStripMenuItem8: ToolStripMenuItem;
    toolStripMenuItem9: ToolStripMenuItem;
    button1: Button;
    button2: Button;
    button3: Button;
    button4: Button;
    toolStripMenuItem10: ToolStripMenuItem;
    printPreviewDialog1: PrintPreviewDialog;
    OtmenaButton: Button;
    toolStripMenuItem3: ToolStripMenuItem;
    toolStripMenuItem12: ToolStripMenuItem;
    toolStripMenuItem11: ToolStripMenuItem;
    toolStripMenuItem14: ToolStripMenuItem;
    toolStripMenuItem15: ToolStripMenuItem;
    toolStripMenuItem13: ToolStripMenuItem;
    toolStripMenuItem17: ToolStripMenuItem;
    toolStripMenuItem18: ToolStripMenuItem;
    toolStripMenuItem19: ToolStripMenuItem;
    toolStripMenuItem20: ToolStripMenuItem;
    toolStripMenuItem21: ToolStripMenuItem;
    toolStripMenuItem22: ToolStripMenuItem;
    toolStripMenuItem23: ToolStripMenuItem;
    toolStripMenuItem24: ToolStripMenuItem;
    toolStripMenuItem25: ToolStripMenuItem;
    Back1: PictureBox;
    toolStripMenuItem16: ToolStripMenuItem;
    toolStripMenuItem27: ToolStripMenuItem;
    WordText: RichTextBox;
    {$include Unit1.KonyshevWord.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure KonyshevWord.toolStripMenuItem5_Click(sender: Object; e: EventArgs);
begin
  Openfiledialog1.ShowDialog;                    // Открытие файла по нажатию на кнопку "Открыть" в меню.
  WordText.LoadFile(openfiledialog1.FileName);   // 
end;

procedure KonyshevWord.Openbutton_Click(sender: Object; e: EventArgs);
begin
  Openfiledialog1.ShowDialog;                    // Открытие файла по нажатию на кнопку "Открыть".
  WordText.LoadFile(openfiledialog1.FileName);   //
end;

procedure KonyshevWord.toolStripMenuItem6_Click(sender: Object; e: EventArgs);
begin
  Savefiledialog1.ShowDialog;                    // Сохранение файла по нажатию на кнопку "Сохранить" в меню.
  WordText.SaveFile(Savefiledialog1.FileName);   //
end;

procedure KonyshevWord.Savebutton_Click(sender: Object; e: EventArgs);
begin 
  Savefiledialog1.ShowDialog;                    // Сохранение файла по нажатию на кнопку "Сохранить".
  WordText.SaveFile(Savefiledialog1.filename);   //
end;

procedure KonyshevWord.toolStripMenuItem4_Click(sender: Object; e: EventArgs);
begin
  Form(new Form1).show // Открытие новой Формы при нажатии кнопки "О программе" в меню.
end;

procedure KonyshevWord.toolStripMenuItem9_Click(sender: Object; e: EventArgs);
begin
  WordText.Paste; // Вставка текста при нажатии кнопки "Вставить" в контекстном меню.
end;

procedure KonyshevWord.toolStripMenuItem7_Click(sender: Object; e: EventArgs);
begin
  WordText.Copy; // Копирование текста при нажатии кнопки "Копировать" в контекстном меню.
end;

procedure KonyshevWord.toolStripMenuItem8_Click(sender: Object; e: EventArgs);
begin
  WordText.Cut; // Вырезание текста при нажатии кнопки "Вырезать" в контекстном меню.
end;

procedure KonyshevWord.button1_Click(sender: Object; e: EventArgs);
begin
  fontdialog1.font:=WordText.SelectionFont; //
  fontdialog1.ShowDialog;                   // Открытие окна настроек шрифта при нажатии кнопки "Шрифт".
  WordText.selectionfont:=fontdialog1.Font; //
end;

procedure KonyshevWord.button2_Click(sender: Object; e: EventArgs);
begin
  WordText.Cut; // Вырезание текста при нажатии кнопки "Вырезать".
end;

procedure KonyshevWord.button3_Click(sender: Object; e: EventArgs);
begin
  WordText.Copy; // Копирование текста при нажатии кнопки "Копировать".
end;

procedure KonyshevWord.button4_Click(sender: Object; e: EventArgs);
begin
  WordText.Paste; // Вставка текста при нажатии кнопки "Вставить".
end;

procedure KonyshevWord.Newbutton_Click(sender: Object; e: EventArgs);
begin
  WordText.Clear; // Создание нового документа при нажатии кнопки "Новый".
end;

procedure KonyshevWord.toolStripMenuItem10_Click(sender: Object; e: EventArgs);
begin
  WordText.Clear; // Создание нового документа при нажатии кнопки "Новый" в меню.
end;

procedure KonyshevWord.Printbutton_Click(sender: Object; e: EventArgs);
begin 
  printpreviewdialog1.ShowDialog; // Открытие окна печати документа при нажатии кнопки "Принтер".
end;

procedure KonyshevWord.AbProgButton_Click(sender: Object; e: EventArgs);
begin
  Form(new Form1).show // Открытие новой Формы при нажатии кнопки "О программе".
end;

procedure KonyshevWord.OtmenaButton_Click(sender: Object; e: EventArgs);
begin
  WordText.Undo; // Очистка всего WordText при нажатии кнопки "Отменить".
end;

procedure KonyshevWord.toolStripMenuItem12_Click(sender: Object; e: EventArgs);
begin
  fontdialog1.font:=WordText.SelectionFont; //
  fontdialog1.ShowDialog;                   // Открытие окна настроек шрифта при нажатии кнопки "Шрифт" в меню.
  WordText.selectionfont:=fontdialog1.Font; //
end;

procedure KonyshevWord.toolStripMenuItem14_Click(sender: Object; e: EventArgs);
begin
  WordText.Undo; // Очистка всего WordText при нажатии кнопки "Отменить" в меню.
end;

procedure KonyshevWord.toolStripMenuItem15_Click(sender: Object; e: EventArgs);
begin
  WordText.SelectAll; // Выделение всего текста в WordText при нажатии кнопки "Выделить всё" в меню.
end;

procedure KonyshevWord.toolStripMenuItem25_Click(sender: Object; e: EventArgs);
begin
  Close; // Закрытие главного окна при нажатии кнопки "Выход" в меню.
end;

procedure KonyshevWord.toolStripMenuItem27_Click(sender: Object; e: EventArgs);
begin
  Form(new Form2).show // Открытие новой Формы при нажатии кнопки "О программе" в меню.
end;

procedure KonyshevWord.toolStripMenuItem21_Click(sender: Object; e: EventArgs);
begin 
  toolstripmenuItem1.Text:='File';                      // Изменение языка интерфейса на "Английский".
  toolstripmenuItem10.Text:='New';                      //
  toolstripmenuItem5.Text:='Open';                      // 
  toolstripmenuItem6.Text:='Save';                      //
  toolstripmenuItem25.Text:='Exit';                     //
  toolstripmenuItem11.Text:='Edit';                     //
  toolstripmenuItem14.Text:='Cancel';                   //
  toolstripmenuItem15.Text:='Select all';               //
  toolstripmenuItem3.Text:='Style';                     //
  toolstripmenuItem12.Text:='Font';                     //
  toolstripmenuItem13.Text:='View';                     //
  toolstripmenuItem17.Text:='Theme';                    //
  toolstripmenuItem20.Text:='Language';                 //
  toolstripmenuItem18.Text:='Dark';                     //
  toolstripmenuItem19.Text:='Light';                    //
  toolstripmenuItem21.Text:='English';                  //
  toolstripmenuItem22.Text:='Belorussian';              //
  toolstripmenuItem23.Text:='Russian';                  //
  toolstripmenuItem24.Text:='Polish';                   //
  toolstripmenuItem2.Text:='Help';                      //
  toolstripmenuItem4.Text:='About the program';         //
  openFileDialog1.FileName:='Konyshev Writer Document'; //
  openFileDialog1.Filter:='Document (*.kdoc)|*.kdoc';   //
  saveFileDialog1.FileName:='Konyshev Writer Document'; //
  saveFileDialog1.Filter:='Document (*.kdoc)|*.kdoc';   //
  toolstripmenuItem7.Text:='Copy';                      //
  toolstripmenuItem8.Text:='Cut';                       // 
  toolstripmenuItem9.Text:='Paste';                     //
end;

procedure KonyshevWord.toolStripMenuItem22_Click(sender: Object; e: EventArgs);
begin
  toolstripmenuItem1.Text:='Файл';                       // Изменение языка интерфейса на "Белорусский".
  toolstripmenuItem10.Text:='Новы';                      //
  toolstripmenuItem5.Text:='Адкрыць';                    //
  toolstripmenuItem6.Text:='Захаваць';                   //
  toolstripmenuItem25.Text:='Вынахад';                   //
  toolstripmenuItem11.Text:='Праўка';                    //
  toolstripmenuItem14.Text:='Адмяніць';                  //
  toolstripmenuItem15.Text:='Вылучыць усё';              //
  toolstripmenuItem3.Text:='Стыль';                      //
  toolstripmenuItem12.Text:='Шрыфт';                     //
  toolstripmenuItem13.Text:='Выгляд';                    //
  toolstripmenuItem17.Text:='Тэма';                      //
  toolstripmenuItem20.Text:='Мова';                      //
  toolstripmenuItem18.Text:='Цёмная';                    //
  toolstripmenuItem19.Text:='Светлая';                   //
  toolstripmenuItem21.Text:='Англійская';                //
  toolstripmenuItem22.Text:='Беларускі';                 //
  toolstripmenuItem23.Text:='Рускі';                     //
  toolstripmenuItem24.Text:='Польскі';                   //
  toolstripmenuItem2.Text:='Дапамога';                   //
  toolstripmenuItem4.Text:='Аб праграме';                //
  openFileDialog1.FileName:='Дакумент Konyshev  Wirter'; //
  openFileDialog1.Filter:='Дакумент (*.kdoc)|*.kdoc';    //
  saveFileDialog1.FileName:='Дакумент Konyshev  Wirter'; //
  saveFileDialog1.Filter:='Дакумент (*.kdoc)|*.kdoc';    //
  toolstripmenuItem7.Text:='Капіяваць';                  //
  toolstripmenuItem8.Text:='Выразаць';                   //
  toolstripmenuItem9.Text:='Уставіць';
end;

procedure KonyshevWord.toolStripMenuItem23_Click(sender: Object; e: EventArgs);
begin
  toolstripmenuItem1.Text:='Файл';                       // Изменение языка интерфейса на "Русский".
  toolstripmenuItem10.Text:='Новый';                     //
  toolstripmenuItem5.Text:='Открыть';                    //
  toolstripmenuItem6.Text:='Сохранить';                  //
  toolstripmenuItem25.Text:='Выход';                     //
  toolstripmenuItem11.Text:='Правка';                    //
  toolstripmenuItem14.Text:='Отменить';                  //
  toolstripmenuItem15.Text:='Выделить всё';              //
  toolstripmenuItem3.Text:='Стиль';                      //
  toolstripmenuItem12.Text:='Шрифт';                     //
  toolstripmenuItem13.Text:='Вид';                       //
  toolstripmenuItem17.Text:='Тема';                      //
  toolstripmenuItem20.Text:='Язык';                      //
  toolstripmenuItem18.Text:='Тёмная';                    //
  toolstripmenuItem19.Text:='Светлая';                   //
  toolstripmenuItem21.Text:='Английский';                //
  toolstripmenuItem22.Text:='Белорусский';               //
  toolstripmenuItem23.Text:='Русский';                   //
  toolstripmenuItem24.Text:='Польский';                  //
  toolstripmenuItem2.Text:='Помощь';                     //
  toolstripmenuItem4.Text:='О программе';                //
  openFileDialog1.FileName:='Документ Konyshev  Wirter'; //
  openFileDialog1.Filter:='Документ (*.kdoc)|*.kdoc';    //
  saveFileDialog1.FileName:='Документ Konyshev  Wirter'; //
  saveFileDialog1.Filter:='Документ (*.kdoc)|*.kdoc';    //
  toolstripmenuItem7.Text:='Копировать';                 //
  toolstripmenuItem8.Text:='Вырезать';                   //
  toolstripmenuItem9.Text:='Вставить';                   //
end;

procedure KonyshevWord.toolStripMenuItem24_Click(sender: Object; e: EventArgs);
begin
  toolstripmenuItem1.Text:='Plik';                       // Изменение языка интерфейса на "Польский".
  toolstripmenuItem10.Text:='Nowy';                      //
  toolstripmenuItem5.Text:='Otwarty';                    //
  toolstripmenuItem6.Text:='Ratować';                    //
  toolstripmenuItem25.Text:='Wyjście';                   //
  toolstripmenuItem11.Text:='Edytować';                  //
  toolstripmenuItem14.Text:='Anulować';                  //
  toolstripmenuItem15.Text:='Zaznacz wszystko';          //
  toolstripmenuItem3.Text:='Styl';                       //
  toolstripmenuItem12.Text:='Czcionka';                  //
  toolstripmenuItem13.Text:='Pogląd';                    //
  toolstripmenuItem17.Text:='Temat';                     //
  toolstripmenuItem20.Text:='Język';                     //
  toolstripmenuItem18.Text:='Ciemny';                    //
  toolstripmenuItem19.Text:='Światło';                   //
  toolstripmenuItem21.Text:='Angielski';                 //
  toolstripmenuItem22.Text:='Białoruski';                //
  toolstripmenuItem23.Text:='Rosyjski';                  //
  toolstripmenuItem24.Text:='Polski';                    //
  toolstripmenuItem2.Text:='Pomoc';                      //
  toolstripmenuItem4.Text:='O programie';                //
  openFileDialog1.FileName:='Dokument Konyshev  Wirter'; //
  openFileDialog1.Filter:='Dokument (*.kdoc)|*.kdoc';    //
  saveFileDialog1.FileName:='Dokument Konyshev  Wirter'; //
  saveFileDialog1.Filter:='Dokument (*.kdoc)|*.kdoc';    //
  toolstripmenuItem7.Text:='Kopiuj';                     //
  toolstripmenuItem8.Text:='Odetnij';                    //
  toolstripmenuItem9.Text:='Wstawić';                    //
end;

procedure KonyshevWord.toolStripMenuItem18_Click(sender: Object; e: EventArgs);
begin
  toolstripmenuItem1.BackColor:=Color.FromArgb(0, 0, 0);          // Изменение темы оформление на тёмную.
  toolstripmenuItem2.BackColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem3.BackColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem11.BackColor:=Color.FromArgb(0, 0, 0);         // 
  toolstripmenuItem13.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem5.BackColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem6.BackColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem10.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem25.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem14.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem15.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem12.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem17.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem20.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem21.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem22.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem23.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem24.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem4.BackColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem7.BackColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem8.BackColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem9.BackColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem18.BackColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem19.BackColor:=Color.FromArgb(0, 0, 0);         //
  //////////////////////////////////////////////////////////////  //
  toolstripmenuItem1.ForeColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem2.ForeColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem3.ForeColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem11.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem13.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem5.ForeColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem6.ForeColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem10.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem25.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem14.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem15.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem12.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem17.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem20.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem21.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem22.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem23.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem24.ForeColor:=Color.FromArgb(255, 255, 255);   // 
  toolstripmenuItem4.ForeColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem7.ForeColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem8.ForeColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem9.ForeColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem18.ForeColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem19.ForeColor:=Color.FromArgb(255, 255, 255);   //
  //////////////////////////////////////////////////////////////  //
  WordText.BackColor:=Color.FromArgb(0, 0, 0);                    //  
  WordText.ForeColor:=Color.FromArgb(255, 255, 255);              //
  //////////////////////////////////////////////////////////////  //
  Back1.Visible:=true;                                            //
  menustrip1.BackColor:=Color.FromArgb(0, 0, 0);                  //
  toolstripmenuitem16.Visible:=true;                              //
  toolstripmenuitem2.Visible:=false;                              //
end;

procedure KonyshevWord.toolStripMenuItem19_Click(sender: Object; e: EventArgs);
begin
  toolstripmenuItem1.BackColor:=Color.FromArgb(240, 240, 240);    // Изменение темы оформление на светлую.
  toolstripmenuItem2.BackColor:=Color.FromArgb(240, 240, 240);    //
  toolstripmenuItem3.BackColor:=Color.FromArgb(240, 240, 240);    //
  toolstripmenuItem11.BackColor:=Color.FromArgb(240, 240, 240);   //
  toolstripmenuItem13.BackColor:=Color.FromArgb(240, 240, 240);   //
  toolstripmenuItem5.BackColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem6.BackColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem10.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem25.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem14.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem15.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem12.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem17.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem20.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem21.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem22.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem23.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem24.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem4.BackColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem7.BackColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem8.BackColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem9.BackColor:=Color.FromArgb(255, 255, 255);    //
  toolstripmenuItem18.BackColor:=Color.FromArgb(255, 255, 255);   //
  toolstripmenuItem19.BackColor:=Color.FromArgb(255, 255, 255);   //
  //////////////////////////////////////////////////////////////  //
  toolstripmenuItem1.ForeColor:=Color.FromArgb(0, 0, 0);          // 
  toolstripmenuItem2.ForeColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem3.ForeColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem11.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem13.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem5.ForeColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem6.ForeColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem10.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem25.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem14.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem15.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem12.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem17.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem20.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem21.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem22.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem23.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem24.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem4.ForeColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem7.ForeColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem8.ForeColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem9.ForeColor:=Color.FromArgb(0, 0, 0);          //
  toolstripmenuItem18.ForeColor:=Color.FromArgb(0, 0, 0);         //
  toolstripmenuItem19.ForeColor:=Color.FromArgb(0, 0, 0);         //
  //////////////////////////////////////////////////////////////  //
  WordText.BackColor:=Color.FromArgb(255, 255, 255);              //
  WordText.ForeColor:=Color.FromArgb(0, 0, 0);                    //
  //////////////////////////////////////////////////////////////  //
  Back1.Visible:=false;                                           //
  menustrip1.BackColor:=Color.FromArgb(240, 240, 240);            //
  toolstripmenuitem16.Visible:=false;                             //
  toolstripmenuitem2.Visible:=true;                               //
end;


end.
