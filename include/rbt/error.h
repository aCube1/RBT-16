#pragma once

typedef enum RBT_Error {
	RBT_OK = 0,
	RBT_ERR_INVALID_SIZE,
	RBT_ERR_UNKNOWN_ADDRESS_MODE,
	RBT_ERR_INVALID_EXTENSION_WORD,
} RBT_Error;

extern _Thread_local RBT_Error rbt_errno;
