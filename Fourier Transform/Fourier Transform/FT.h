#pragma once
#include <iostream>
#include <complex>
class FT
{
private:
	
public:
	FT();
	void DiscreteFourierTransform(int** InputImage, int** OutputImage, double ** FreqReal, double ** FreqImag, int h, int w);
	void DFT(double** pFreqReal, double** pFreqImag, int** InputImage, int h, int w, int u, int v);

	void InverseDiscreteFourierTransform(int** InputImage, int** OutputImage, double ** FreqReal, double ** FreqImag, int h, int w);
	void InverseDFT(double ** InverseReal, double ** InverseImag, double ** pFreqReal, double ** pFreqImag, int h, int w, int x, int y);

	void FastFourierTransform(int** InputImage, int** OutputImage, double ** FreqReal, double ** FreqImag, int h, int w);
	void FFT(double** pFreqReal, double** pFreqImag, int** InputImage,double * xreal,double * ximg, int h, int w, int u, int v);

	void InverseFastFourierTransform(int** InputImage, int** OutputImage, double ** FreqReal, double ** FreqImag, int h, int w);
	void InverseFFT(double ** InverseReal, double ** InverseImag, double ** pFreqReal, double ** pFreqImag,double * xreal, double * ximag, int h, int w, int x, int y);

	void LowpassFilter(int **InputImage, int ** OutputImage, double** Real, double** Imag, int h, int w);
	void HighpassFilter(int **InputImage, int ** OutputImage, double** Real, double** Imag, int h, int w);

private:

};



