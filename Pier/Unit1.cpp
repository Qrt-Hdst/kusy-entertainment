//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "Unit1.h"
#include "Unit2.h"
#include "Unit7.h"
#include "Unit8.h"
#include "mmsystem.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    Form1->Visible=false;
    //Form8->Visible=true;
    Form2->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
     sndPlaySound("folder wav/Sabaton - The Price Of A Mile 8bit.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------


