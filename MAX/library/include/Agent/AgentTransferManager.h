/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#ifndef MULTI_AGENT_EXPERIENCE_LIBRARY_INCLUDE_AGENT_AGENTTRANSFERMANAGER_H_
#define MULTI_AGENT_EXPERIENCE_LIBRARY_INCLUDE_AGENT_AGENTTRANSFERMANAGER_H_

#include <memory>

#include "MultiAgentExperience/Agent/Agent.h"

namespace multiAgentExperience {
namespace library {
namespace agent {

class AgentTransferManager {
public:
    /**
     * Transfers interaction control to the other agent by invoking a new dialog with the agent.
     * @param agent The agent to invoke.
     */
    void invokeAgent(std::shared_ptr<multiAgentExperience::agent::Agent> agent);
};

}  // namespace agent
}  // namespace library
}  // namespace multiAgentExperience

#endif  // MULTI_AGENT_EXPERIENCE_LIBRARY_INCLUDE_AGENT_AGENTTRANSFERMANAGER_H_
