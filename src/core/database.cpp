
namespace DB {

void
TaskStep::report()
{

}

void
Task::addStep()
{

}

void
Task::deleteStep()
{

}

void
task::finishedStep()
{

}

void
Task::modifyStep()
{

}

Task::Task(std::string context, TaskManager* owner)
{

}
                                
Task::~Task()
{

}

TaskManager*
TaskManager::getTaskManager()
{
    static TaskManager mgr;
    return &mgr;
}

void
TaskManager::addTask(int pos)
{

}
    
void
TaskManager::deleteTask(Task*)
{

}

void
TaskManager::finishTask(Task*)
{

}

void
TaskManager::modifyTask(Task*)
{

}

void
TaskManager::setCurrent(Task*)
{

}

void
TaskManager::setMaxTaskCnt(unsigned cnt)
{

}

TaskManager::TaskManager()
{

}

void
TaskManager::report(std::ostream log)
{

}


} //end of namespace DB
