//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//

/**
 *
 *  @author Alisson Oliveira
 *
 *  Updated on: Jan 03, 2015
 */

#ifndef PedestrianBusApp_H
#define PedestrianBusApp_H

#include <Pedestrian11p.h>
#include <BaseWaveApplLayer.h>
#include <PedestrianMobility.h>
#include <Connection.hpp>

using Veins::PedestrianMobility;
using Veins::AnnotationManager;

class PedestrianBusApp : public Pedestrian11p {
	public:
		virtual void initialize(int stage);
	protected:
		bool sentMessage;
		virtual void onBeacon(WaveShortMessage* wsm);
		virtual void onData(WaveShortMessage* wsm);
		virtual void handleLowerMsg(cMessage* msg);
};

#endif
