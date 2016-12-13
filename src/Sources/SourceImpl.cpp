#include <SourceImpl.h>

#include <ofImage.h>

#include <Helper.h>

namespace ofx {
namespace piMapper {
namespace source {

using namespace std;

// ----------------------------------------------------------------------------

ImageSource::ImageSource(const string& filename) :
    image_(new ofImage())
{
}

void ImageSource::draw(const ofMesh& mesh) const
{
    ofLogNotice("ImageSource") << "draw()";
}

const size_t ImageSource::width()
{
    return size_t{0};
}

const size_t ImageSource::height()
{
    return size_t{0};
}

// ----------------------------------------------------------------------------

FboSource::FboSource()
{
}

void FboSource::draw(const ofMesh& mesh) const
{
    ofLogNotice("FboSource") << "draw()";
}

void FboSource::update()
{
    ofLogNotice("FboSource") << "update()";
}

const size_t FboSource::width()
{
    return size_t{0};
}

const size_t FboSource::height()
{
    return size_t{0};
}

}}}