# iDeck investigation closed — 2026-11-09 HST

The user ended the iDeck Steam64 investigation after the attempts failed to
meet its end-to-end acceptance criteria. This fork preserves experimental
changes; it is not a verified Steam64 solution or an upstream submission.

The final working changes affect `ThreadManager.cpp` and `CallRetStack.h`
(thread/stack reservation behavior and placement geometry). They are preserved
as investigation state, without a new full build or device success claim.
Nested rpmalloc remains pinned to the published kimdongup fork revision.

See iDeck's `docs/STEAM64_FINAL_WRAP_UP_2026-11-09.md` for scope, evidence,
validation boundaries and the complete parent/submodule revision set.
