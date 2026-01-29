
#ifndef APPLICATIONCONTROLLER_H_
#define APPLICATIONCONTROLLER_H_

#include "Studente.h"
#include "Valutazione.h"
#include "MVC.h"
#include "ApplicationView.h"
#include "ApplicationModel.h"

class ApplicationController : public MVC::Controller {
public:
	ApplicationController(ApplicationView *v);
	void logic(void);
private:
    //bool isUptoDate;
	//ApplicationModel * myModel;
};

#endif
