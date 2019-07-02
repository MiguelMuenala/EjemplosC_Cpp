/*
 * Created by SharpDevelop.
 * User: USRGAM
 * Date: 26/06/2019
 * Time: 10:24
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
namespace PrjCrearSolucion
{
	partial class MainForm
	{
		/// <summary>
		/// Designer variable used to keep track of non-visual components.
		/// </summary>
		private System.ComponentModel.IContainer components = null;
		private System.Windows.Forms.DataGridView dgvLogs;
		private System.Windows.Forms.DataGridViewTextBoxColumn tipo;
		private System.Windows.Forms.DataGridViewTextBoxColumn Log;
		private System.Windows.Forms.Button btnAnadirLog;
		private System.Windows.Forms.Button btnLeerDirectorio;
		private System.Windows.Forms.TextBox txbLeerDirectorio;
		private System.Windows.Forms.Button btnListarDitectorio;
		private System.Windows.Forms.TextBox txbListarDitectorio;
		private System.Windows.Forms.Button btnListarDitectorio;
		private System.Windows.Forms.TextBox txbListarDitectorio;
		
		/// <summary>
		/// Disposes resources used by the form.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing) {
				if (components != null) {
					components.Dispose();
				}
			}
			base.Dispose(disposing);
		}
		
		/// <summary>
		/// This method is required for Windows Forms designer support.
		/// Do not change the method contents inside the source code editor. The Forms designer might
		/// not be able to load this method if it was changed manually.
		{
			this.dgvLogs = new System.Windows.Forms.DataGridView();
			this.tipo = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.Log = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.btnAnadirLog = new System.Windows.Forms.Button();
			this.btnLeerDirectorio = new System.Windows.Forms.Button();
			this.txbLeerDirectorio = new System.Windows.Forms.TextBox();
			this.btnListarDitectorio = new System.Windows.Forms.Button();
			this.txbListarDitectorio = new System.Windows.Forms.TextBox();
			((System.ComponentModel.ISupportInitialize)(this.dgvLogs)).BeginInit();
			this.SuspendLayout();
			// 
			// dgvLogs
			// 
			this.dgvLogs.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
			| System.Windows.Forms.AnchorStyles.Right)));
			this.dgvLogs.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
			this.dgvLogs.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
			this.tipo,
			this.Log});
			this.dgvLogs.Location = new System.Drawing.Point(54, 123);
			this.dgvLogs.Name = "dgvLogs";
			this.dgvLogs.Size = new System.Drawing.Size(345, 126);
			this.dgvLogs.TabIndex = 0;
			this.dgvLogs.CellDoubleClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.DgvLogsCellDoubleClick);
			// 
			// tipo
			// 
			this.tipo.HeaderText = "Tipo Log";
			this.tipo.Name = "tipo";
			this.tipo.ReadOnly = true;
			// 
			// Log
			// 
			this.Log.HeaderText = "Descripcion";
			this.Log.Name = "Log";
			this.Log.ReadOnly = true;
			// 
			// btnAnadirLog
			// 
			this.btnAnadirLog.Location = new System.Drawing.Point(54, 255);
			this.btnAnadirLog.Name = "btnAnadirLog";
			this.btnAnadirLog.Size = new System.Drawing.Size(75, 23);
			this.btnAnadirLog.TabIndex = 2;
			this.btnAnadirLog.Text = "Anadir Log";
			this.btnAnadirLog.UseVisualStyleBackColor = true;
			this.btnAnadirLog.Click += new System.EventHandler(this.BtnAnadirLogClick);
			// 
			// btnLeerDirectorio
			// 
			this.btnLeerDirectorio.Location = new System.Drawing.Point(54, 80);
			this.btnLeerDirectorio.Name = "btnLeerDirectorio";
			this.btnLeerDirectorio.Size = new System.Drawing.Size(108, 23);
			this.btnLeerDirectorio.TabIndex = 3;
			this.btnLeerDirectorio.Text = "Leer Directorio";
			this.btnLeerDirectorio.UseVisualStyleBackColor = true;
			this.btnLeerDirectorio.Click += new System.EventHandler(this.BtnLeerDirectorioClick);
			// 
			// txbLeerDirectorio
			// 
			this.txbLeerDirectorio.Location = new System.Drawing.Point(54, 37);
			this.txbLeerDirectorio.Name = "txbLeerDirectorio";
			this.txbLeerDirectorio.Size = new System.Drawing.Size(130, 20);
			this.txbLeerDirectorio.TabIndex = 4;
			// 
			// btnListarDitectorio
			// 
			this.btnListarDitectorio.Location = new System.Drawing.Point(254, 80);
			this.btnListarDitectorio.Name = "btnListarDitectorio";
			this.btnListarDitectorio.Size = new System.Drawing.Size(100, 23);
			this.btnListarDitectorio.TabIndex = 5;
			this.btnListarDitectorio.Text = "Listar Directorio";
			this.btnListarDitectorio.UseVisualStyleBackColor = true;
			this.btnListarDitectorio.Click += new System.EventHandler(this.BtnListarDitectorioClick);
			// 
			// txbListarDitectorio
			// 
			this.txbListarDitectorio.Location = new System.Drawing.Point(254, 37);
			this.txbListarDitectorio.Name = "txbListarDitectorio";
			this.txbListarDitectorio.Size = new System.Drawing.Size(100, 20);
			this.txbListarDitectorio.TabIndex = 6;
			// 
			// MainForm
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(549, 354);
			this.Controls.Add(this.txbListarDitectorio);
			this.Controls.Add(this.btnListarDitectorio);
			this.Controls.Add(this.txbLeerDirectorio);
			this.Controls.Add(this.btnLeerDirectorio);
			this.Controls.Add(this.btnAnadirLog);
			this.Controls.Add(this.dgvLogs);
			this.Name = "MainForm";
			this.Text = "PrjCrearSolucion";
			this.Click += new System.EventHandler(this.BtnAnadirLogClick);
			((System.ComponentModel.ISupportInitialize)(this.dgvLogs)).EndInit();
			this.ResumeLayout(false);
			this.PerformLayout();

		}this.txbListarDitectorio.Location = new System.Drawing.Point(254, 37);
			this.txbListarDitectorio.Name = "txbListarDitectorio";
			this.txbListarDitectorio.Size = new System.Drawing.Size(100, 20);
			this.txbListarDitectorio.TabIndex = 6;
			// 
			// MainForm
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(549, 354);
			this.Controls.Add(this.txbListarDitectorio);
			this.Controls.Add(this.btnListarDitectorio);
			this.Controls.Add(this.txbLeerDirectorio);
			this.Controls.Add(this.btnLeerDirectorio);
			this.Controls.Add(this.btnAnadirLog);
			this.Controls.Add(this.dgvLogs);
			this.Name = "MainForm";
			this.Text = "PrjCrearSolucion";
			this.Click += new System.EventHandler(this.BtnAnadirLogClick);
			((System.ComponentModel.ISupportInitialize)(this.dgvLogs)).EndInit();
			this.ResumeLayout(false);
			this.PerformLayout();

		}
	}
}
