// Copyright 2017 Dolphin Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#pragma once

#include "Core/HW/EXI/EXI_Device.h"
#include "Core/MemoryWatcher.h"

namespace ExpansionInterface
{

// FrameAdvance device emulation for Melee
class CEXIFrameAdvance final : public IEXIDevice
{
public:
  CEXIFrameAdvance();
  ~CEXIFrameAdvance();

  void DMAWrite(u32 address, u32 size) override;
  void DMARead(u32 address, u32 size) override;

  bool IsPresent() const override;
private:
  MemoryWatcher memory_watcher;
};

}
