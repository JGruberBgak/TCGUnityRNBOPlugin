#pragma once

#ifdef RNBO_DESCRIPTION_AS_STRING

namespace RNBO {
	const std::string patcher_description(
			R"RNBOLIT({
  "parameters": [
    {
      "type": "ParameterTypeNumber",
      "index": 0,
      "name": "OffOn",
      "paramId": "OffOn",
      "minimum": 0,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
  )RNBOLIT"
R"RNBOLIT(    "index": 1,
      "name": "sSize",
      "paramId": "ChInst/sSize",
      "minimum": 1,
      "maximum": 8196,
      "exponent": 1,
      "steps": 0,
      "initialValue": 256,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 2,
      "name": "tablePos",
      "para)RNBOLIT"
R"RNBOLIT(mId": "ChInst/tablePos",
      "minimum": 0,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
      "initialValue": 1,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 3,
      "name": "decay",
      "paramId": "Verb/decay",
      "minimum": 0,
      "maximum")RNBOLIT"
R"RNBOLIT(: 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Decay",
      "unit": "%",
      "order": 4,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 4,
      "name": "DecayLFO",
      "paramId": "Verb/DecayLFO",
      "minimum": 0,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
 )RNBOLIT"
R"RNBOLIT(     "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 5,
      "name": "mix",
      "paramId": "Verb/mix",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumVal)RNBOLIT"
R"RNBOLIT(ues": [],
      "displayName": "Mix",
      "unit": "%",
      "order": 6,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 6,
      "name": "jitter",
      "paramId": "Verb/jitter",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Jitter",
      "uni)RNBOLIT"
R"RNBOLIT(t": "%",
      "order": 5,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 7,
      "name": "damp",
      "paramId": "Verb/damp",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Damp",
      "unit": "%",
      "order": 1,
      "debug": false,
     )RNBOLIT"
R"RNBOLIT( "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 8,
      "name": "size",
      "paramId": "Verb/size",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Size",
      "unit": "%",
      "order": 3,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "io)RNBOLIT"
R"RNBOLIT(Type": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 9,
      "name": "diff",
      "paramId": "Verb/diff",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Diff",
      "unit": "%",
      "order": 2,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "P)RNBOLIT"
R"RNBOLIT(arameterTypeNumber",
      "index": 10,
      "name": "SizeRandom",
      "paramId": "Verb/SizeRandom",
      "minimum": 0,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    }
  ],
  "numParameters": 11,
  "numSignalInParameters": 0,
  "numSignalOu)RNBOLIT"
R"RNBOLIT(tParameters": 0,
  "numInputChannels": 0,
  "numOutputChannels": 2,
  "numMidiInputPorts": 1,
  "numMidiOutputPorts": 0,
  "transportUsed": true,
  "externalDataRefs": [
    {
      "id": "osc_wavetable_buf",
      "file": "wavetable1.wav",
      "type": "Float32Buffer",
      "tag": "buffer~"
    }
  ],
  "patcherSerial": 0,
  "inports": [],
  "outports": [],
  "inlets": [
    {
      "type": "midi"
    }
  ],
  "outlets": [
    {
      "type": "signal",
      "index": 1,
      "tag": "out1",
 )RNBOLIT"
R"RNBOLIT(     "meta": ""
    },
    {
      "type": "signal",
      "index": 2,
      "tag": "out2",
      "meta": ""
    }
  ],
  "presetid": "rnbo",
  "meta": {
    "architecture": "x64",
    "filename": "TGCJamRNBO.maxpat",
    "rnboobjname": "rnbomatic",
    "maxversion": "9.0.7",
    "rnboversion": "1.3.4",
    "name": "GameJamMusic"
  }
})RNBOLIT"
		);

	const std::string patcher_presets(
			R"RNBOLIT([
  {
    "name": "GameJamMusic",
    "preset": {
      "OffOn": {
        "value": 0
      },
      "__sps": {
        "ChInst": {
          "__sps": {
            "Osc": {},
            "Osc[1]": {},
            "Osc[2]": {},
            "Osc[3]": {},
            "Osc[4]": {}
          },
          "sSize": {
            "value": 256
          },
          "tablePos": {
            "value": 1
          }
        },
        "Chords": {
          "__sps": {
            "ChordColl": {
           )RNBOLIT"
R"RNBOLIT(   "__sps": {
                "I_chordVariants": {}
              }
            },
            "NextChord": {}
          }
        },
        "Verb": {
          "DecayLFO": {
            "value": 0
          },
          "SizeRandom": {
            "value": 0
          },
          "__sps": {
            "Blur~": {},
            "CombL~": {},
            "CombR~": {},
            "Damp~": {},
            "Mix~": {},
            "RoomA~": {},
            "RoomB~": {},
            "Shuffle~": {}
)RNBOLIT"
R"RNBOLIT(          },
          "damp": {
            "value": 50
          },
          "decay": {
            "value": 50
          },
          "diff": {
            "value": 50
          },
          "jitter": {
            "value": 50
          },
          "mix": {
            "value": 50
          },
          "size": {
            "value": 50
          }
        }
      }
    }
  }
])RNBOLIT"
		);
}

#else

