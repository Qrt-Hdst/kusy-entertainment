//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit6.h"
int e=0;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::NextClick(TObject *Sender)
{
        if(e==0)
        {
         Image1->Picture->LoadFromFile("poziom2/2.bmp");
         e++;
        }
        else if(e==1)
        {
         Image1->Picture->LoadFromFile("poziom2/3.bmp");
         e++;
        }
        else if(e==2)
        {
         Image1->Picture->LoadFromFile("poziom2/4.bmp");
         e++;
        }
        else if(e==3)
        {
         Image1->Picture->LoadFromFile("poziom2/5.bmp");
         e++;
        }
        else if(e==4)
        {
         Image1->Picture->LoadFromFile("poziom2/6.bmp");
         e++;
        }
        else if(e==5)
        {
         Image1->Picture->LoadFromFile("poziom2/12.bmp");
         e++;
        }
        else if(e==6)
        {
         Image1->Picture->LoadFromFile("poziom2/13.bmp");
         e++;
        }
        else if(e==7)
        {
         Image1->Picture->LoadFromFile("poziom2/14.bmp");
         e++;
        }
        else if(e==8)
        {
         Image1->Picture->LoadFromFile("poziom2/16.bmp");
         e++;
        }
        else if(e==9)
        {
         Image1->Picture->LoadFromFile("poziom2/17.bmp");
         e++;
        }
        else if(e==10)
        {
         Image1->Picture->LoadFromFile("poziom2/18.bmp");
         e++;
        }
       else if(e==11)
        {
         Image1->Picture->LoadFromFile("poziom2/15.bmp");
         e++;
        }
        else if(e==12)
        {
         Image1->Picture->LoadFromFile("poziom2/19.bmp");
         e++;
        }
        else if(e==13)
        {
         Image1->Picture->LoadFromFile("poziom2/8.bmp");
         Next->Caption="Przejdz na poziom3";
         e++;
        }
        else if(e==14)
        {
          Form5->Visible=false;
          Form6->Visible=true;
        }


}
//---------------------------------------------------------------------------
