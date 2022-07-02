procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        self.label4 := new System.Windows.Forms.Label();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        self.SuspendLayout();
        // 
        // pictureBox1
        // 
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(12, 12);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(100, 258);
        self.pictureBox1.TabIndex := 0;
        self.pictureBox1.TabStop := false;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 10.8, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(118, 12);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(337, 23);
        self.label1.TabIndex := 1;
        self.label1.Text := 'Konyshev Writer BETA для Windows';
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 10.8, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(118, 35);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(152, 23);
        self.label2.TabIndex := 2;
        self.label2.Text := 'Версия 2.0';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(12, 281);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(308, 39);
        self.label3.TabIndex := 3;
        self.label3.Text := 'Лицензия GNU (GPL) v3.0                                                         Программу написал Конышев Юрий';
        // 
        // pictureBox2
        // 
        self.pictureBox2.Image := (System.Drawing.Image(resources.GetObject('pictureBox2.Image')));
        self.pictureBox2.Location := new System.Drawing.Point(405, 256);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(50, 50);
        self.pictureBox2.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox2.TabIndex := 4;
        self.pictureBox2.TabStop := false;
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(118, 70);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(337, 94);
        self.label4.TabIndex := 5;
        self.label4.Text := 'Текстовый процессор с открытым исходным кодом, предназначенный для создания, просмотра, редактирования и форматирования текстов статей, деловых бумаг, а также других документов.';
        // 
        // Form1
        // 
        self.AutoSizeMode := System.Windows.Forms.AutoSizeMode.GrowAndShrink;
        self.BackColor := System.Drawing.SystemColors.ControlLight;
        self.ClientSize := new System.Drawing.Size(467, 315);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.pictureBox2);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.pictureBox1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'Form1';
        self.ShowIcon := false;
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'О программе';
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        self.ResumeLayout(false);
    end;
