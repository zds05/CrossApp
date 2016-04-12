
#include "Scale9ImageViewTest.h"

Scale9ImageViewTest::Scale9ImageViewTest()
{
    CADrawerController* drawer = (CADrawerController*)CAApplication::getApplication()->getRootWindow()->getRootViewController();
    drawer->setTouchMoved(false);
}

Scale9ImageViewTest::~Scale9ImageViewTest()
{
    CADrawerController* drawer = (CADrawerController*)CAApplication::getApplication()->getRootWindow()->getRootViewController();
    drawer->setTouchMoved(true);
}

void Scale9ImageViewTest::viewDidLoad()
{
    this->getView()->setColor(CAColor_gray);
    
    CAImageView* image = CAImageView::createWithLayout(DLayout(200,200,100,200,DLayout::L_R_T_H));
    image->setImage(CAImage::create("source_material/btn_rounded_normal.png"));
    this->getView()->addSubview(image);
    
    CAScale9ImageView* s9image = CAScale9ImageView::createWithImage(CAImage::create("source_material/btn_rounded_normal.png"));
    s9image->setLayout(DLayout(200,200,400,200,DLayout::L_R_T_H));
    this->getView()->addSubview(s9image);
}

void Scale9ImageViewTest::viewDidUnload()
{
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

