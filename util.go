package gogre3d

import "C"

func gobool(b C.int) bool {
	if b == C.int(0) {
		return false
	}

	return true
}

func cbool(b bool) C.int {
	if b {
		return C.int(1)
	}

	return C.int(0)
}
