/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 6fd7c6597ad8e67b399cf4e7c41bb6cc5e6666d6 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getCommandName, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getDatabaseName arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getCommandName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getDurationMicros, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getError, 0, 0, Exception, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getOperationId arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getCommandName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getReply, 0, 0, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getRequestId arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getCommandName

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getServer, 0, 0, MongoDB\\Driver\\Server, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getServiceId, 0, 0, MongoDB\\BSON\\ObjectId, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getServerConnectionId, 0, 0, IS_LONG, 1)
ZEND_END_ARG_INFO()


static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, __construct);
static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, getCommandName);
static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, getDatabaseName);
static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, getDurationMicros);
static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, getError);
static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, getOperationId);
static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, getReply);
static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, getRequestId);
static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, getServer);
static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, getServiceId);
static ZEND_METHOD(MongoDB_Driver_Monitoring_CommandFailedEvent, getServerConnectionId);


static const zend_function_entry class_MongoDB_Driver_Monitoring_CommandFailedEvent_methods[] = {
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, __construct, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent___construct, ZEND_ACC_PRIVATE|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, getCommandName, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getCommandName, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, getDatabaseName, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getDatabaseName, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, getDurationMicros, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getDurationMicros, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, getError, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getError, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, getOperationId, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getOperationId, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, getReply, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getReply, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, getRequestId, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getRequestId, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, getServer, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getServer, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, getServiceId, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getServiceId, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_Driver_Monitoring_CommandFailedEvent, getServerConnectionId, arginfo_class_MongoDB_Driver_Monitoring_CommandFailedEvent_getServerConnectionId, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_FE_END
};

static zend_class_entry *register_class_MongoDB_Driver_Monitoring_CommandFailedEvent(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "MongoDB\\Driver\\Monitoring", "CommandFailedEvent", class_MongoDB_Driver_Monitoring_CommandFailedEvent_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL;

	return class_entry;
}
