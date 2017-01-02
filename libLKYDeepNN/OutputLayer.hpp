#ifndef _OutputLayer_hpp_
#define _OutputLayer_hpp_

#include "Layer.hpp"
#include "HiddenLayer.hpp"
#include <memory>

class HiddenLayer;

class OutputLayer: public BackPropagationLayer
{
    //前層
    protected: shared_ptr<HiddenLayer> previousLayer;

    public: ~OutputLayer()
    {
        // if(NULL != activation)
        // {
        //     delete activation;
        //     activation = NULL;
        // }
        cout << "~OutputLayer()" << endl;
    }

    public: void InitializeWeights();

    public: void ForwardPropagation();

    public: void BackPropagation(double , vector<double>);

    public: vector<double> GetOutput();

    public: string ToString(){ return "class OutputLayer";}

    public: void SetPrevLayer(HiddenLayer*);
};

#endif