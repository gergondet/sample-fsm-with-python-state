#include "SampleFSM_Initial.h"

#include "../SampleFSM.h"

void SampleFSM_Initial::configure(const mc_rtc::Configuration & config)
{
}

void SampleFSM_Initial::start(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<SampleFSM &>(ctl_);
}

bool SampleFSM_Initial::run(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<SampleFSM &>(ctl_);
  output("OK");
  return true;
}

void SampleFSM_Initial::teardown(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<SampleFSM &>(ctl_);
}

EXPORT_SINGLE_STATE("SampleFSM_Initial", SampleFSM_Initial)
