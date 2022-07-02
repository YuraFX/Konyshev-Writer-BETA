procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(KonyshevWord));
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem10 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem5 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem6 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem25 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem11 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem14 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem15 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem3 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem12 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem13 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem17 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem18 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem19 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem20 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem21 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem22 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem23 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem24 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem2 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem4 := new System.Windows.Forms.ToolStripMenuItem();
        self.Openbutton := new System.Windows.Forms.Button();
        self.Newbutton := new System.Windows.Forms.Button();
        self.Savebutton := new System.Windows.Forms.Button();
        self.Printbutton := new System.Windows.Forms.Button();
        self.WordText := new System.Windows.Forms.RichTextBox();
        self.contextMenuStrip1 := new System.Windows.Forms.ContextMenuStrip(self.components);
        self.toolStripMenuItem7 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem8 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem9 := new System.Windows.Forms.ToolStripMenuItem();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.saveFileDialog1 := new System.Windows.Forms.SaveFileDialog();
        self.fontDialog1 := new System.Windows.Forms.FontDialog();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.printPreviewDialog1 := new System.Windows.Forms.PrintPreviewDialog();
        self.OtmenaButton := new System.Windows.Forms.Button();
        self.Back1 := new System.Windows.Forms.PictureBox();
        self.toolStripMenuItem16 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem27 := new System.Windows.Forms.ToolStripMenuItem();
        self.menuStrip1.SuspendLayout();
        self.contextMenuStrip1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.Back1)).BeginInit();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.BackColor := System.Drawing.SystemColors.Control;
        self.menuStrip1.ImageScalingSize := new System.Drawing.Size(20, 20);
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[6](self.toolStripMenuItem1, self.toolStripMenuItem11, self.toolStripMenuItem3, self.toolStripMenuItem13, self.toolStripMenuItem2, self.toolStripMenuItem16));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(997, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.toolStripMenuItem10, self.toolStripMenuItem5, self.toolStripMenuItem6, self.toolStripMenuItem25));
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(48, 20);
        self.toolStripMenuItem1.Text := 'Файл';
        // 
        // toolStripMenuItem10
        // 
        self.toolStripMenuItem10.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem10.Name := 'toolStripMenuItem10';
        self.toolStripMenuItem10.Size := new System.Drawing.Size(132, 22);
        self.toolStripMenuItem10.Text := 'Новый';
        self.toolStripMenuItem10.Click += toolStripMenuItem10_Click;
        // 
        // toolStripMenuItem5
        // 
        self.toolStripMenuItem5.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem5.Name := 'toolStripMenuItem5';
        self.toolStripMenuItem5.Size := new System.Drawing.Size(132, 22);
        self.toolStripMenuItem5.Text := 'Открыть';
        self.toolStripMenuItem5.Click += toolStripMenuItem5_Click;
        // 
        // toolStripMenuItem6
        // 
        self.toolStripMenuItem6.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem6.Name := 'toolStripMenuItem6';
        self.toolStripMenuItem6.Size := new System.Drawing.Size(132, 22);
        self.toolStripMenuItem6.Text := 'Сохранить';
        self.toolStripMenuItem6.Click += toolStripMenuItem6_Click;
        // 
        // toolStripMenuItem25
        // 
        self.toolStripMenuItem25.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem25.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem25.Image')));
        self.toolStripMenuItem25.Name := 'toolStripMenuItem25';
        self.toolStripMenuItem25.Size := new System.Drawing.Size(132, 22);
        self.toolStripMenuItem25.Text := 'Выход';
        self.toolStripMenuItem25.Click += toolStripMenuItem25_Click;
        // 
        // toolStripMenuItem11
        // 
        self.toolStripMenuItem11.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem14, self.toolStripMenuItem15));
        self.toolStripMenuItem11.Name := 'toolStripMenuItem11';
        self.toolStripMenuItem11.Size := new System.Drawing.Size(59, 20);
        self.toolStripMenuItem11.Text := 'Правка';
        // 
        // toolStripMenuItem14
        // 
        self.toolStripMenuItem14.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem14.Name := 'toolStripMenuItem14';
        self.toolStripMenuItem14.Size := new System.Drawing.Size(148, 22);
        self.toolStripMenuItem14.Text := 'Отменить';
        self.toolStripMenuItem14.Click += toolStripMenuItem14_Click;
        // 
        // toolStripMenuItem15
        // 
        self.toolStripMenuItem15.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem15.Name := 'toolStripMenuItem15';
        self.toolStripMenuItem15.Size := new System.Drawing.Size(148, 22);
        self.toolStripMenuItem15.Text := 'Выделить всё';
        self.toolStripMenuItem15.Click += toolStripMenuItem15_Click;
        // 
        // toolStripMenuItem3
        // 
        self.toolStripMenuItem3.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem12));
        self.toolStripMenuItem3.Name := 'toolStripMenuItem3';
        self.toolStripMenuItem3.Size := new System.Drawing.Size(52, 20);
        self.toolStripMenuItem3.Text := 'Стиль';
        // 
        // toolStripMenuItem12
        // 
        self.toolStripMenuItem12.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem12.Name := 'toolStripMenuItem12';
        self.toolStripMenuItem12.Size := new System.Drawing.Size(113, 22);
        self.toolStripMenuItem12.Text := 'Шрифт';
        self.toolStripMenuItem12.Click += toolStripMenuItem12_Click;
        // 
        // toolStripMenuItem13
        // 
        self.toolStripMenuItem13.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem17, self.toolStripMenuItem20));
        self.toolStripMenuItem13.Name := 'toolStripMenuItem13';
        self.toolStripMenuItem13.Size := new System.Drawing.Size(39, 20);
        self.toolStripMenuItem13.Text := 'Вид';
        // 
        // toolStripMenuItem17
        // 
        self.toolStripMenuItem17.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem17.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem18, self.toolStripMenuItem19));
        self.toolStripMenuItem17.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem17.Image')));
        self.toolStripMenuItem17.Name := 'toolStripMenuItem17';
        self.toolStripMenuItem17.Size := new System.Drawing.Size(102, 22);
        self.toolStripMenuItem17.Text := 'Тема';
        // 
        // toolStripMenuItem18
        // 
        self.toolStripMenuItem18.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem18.Name := 'toolStripMenuItem18';
        self.toolStripMenuItem18.Size := new System.Drawing.Size(118, 22);
        self.toolStripMenuItem18.Text := 'Тёмная';
        self.toolStripMenuItem18.Click += toolStripMenuItem18_Click;
        // 
        // toolStripMenuItem19
        // 
        self.toolStripMenuItem19.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem19.Name := 'toolStripMenuItem19';
        self.toolStripMenuItem19.Size := new System.Drawing.Size(118, 22);
        self.toolStripMenuItem19.Text := 'Светлая';
        self.toolStripMenuItem19.Click += toolStripMenuItem19_Click;
        // 
        // toolStripMenuItem20
        // 
        self.toolStripMenuItem20.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem20.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.toolStripMenuItem21, self.toolStripMenuItem22, self.toolStripMenuItem23, self.toolStripMenuItem24));
        self.toolStripMenuItem20.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem20.Image')));
        self.toolStripMenuItem20.Name := 'toolStripMenuItem20';
        self.toolStripMenuItem20.Size := new System.Drawing.Size(102, 22);
        self.toolStripMenuItem20.Text := 'Язык';
        // 
        // toolStripMenuItem21
        // 
        self.toolStripMenuItem21.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem21.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem21.Image')));
        self.toolStripMenuItem21.Name := 'toolStripMenuItem21';
        self.toolStripMenuItem21.Size := new System.Drawing.Size(146, 22);
        self.toolStripMenuItem21.Text := 'Английский';
        self.toolStripMenuItem21.Click += toolStripMenuItem21_Click;
        // 
        // toolStripMenuItem22
        // 
        self.toolStripMenuItem22.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem22.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem22.Image')));
        self.toolStripMenuItem22.Name := 'toolStripMenuItem22';
        self.toolStripMenuItem22.Size := new System.Drawing.Size(146, 22);
        self.toolStripMenuItem22.Text := 'Белорусский';
        self.toolStripMenuItem22.Click += toolStripMenuItem22_Click;
        // 
        // toolStripMenuItem23
        // 
        self.toolStripMenuItem23.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem23.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem23.Image')));
        self.toolStripMenuItem23.Name := 'toolStripMenuItem23';
        self.toolStripMenuItem23.Size := new System.Drawing.Size(146, 22);
        self.toolStripMenuItem23.Text := 'Русский';
        self.toolStripMenuItem23.Click += toolStripMenuItem23_Click;
        // 
        // toolStripMenuItem24
        // 
        self.toolStripMenuItem24.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem24.Image := (System.Drawing.Image(resources.GetObject('toolStripMenuItem24.Image')));
        self.toolStripMenuItem24.Name := 'toolStripMenuItem24';
        self.toolStripMenuItem24.Size := new System.Drawing.Size(146, 22);
        self.toolStripMenuItem24.Text := 'Польский';
        self.toolStripMenuItem24.Click += toolStripMenuItem24_Click;
        // 
        // toolStripMenuItem2
        // 
        self.toolStripMenuItem2.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem4));
        self.toolStripMenuItem2.Name := 'toolStripMenuItem2';
        self.toolStripMenuItem2.Size := new System.Drawing.Size(68, 20);
        self.toolStripMenuItem2.Text := 'Помощь';
        // 
        // toolStripMenuItem4
        // 
        self.toolStripMenuItem4.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem4.Name := 'toolStripMenuItem4';
        self.toolStripMenuItem4.Size := new System.Drawing.Size(152, 22);
        self.toolStripMenuItem4.Text := 'О программе';
        self.toolStripMenuItem4.Click += toolStripMenuItem4_Click;
        // 
        // Openbutton
        // 
        self.Openbutton.FlatStyle := System.Windows.Forms.FlatStyle.Flat;
        self.Openbutton.Image := (System.Drawing.Image(resources.GetObject('Openbutton.Image')));
        self.Openbutton.Location := new System.Drawing.Point(6, 54);
        self.Openbutton.Name := 'Openbutton';
        self.Openbutton.Size := new System.Drawing.Size(23, 22);
        self.Openbutton.TabIndex := 1;
        self.Openbutton.UseVisualStyleBackColor := true;
        self.Openbutton.Click += Openbutton_Click;
        // 
        // Newbutton
        // 
        self.Newbutton.FlatStyle := System.Windows.Forms.FlatStyle.Flat;
        self.Newbutton.Image := (System.Drawing.Image(resources.GetObject('Newbutton.Image')));
        self.Newbutton.Location := new System.Drawing.Point(6, 31);
        self.Newbutton.Name := 'Newbutton';
        self.Newbutton.Size := new System.Drawing.Size(23, 22);
        self.Newbutton.TabIndex := 2;
        self.Newbutton.UseVisualStyleBackColor := true;
        self.Newbutton.Click += Newbutton_Click;
        // 
        // Savebutton
        // 
        self.Savebutton.FlatStyle := System.Windows.Forms.FlatStyle.Flat;
        self.Savebutton.Image := (System.Drawing.Image(resources.GetObject('Savebutton.Image')));
        self.Savebutton.Location := new System.Drawing.Point(6, 77);
        self.Savebutton.Name := 'Savebutton';
        self.Savebutton.Size := new System.Drawing.Size(23, 22);
        self.Savebutton.TabIndex := 3;
        self.Savebutton.UseVisualStyleBackColor := true;
        self.Savebutton.Click += Savebutton_Click;
        // 
        // Printbutton
        // 
        self.Printbutton.FlatStyle := System.Windows.Forms.FlatStyle.Flat;
        self.Printbutton.Image := (System.Drawing.Image(resources.GetObject('Printbutton.Image')));
        self.Printbutton.Location := new System.Drawing.Point(6, 105);
        self.Printbutton.Name := 'Printbutton';
        self.Printbutton.Size := new System.Drawing.Size(23, 22);
        self.Printbutton.TabIndex := 4;
        self.Printbutton.UseVisualStyleBackColor := true;
        self.Printbutton.Click += Printbutton_Click;
        // 
        // WordText
        // 
        self.WordText.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.WordText.ContextMenuStrip := self.contextMenuStrip1;
        self.WordText.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.WordText.Location := new System.Drawing.Point(51, 31);
        self.WordText.Name := 'WordText';
        self.WordText.ScrollBars := System.Windows.Forms.RichTextBoxScrollBars.None;
        self.WordText.Size := new System.Drawing.Size(934, 563);
        self.WordText.TabIndex := 5;
        self.WordText.Text := '';
        // 
        // contextMenuStrip1
        // 
        self.contextMenuStrip1.ImageScalingSize := new System.Drawing.Size(20, 20);
        self.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[3](self.toolStripMenuItem7, self.toolStripMenuItem8, self.toolStripMenuItem9));
        self.contextMenuStrip1.Name := 'contextMenuStrip1';
        self.contextMenuStrip1.Size := new System.Drawing.Size(140, 70);
        // 
        // toolStripMenuItem7
        // 
        self.toolStripMenuItem7.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem7.Name := 'toolStripMenuItem7';
        self.toolStripMenuItem7.Size := new System.Drawing.Size(139, 22);
        self.toolStripMenuItem7.Text := 'Копировать';
        self.toolStripMenuItem7.Click += toolStripMenuItem7_Click;
        // 
        // toolStripMenuItem8
        // 
        self.toolStripMenuItem8.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem8.Name := 'toolStripMenuItem8';
        self.toolStripMenuItem8.Size := new System.Drawing.Size(139, 22);
        self.toolStripMenuItem8.Text := 'Вырезать';
        self.toolStripMenuItem8.Click += toolStripMenuItem8_Click;
        // 
        // toolStripMenuItem9
        // 
        self.toolStripMenuItem9.BackColor := System.Drawing.Color.White;
        self.toolStripMenuItem9.Name := 'toolStripMenuItem9';
        self.toolStripMenuItem9.Size := new System.Drawing.Size(139, 22);
        self.toolStripMenuItem9.Text := 'Вставить';
        self.toolStripMenuItem9.Click += toolStripMenuItem9_Click;
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.DefaultExt := 'kdoc';
        self.openFileDialog1.FileName := 'Документ Konyshev  Wirter ';
        self.openFileDialog1.Filter := 'Документ (*.kdoc)|*.kdoc';
        // 
        // saveFileDialog1
        // 
        self.saveFileDialog1.DefaultExt := 'kdoc';
        self.saveFileDialog1.FileName := 'Документ Konyshev  Wirter ';
        self.saveFileDialog1.Filter := 'Документ (*.kdoc)|*.kdoc';
        // 
        // button1
        // 
        self.button1.FlatStyle := System.Windows.Forms.FlatStyle.Flat;
        self.button1.Image := (System.Drawing.Image(resources.GetObject('button1.Image')));
        self.button1.Location := new System.Drawing.Point(6, 207);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(23, 22);
        self.button1.TabIndex := 7;
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.FlatStyle := System.Windows.Forms.FlatStyle.Flat;
        self.button2.Image := (System.Drawing.Image(resources.GetObject('button2.Image')));
        self.button2.Location := new System.Drawing.Point(6, 156);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(23, 22);
        self.button2.TabIndex := 8;
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.FlatStyle := System.Windows.Forms.FlatStyle.Flat;
        self.button3.Image := (System.Drawing.Image(resources.GetObject('button3.Image')));
        self.button3.Location := new System.Drawing.Point(6, 133);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(23, 22);
        self.button3.TabIndex := 9;
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button4
        // 
        self.button4.FlatStyle := System.Windows.Forms.FlatStyle.Flat;
        self.button4.Image := (System.Drawing.Image(resources.GetObject('button4.Image')));
        self.button4.Location := new System.Drawing.Point(6, 179);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(23, 22);
        self.button4.TabIndex := 10;
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // printPreviewDialog1
        // 
        self.printPreviewDialog1.AutoScrollMargin := new System.Drawing.Size(0, 0);
        self.printPreviewDialog1.AutoScrollMinSize := new System.Drawing.Size(0, 0);
        self.printPreviewDialog1.ClientSize := new System.Drawing.Size(400, 300);
        self.printPreviewDialog1.Enabled := true;
        self.printPreviewDialog1.Icon := (System.Drawing.Icon(resources.GetObject('printPreviewDialog1.Icon')));
        self.printPreviewDialog1.Name := 'printPreviewDialog1';
        self.printPreviewDialog1.ShowIcon := false;
        self.printPreviewDialog1.Visible := false;
        // 
        // OtmenaButton
        // 
        self.OtmenaButton.FlatStyle := System.Windows.Forms.FlatStyle.Flat;
        self.OtmenaButton.Image := (System.Drawing.Image(resources.GetObject('OtmenaButton.Image')));
        self.OtmenaButton.Location := new System.Drawing.Point(6, 235);
        self.OtmenaButton.Name := 'OtmenaButton';
        self.OtmenaButton.Size := new System.Drawing.Size(23, 22);
        self.OtmenaButton.TabIndex := 12;
        self.OtmenaButton.UseVisualStyleBackColor := true;
        self.OtmenaButton.Click += OtmenaButton_Click;
        // 
        // Back1
        // 
        self.Back1.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.Back1.BackColor := System.Drawing.SystemColors.WindowFrame;
        self.Back1.Location := new System.Drawing.Point(-12, 21);
        self.Back1.Name := 'Back1';
        self.Back1.Size := new System.Drawing.Size(1046, 644);
        self.Back1.TabIndex := 13;
        self.Back1.TabStop := false;
        self.Back1.Visible := false;
        // 
        // toolStripMenuItem16
        // 
        self.toolStripMenuItem16.BackColor := System.Drawing.Color.Black;
        self.toolStripMenuItem16.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem27));
        self.toolStripMenuItem16.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem16.Name := 'toolStripMenuItem16';
        self.toolStripMenuItem16.Size := new System.Drawing.Size(68, 20);
        self.toolStripMenuItem16.Text := 'Помощь';
        self.toolStripMenuItem16.Visible := false;
        // 
        // toolStripMenuItem27
        // 
        self.toolStripMenuItem27.BackColor := System.Drawing.Color.Black;
        self.toolStripMenuItem27.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem27.Name := 'toolStripMenuItem27';
        self.toolStripMenuItem27.Size := new System.Drawing.Size(152, 22);
        self.toolStripMenuItem27.Text := 'О программе';
        self.toolStripMenuItem27.Click += toolStripMenuItem27_Click;
        // 
        // KonyshevWord
        // 
        self.BackColor := System.Drawing.SystemColors.ControlLight;
        self.ClientSize := new System.Drawing.Size(997, 606);
        self.Controls.Add(self.OtmenaButton);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.WordText);
        self.Controls.Add(self.Printbutton);
        self.Controls.Add(self.Savebutton);
        self.Controls.Add(self.Newbutton);
        self.Controls.Add(self.Openbutton);
        self.Controls.Add(self.menuStrip1);
        self.Controls.Add(self.Back1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.Name := 'KonyshevWord';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Konyshev Writer BETA';
        self.WindowState := System.Windows.Forms.FormWindowState.Maximized;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.contextMenuStrip1.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.Back1)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
