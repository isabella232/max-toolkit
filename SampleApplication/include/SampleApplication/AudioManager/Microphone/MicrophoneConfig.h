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

#ifndef SAMPLEAPPLICATION_INCLUDE_SAMPLEAPPLICATION_AUDIOMANAGER_MICROPHONECONFIG_H_
#define SAMPLEAPPLICATION_INCLUDE_SAMPLEAPPLICATION_AUDIOMANAGER_MICROPHONECONFIG_H_

#include <rapidjson/document.h>

namespace multiAgentExperience {
namespace sampleApplication {
namespace audioManager {
namespace microphone {

/**
 * A struct that captures the microphone configuration.
 */
struct MicrophoneConfig {
    /**
     * Constructor.
     */
    MicrophoneConfig();

    /// Latency in seconds to be used by the microphone.
    double suggestedLatencySeconds;
};

/**
 * A utility function to parse a given rapidjson document and produce an @c MicrophoneConfig object.
 *
 * @param document The rapidjson document.
 * @param config [out] The @c MicrophoneConfig object to be set.
 * @return Whether the parse was successful.
 */
bool parseJSONConfig(const rapidjson::Document& document, MicrophoneConfig* config);

}  // namespace microphone
}  // namespace audioManager
}  // namespace sampleApplication
}  // namespace multiAgentExperience

#endif  // SAMPLEAPPLICATION_INCLUDE_SAMPLEAPPLICATION_AUDIOMANAGER_MICROPHONECONFIG_H_
