#pragma once

// Edge Impulse Inference Library for ESP32
// Clean interface header for ESPHome integration

#ifndef EDGE_IMPULSE_INFERENCE_H
#define EDGE_IMPULSE_INFERENCE_H

#include "edge-impulse-sdk/classifier/ei_run_classifier.h"
#include "edge-impulse-sdk/dsp/numpy.hpp"

// Make core functions available
extern "C" {
    EI_IMPULSE_ERROR run_classifier(signal_t *signal, ei_impulse_result_t *result, bool debug);
}

#endif // EDGE_IMPULSE_INFERENCE_H
