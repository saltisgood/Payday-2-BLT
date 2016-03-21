#include "threading/queue.h"
#include "util/util.h"
#include "util/Debug.h"

namespace pd2hook
{
EventQueueMaster& EventQueueMaster::GetSingleton()
{
	static EventQueueMaster instance;
	return instance;
}

void EventQueueMaster::ProcessEvents()
{
	//__try
	{
		std::for_each(queues.begin(), queues.end(), [](IEventQueue *q) { q->ProcessEvents(); });
	}
	/* __except (DumpStackTrace((_EXCEPTION_POINTERS *)_exception_info()))
	{
		exit(1);
	} */
}

void EventQueueMaster::registerQueue(IEventQueue *q)
{
	queues.push_back(q);
}
}
