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

#include "Dialog/DialogManagerFactory.h"

#include "Activity/ActivityManager.h"
#include "Control/CurrentControls.h"
#include "Control/ControlInvokerFactory.h"
#include "Control/ControlRegistryFactory.h"
#include "Dialog/DialogArbitrator.h"
#include "Dialog/DialogLifecycleFactory.h"
#include "Dialog/DialogManager.h"

namespace multiAgentExperience {
namespace library {
namespace dialog {

std::shared_ptr<DialogManager> DialogManagerFactory::create(
    std::shared_ptr<activity::ActivityManager> activityManager,
    std::shared_ptr<control::CurrentControls> currentControls,
    std::shared_ptr<control::ControlInvokerFactory> controlInvokerFactory,
    std::shared_ptr<control::ControlRegistryFactory> controlRegistryFactory) {
    auto dialogLifecycleFactory =
        std::make_shared<DialogLifecycleFactory>(currentControls, controlRegistryFactory, controlInvokerFactory);
    auto dialogArbitrator = std::make_shared<DialogArbitrator>(dialogLifecycleFactory);
    return std::make_shared<DialogManager>(dialogArbitrator, activityManager);
}

}  // namespace dialog
}  // namespace library
}  // namespace multiAgentExperience