#include <json/json.hpp>

namespace RNBO {
	const nlohmann::json patcher_description = nlohmann::json::parse(
			std::string(
				R"RNBOLIT({
  "parameters": [
    {
      "type": "ParameterTypeNumber",
      "index": 0,
      "name": "OffOn",
      "paramId": "OffOn",
      "minimum": 0,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
  )RNBOLIT"
R"RNBOLIT(    "index": 1,
      "name": "sSize",
      "paramId": "ChInst/sSize",
      "minimum": 1,
      "maximum": 8196,
      "exponent": 1,
      "steps": 0,
      "initialValue": 256,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 2,
      "name": "tablePos",
      "para)RNBOLIT"
R"RNBOLIT(mId": "ChInst/tablePos",
      "minimum": 0,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
      "initialValue": 1,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 3,
      "name": "decay",
      "paramId": "Verb/decay",
      "minimum": 0,
      "maximum")RNBOLIT"
R"RNBOLIT(: 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Decay",
      "unit": "%",
      "order": 4,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 4,
      "name": "DecayLFO",
      "paramId": "Verb/DecayLFO",
      "minimum": 0,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
 )RNBOLIT"
R"RNBOLIT(     "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 5,
      "name": "mix",
      "paramId": "Verb/mix",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumVal)RNBOLIT"
R"RNBOLIT(ues": [],
      "displayName": "Mix",
      "unit": "%",
      "order": 6,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 6,
      "name": "jitter",
      "paramId": "Verb/jitter",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Jitter",
      "uni)RNBOLIT"
R"RNBOLIT(t": "%",
      "order": 5,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 7,
      "name": "damp",
      "paramId": "Verb/damp",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Damp",
      "unit": "%",
      "order": 1,
      "debug": false,
     )RNBOLIT"
R"RNBOLIT( "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 8,
      "name": "size",
      "paramId": "Verb/size",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Size",
      "unit": "%",
      "order": 3,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "io)RNBOLIT"
R"RNBOLIT(Type": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 9,
      "name": "diff",
      "paramId": "Verb/diff",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Diff",
      "unit": "%",
      "order": 2,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "P)RNBOLIT"
R"RNBOLIT(arameterTypeNumber",
      "index": 10,
      "name": "SizeRandom",
      "paramId": "Verb/SizeRandom",
      "minimum": 0,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    }
  ],
  "numParameters": 11,
  "numSignalInParameters": 0,
  "numSignalOu)RNBOLIT"
R"RNBOLIT(tParameters": 0,
  "numInputChannels": 0,
  "numOutputChannels": 2,
  "numMidiInputPorts": 1,
  "numMidiOutputPorts": 0,
  "transportUsed": true,
  "externalDataRefs": [
    {
      "id": "osc_wavetable_buf",
      "file": "wavetable1.wav",
      "type": "Float32Buffer",
      "tag": "buffer~"
    }
  ],
  "patcherSerial": 0,
  "inports": [],
  "outports": [],
  "inlets": [
    {
      "type": "midi"
    }
  ],
  "outlets": [
    {
      "type": "signal",
      "index": 1,
      "tag": "out1",
 )RNBOLIT"
R"RNBOLIT(     "meta": ""
    },
    {
      "type": "signal",
      "index": 2,
      "tag": "out2",
      "meta": ""
    }
  ],
  "presetid": "rnbo",
  "meta": {
    "architecture": "x64",
    "filename": "TGCJamRNBO.maxpat",
    "rnboobjname": "rnbomatic",
    "maxversion": "9.0.7",
    "rnboversion": "1.3.4",
    "name": "GameJamMusic"
  }
})RNBOLIT"
			)
		);

	const nlohmann::json patcher_presets = nlohmann::json::parse(
			std::string(
				R"RNBOLIT([
  {
    "name": "GameJamMusic",
    "preset": {
      "OffOn": {
        "value": 0
      },
      "__sps": {
        "ChInst": {
          "__sps": {
            "Osc": {},
            "Osc[1]": {},
            "Osc[2]": {},
            "Osc[3]": {},
            "Osc[4]": {}
          },
          "sSize": {
            "value": 256
          },
          "tablePos": {
            "value": 1
          }
        },
        "Chords": {
          "__sps": {
            "ChordColl": {
           )RNBOLIT"
R"RNBOLIT(   "__sps": {
                "I_chordVariants": {}
              }
            },
            "NextChord": {}
          }
        },
        "Verb": {
          "DecayLFO": {
            "value": 0
          },
          "SizeRandom": {
            "value": 0
          },
          "__sps": {
            "Blur~": {},
            "CombL~": {},
            "CombR~": {},
            "Damp~": {},
            "Mix~": {},
            "RoomA~": {},
            "RoomB~": {},
            "Shuffle~": {}
)RNBOLIT"
R"RNBOLIT(          },
          "damp": {
            "value": 50
          },
          "decay": {
            "value": 50
          },
          "diff": {
            "value": 50
          },
          "jitter": {
            "value": 50
          },
          "mix": {
            "value": 50
          },
          "size": {
            "value": 50
          }
        }
      }
    }
  }
])RNBOLIT"
			)
		);
}

#endif
