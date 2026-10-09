#pragma once

namespace Hooks {
	void Install();

	// Tells the player (once the UI exists) if any hook was skipped because this game
	// version's code did not match what the hook expects.
	void ReportSkippedHooks();
}
