//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package oversim.overlay.htopology;

//
// Author: Anil Kag
//

import oversim.common.BaseOverlay;
import oversim.common.IOverlay;

simple HTopology extends BaseOverlay
{
    parameters:
        @class(HTopology);
        int bufferSizeInBytes;		// Buffer Map size used in the HTopology
        int maxChildren;			// Maximum number of children allowed at a node
        int joinRetry;
        double joinDelay @unit(s); // delay between join retries (sec)
        double packetGenRate @unit(s); // time gap between generation of two packets
        
        // TODO add parameters required for configuration purpose
        // May be we can try to configure things like
        // 1) What's the strategy to deliver the message from parent to 
        // 		all of its children?
        // 2) What about the siblings? 
}

module HTopologyModules like IOverlay
{
    parameters:
        @display("i=block/network2");
        
    gates:
        input udpIn;   // gate from the UDP layer
        output udpOut;    // gate to the UDP layer
        input tcpIn;    // gate from the TCP layer
        output tcpOut;    // gate to the TCP layer
        input appIn;   // gate from the application
        output appOut;    // gate to the application

    submodules:        
        htopology: HTopology {
            parameters:
                @display("p=60,60");
        }

    connections allowunconnected:
        udpIn --> htopology.udpIn;
        udpOut <-- htopology.udpOut;
        appIn --> htopology.appIn;
        appOut <-- htopology.appOut;
}
