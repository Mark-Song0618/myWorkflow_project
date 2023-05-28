/*
 * A task has several steps to finish;
 *
 * The taskMgr records and manage all tasks : crud and priority;
 * It also log the progress of tasks;
 */

#pragma once

#include <string>
#include <vector>
#include <list>

namespace DB {

class TaskStep;
class Task;
class TaskManager;

class TaskStep {

public:
    void                        report();   //report status change to owner

private:
    std::string                 m_str;

    Task*                       m_owner = nullptr;
};

class Task {

public:
    void                        addStep();

    void                        deleteStep();   // abandon a Step

    void                        finishedStep();

    void                        modifyStep();

                                Task(std::string context, TaskManager* owner);
                                
                                ~Task();
private:
    void                        report();   // report status change to owner

private:
    std::vector<TaskStep*>      m_steps;    

    TaskManager*                m_owner = nullptr;
};

class TaskManager{

public:
    static TaskManager*         getTaskManager();   // singleton

                                ~TaskManager();

    void                        addTask(int pos);   // add a new Task at pos position
    
    void                        deleteTask(Task*);  // abandon task

    void                        finishTask(Task*);  // finished a task

    void                        modifyTask(Task*); // modify the content of a task

    void                        setCurrent(Task*);  // move task to front

    Task*                       getCurrTask() { return m_tasks.front(); }

    void                        setMaxTaskCnt(unsigned cnt);

private:
                                TaskManager();

    void                        report(std::ostream log);   // log

private:
    std::list<Task*>            m_tasks;

    unsigned                    m_maxTaskCnt = 10;
};

} //end of namespace DB
