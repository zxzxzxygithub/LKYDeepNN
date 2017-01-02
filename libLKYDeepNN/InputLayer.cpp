//#include "Layer.hpp"
#include "InputLayer.hpp"
//#include "HiddenLayer.hpp"
//#include "OutputLayer.hpp"
using namespace std;

InputLayer::InputLayer(){};

void InputLayer::Input(const vector<double> inputArray)
{
    if(this->nodes.size() <= inputArray.size())
    {
        this->nodes = inputArray;
    }
    else
    {//長度檢查未通過
        cout << "ERROR: this->nodes.size() > inputArray.size()" << endl;
        exit(EXIT_FAILURE);
    }
}

void InputLayer::SetNextLayer(HiddenLayer* nextLayer)
{
    this->nextLayer.reset(nextLayer);
}