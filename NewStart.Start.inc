procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Start));
        self.timer1 := new System.Windows.Forms.Timer(self.components);
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.SuspendLayout();
        // 
        // timer1
        // 
        self.timer1.Enabled := true;
        self.timer1.Interval := 1000;
        self.timer1.Tick += timer1_Tick;
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.None;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(0, 0);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(402, 242);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 0;
        self.pictureBox1.TabStop := false;
        // 
        // Start
        // 
        self.AutoSizeMode := System.Windows.Forms.AutoSizeMode.GrowAndShrink;
        self.ClientSize := new System.Drawing.Size(402, 242);
        self.Controls.Add(self.pictureBox1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.None;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Start';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.ResumeLayout(false);
    end;
