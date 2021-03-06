
#include <iostream>
#include <vector>
#include "TH1D.h"
#include "TH2D.h"
#include "TH3D.h"
#include "THnSparse.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TMath.h"
#include "TGraphErrors.h"
#include "TLatex.h"
#include "TPeak.h"

using namespace std;

class angCorr{

public:
	angCorr();
	TH3D* GetData();
	vector<TH1D*> AngCut(TH3D*,Double_t, Double_t);	
	vector<Double_t> FitHisto(vector<TH1D*>, Double_t,Double_t, Double_t);
	vector<Double_t> WeightAdjust(vector<Double_t>);
//	vector<Double_t> ErrorAdjust(vector<Double_t>,Int_t);
	vector<Double_t> Error(vector<Double_t>);
	void AngularCorrHisto(vector<Double_t>, TString,vector<Double_t>,Int_t gndstate);
//	void CountFold(vector<Double_t>,vector<Double_t>,Int_t gndstate);


private:
};
