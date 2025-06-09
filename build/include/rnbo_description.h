#pragma once

#ifdef RNBO_DESCRIPTION_AS_STRING

namespace RNBO {
	const std::string patcher_description(
			R"RNBOLIT({
  "parameters": [
    {
      "type": "ParameterTypeNumber",
      "index": 0,
      "name": "OffOnC",
      "paramId": "OffOnC",
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
R"RNBOLIT(      "index": 1,
      "name": "OffOnAll",
      "paramId": "OffOnAll",
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
      "index": 2,
      "name": "OffOnM",
      "paramId": )RNBOLIT"
R"RNBOLIT("OffOnM",
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
      "index": 3,
      "name": "MelVol",
      "paramId": "MelVol",
      "minimum": 0.125,
      "maximum": 1,
      "ex)RNBOLIT"
R"RNBOLIT(ponent": 1,
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
      "index": 4,
      "name": "FilFreq",
      "paramId": "FilFreq",
      "minimum": 100,
      "maximum": 20000,
      "exponent": 1,
      "steps": 0,
      "initialValue": 400)RNBOLIT"
R"RNBOLIT(0,
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
      "name": "tempo",
      "paramId": "tempo",
      "minimum": 30,
      "maximum": 200,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "disp)RNBOLIT"
R"RNBOLIT(layName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 6,
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
   )RNBOLIT"
R"RNBOLIT(   "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 7,
      "name": "tablePos",
      "paramId": "ChInst/tablePos",
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
      "sig)RNBOLIT"
R"RNBOLIT(nalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 8,
      "name": "decay",
      "paramId": "Verb/decay",
      "minimum": 0,
      "maximum": 100,
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
)RNBOLIT"
R"RNBOLIT(    },
    {
      "type": "ParameterTypeNumber",
      "index": 9,
      "name": "DecayLFO",
      "paramId": "Verb/DecayLFO",
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
R"RNBOLIT(  "index": 10,
      "name": "mix",
      "paramId": "Verb/mix",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
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
      "index": 11,
      "name": "jitter",
      "paramId": )RNBOLIT"
R"RNBOLIT("Verb/jitter",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Jitter",
      "unit": "%",
      "order": 5,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 12,
      "name": "damp",
      "paramId": "Verb/damp",
      "minimum": 0,
      "maximum":)RNBOLIT"
R"RNBOLIT( 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Damp",
      "unit": "%",
      "order": 1,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 13,
      "name": "size",
      "paramId": "Verb/size",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "i)RNBOLIT"
R"RNBOLIT(nitialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Size",
      "unit": "%",
      "order": 3,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 14,
      "name": "diff",
      "paramId": "Verb/diff",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumV)RNBOLIT"
R"RNBOLIT(alues": [],
      "displayName": "Diff",
      "unit": "%",
      "order": 2,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 15,
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
      ")RNBOLIT"
R"RNBOLIT(unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 16,
      "name": "ChVal",
      "paramId": "ChNote/ChVal",
      "minimum": 0,
      "maximum": 3,
      "exponent": 1,
      "steps": 4,
      "initialValue": 1,
      "isEnum": true,
      "enumValues": [
        "1nd",
        "1n",
        "2nd",
        "2n"
      ],
      "displayName": "",
 )RNBOLIT"
R"RNBOLIT(     "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 17,
      "name": "Accents",
      "paramId": "Melodies/Accents",
      "minimum": 0.05,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
      "initialValue": 1,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug")RNBOLIT"
R"RNBOLIT(: false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 18,
      "name": "MelDur",
      "paramId": "Melodies/MelNote/MelDur",
      "minimum": 0,
      "maximum": 6,
      "exponent": 1,
      "steps": 7,
      "initialValue": 2,
      "isEnum": true,
      "enumValues": [
        "1nd",
        "2nd",
        "4nd",
        "8nd",
        "16nd",
        "32nd",
        "64nd"
      ],
      )RNBOLIT"
R"RNBOLIT("displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 19,
      "name": "tablePos",
      "paramId": "MeloInst/tablePos",
      "minimum": 0,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0.5,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "ord)RNBOLIT"
R"RNBOLIT(er": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 20,
      "name": "TremFreq",
      "paramId": "MeloInst/TremFreq",
      "minimum": 0,
      "maximum": 5,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": tr)RNBOLIT"
R"RNBOLIT(ue,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 21,
      "name": "sSize",
      "paramId": "MeloInst/sSize",
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
      "ioType": "IO)RNBOLIT"
R"RNBOLIT(TypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 22,
      "name": "TremAmp",
      "paramId": "MeloInst/TremAmp",
      "minimum": 0.05,
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
    }
  ],
  "numParameters": 23,)RNBOLIT"
R"RNBOLIT(
  "numSignalInParameters": 0,
  "numSignalOutParameters": 0,
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
      "type": "sign)RNBOLIT"
R"RNBOLIT(al",
      "index": 1,
      "tag": "out1",
      "meta": ""
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
    "filename": "TGCJamRNBONoteValues.maxpat",
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
      "name": "OffOnC",
      "paramId": "OffOnC",
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
R"RNBOLIT(      "index": 1,
      "name": "OffOnAll",
      "paramId": "OffOnAll",
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
      "index": 2,
      "name": "OffOnM",
      "paramId": )RNBOLIT"
