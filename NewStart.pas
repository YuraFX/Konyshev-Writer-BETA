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
Unit NewStart;

interface

uses System, System.Drawing, System.Windows.Forms, Unit1;

type
  Start = class(Form)
    procedure timer1_Tick(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource NewStart.Start.resources}
    timer1: Timer;
    pictureBox1: PictureBox;
    components: System.ComponentModel.IContainer;
    {$include NewStart.Start.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Start.timer1_Tick(sender: Object; e: EventArgs);
begin
  close;       // Когда timer1 дотикает до конца - откроется главное окно.
  timer1.Stop; //
end;



end.