R"RNBOLIT("OffOnM",
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
      "index": 3,
      "name": "MelVol",
      "paramId": "MelVol",
      "minimum": 0.125,
      "maximum": 1,
      "ex)RNBOLIT"
R"RNBOLIT(ponent": 1,
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
      "index": 4,
      "name": "FilFreq",
      "paramId": "FilFreq",
      "minimum": 100,
      "maximum": 20000,
      "exponent": 1,
      "steps": 0,
      "initialValue": 400)RNBOLIT"
R"RNBOLIT(0,
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
      "name": "tempo",
      "paramId": "tempo",
      "minimum": 30,
      "maximum": 200,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "disp)RNBOLIT"
R"RNBOLIT(layName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 6,
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
   )RNBOLIT"
R"RNBOLIT(   "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 7,
      "name": "tablePos",
      "paramId": "ChInst/tablePos",
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
      "sig)RNBOLIT"
R"RNBOLIT(nalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 8,
      "name": "decay",
      "paramId": "Verb/decay",
      "minimum": 0,
      "maximum": 100,
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
)RNBOLIT"
R"RNBOLIT(    },
    {
      "type": "ParameterTypeNumber",
      "index": 9,
      "name": "DecayLFO",
      "paramId": "Verb/DecayLFO",
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
R"RNBOLIT(  "index": 10,
      "name": "mix",
      "paramId": "Verb/mix",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
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
      "index": 11,
      "name": "jitter",
      "paramId": )RNBOLIT"
R"RNBOLIT("Verb/jitter",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Jitter",
      "unit": "%",
      "order": 5,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 12,
      "name": "damp",
      "paramId": "Verb/damp",
      "minimum": 0,
      "maximum":)RNBOLIT"
R"RNBOLIT( 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Damp",
      "unit": "%",
      "order": 1,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 13,
      "name": "size",
      "paramId": "Verb/size",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "i)RNBOLIT"
R"RNBOLIT(nitialValue": 50,
      "isEnum": false,
      "enumValues": [],
      "displayName": "Size",
      "unit": "%",
      "order": 3,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 14,
      "name": "diff",
      "paramId": "Verb/diff",
      "minimum": 0,
      "maximum": 100,
      "exponent": 1,
      "steps": 0,
      "initialValue": 50,
      "isEnum": false,
      "enumV)RNBOLIT"
R"RNBOLIT(alues": [],
      "displayName": "Diff",
      "unit": "%",
      "order": 2,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 15,
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
      ")RNBOLIT"
R"RNBOLIT(unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 16,
      "name": "ChVal",
      "paramId": "ChNote/ChVal",
      "minimum": 0,
      "maximum": 3,
      "exponent": 1,
      "steps": 4,
      "initialValue": 1,
      "isEnum": true,
      "enumValues": [
        "1nd",
        "1n",
        "2nd",
        "2n"
      ],
      "displayName": "",
 )RNBOLIT"
R"RNBOLIT(     "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 17,
      "name": "Accents",
      "paramId": "Melodies/Accents",
      "minimum": 0.05,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
      "initialValue": 1,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug")RNBOLIT"
R"RNBOLIT(: false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 18,
      "name": "MelDur",
      "paramId": "Melodies/MelNote/MelDur",
      "minimum": 0,
      "maximum": 6,
      "exponent": 1,
      "steps": 7,
      "initialValue": 2,
      "isEnum": true,
      "enumValues": [
        "1nd",
        "2nd",
        "4nd",
        "8nd",
        "16nd",
        "32nd",
        "64nd"
      ],
      )RNBOLIT"
R"RNBOLIT("displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 19,
      "name": "tablePos",
      "paramId": "MeloInst/tablePos",
      "minimum": 0,
      "maximum": 1,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0.5,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "ord)RNBOLIT"
R"RNBOLIT(er": 0,
      "debug": false,
      "visible": true,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 20,
      "name": "TremFreq",
      "paramId": "MeloInst/TremFreq",
      "minimum": 0,
      "maximum": 5,
      "exponent": 1,
      "steps": 0,
      "initialValue": 0,
      "isEnum": false,
      "enumValues": [],
      "displayName": "",
      "unit": "",
      "order": 0,
      "debug": false,
      "visible": tr)RNBOLIT"
R"RNBOLIT(ue,
      "signalIndex": null,
      "ioType": "IOTypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 21,
      "name": "sSize",
      "paramId": "MeloInst/sSize",
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
      "ioType": "IO)RNBOLIT"
R"RNBOLIT(TypeUndefined"
    },
    {
      "type": "ParameterTypeNumber",
      "index": 22,
      "name": "TremAmp",
      "paramId": "MeloInst/TremAmp",
      "minimum": 0.05,
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
    }
  ],
  "numParameters": 23,)RNBOLIT"
R"RNBOLIT(
  "numSignalInParameters": 0,
  "numSignalOutParameters": 0,
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
      "type": "sign)RNBOLIT"
R"RNBOLIT(al",
      "index": 1,
      "tag": "out1",
      "meta": ""
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
    "filename": "TGCJamRNBONoteValues.maxpat",
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
