// #if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
  
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example)

 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
#include <stdio.h> 
#include <stdlib.h>
/** Notes used in @Midicontroller, Keyboard*/
struct Frequency{
  float frequency;
  float amplitude;
  
  void setFrequency(float frequency){
    frequency = frequency;
  }
  float getFrequency(){
    return frequency;
  }
};


struct Channel{
  int channelNumber;
 
 int getChannel(){
   return channelNumber;
 }

 void setChannel(int channel){
   channelNumber = channel;
 }
};


struct Note{
  char noteValue;
  Frequency frequency;
  float amplitude;
  double phase;

  Frequency getFrequency(){
    return frequency;
  }
  void setFrequency(Frequency freqInput){
    frequency = freqInput;
  }

  char getNoteValue(){
    return noteValue;
  }

  void setNoteValue(char note){
    noteValue = note;
  }
};



struct Oscillator {

 float oscillate (){
   return rand();
  }

  float reversePhase(){
    return 0;
  }

  float transform(){
return 0;
  }
};

struct Keyboard{
  Note playNote(){
    Note note;
    Oscillator oscillator;

  note.getFrequency().setFrequency(oscillator.oscillate());
    return note;
  };

  int sustainNote();
  bool releaseNote();
};




struct FrequencyBand{
  Frequency startFrequency;
  Frequency endFrequency;
  
  Frequency getStartFrequency(){
    return startFrequency;
  }

  Frequency getEndFrequency(){
    return endFrequency;
  }

 void setStartFrequency(Frequency frequency){
   startFrequency = frequency;
  }

  void setStopFrequency(Frequency frequency){
    endFrequency = frequency;
  }
};


struct Envelope{
  float attack;
  float sustain;
  float decay;
  float release;


  void setAttack(float inputAttack){
    attack = inputAttack;
  }
  float getAttack(){
    return attack;
  }
  float getSustain(){
    return sustain;
  }
  void setSustain(float inputSustain){
    sustain = inputSustain;
  }

  float getDecay(){
    return decay;
  }
  void setDecay(float inputDecay){
    decay = inputDecay;
  }
  void setRelease(float inputRelease){
    release = inputRelease;
  }
  
};




struct RecordBuffer{};
struct MidiRegion{
  Note notes ;
  int length;

void setNotes(Note notes){
notes = notes;
}

Note getNotes(){
  return notes;
}

};

struct Wav{
  Frequency frequency;
  int length; 
  char metaData;

 static Wav convertNoteToWav(Note note){
  Wav wav;
   wav.setFrequency(note.getFrequency());
  return wav;
}
  void setFrequency(Frequency audioFrequency){
    frequency = audioFrequency;
  }
  Frequency getFrequency(){
    return frequency;
  }
  void setLength(int audioLength){
    length = audioLength;
  }
  int getAudioLength(){
    return length;
  }
};

struct AudioRegion{
  Wav audioWav;
  

   void setAudio( Wav wav){
    audioWav = wav;
   
  }

  Wav getAudio(){
    return audioWav;
  }
};


struct Track{
  MidiRegion trackMidi;
  AudioRegion trackAudio;
  Channel inputChannel;
  Channel outputChannel; 
  MidiRegion addMidiRegion(MidiRegion newRegion){
  //  MidiRegion buffer = trackMidi + newRegion;
  return newRegion;
  }

  bool recordAudio(Channel channel, Wav wav ){
    inputChannel = channel;
    trackAudio.setAudio(wav); 
  return true;
  }

    bool recordMidi(Channel channel, MidiRegion midiRegion ){
    inputChannel = channel;
    midiRegion = midiRegion; 
  return true;
  }
};

struct MixBuffer{
  Track mixRegion(MidiRegion region, Track track){
    // return Track
    return track;
  }
};



struct MidiController{
  double deviceID;
  Oscillator oscillator;
  Channel inputChannel;
  Track track;
  void registerDevice(double deviceMAC){
  deviceID = deviceMAC;
  };

  double getDevice(){
    return deviceID;
  }

  bool syncDevice(){
   //sync device
   return true;
  };
  bool disconnectDevice();

};


struct Filter{
  Channel channel;
  FrequencyBand spectrumBand;
  

  
  void setFilter(FrequencyBand freqBand, Channel channel){
  
  }
  FrequencyBand getFrequencyBand(){
    return spectrumBand;
  }
};



//globals
 Note note;
 Oscillator oscillator;
 Keyboard keyboard; 
 MidiController midi;
 Filter filter;
 Envelope envelope;
 Channel channel;
 Track track;
Wav wav;
 RecordBuffer recordBuffer;
MixBuffer mixBuffer;
MidiRegion midiRegion; 


//main 
int main (){
  
channel.setChannel(1);
note = keyboard.playNote();
wav.setFrequency(note.getFrequency());
track.recordAudio(channel, wav);

Channel midiChannel;
midiChannel.setChannel(2);
midi.registerDevice(22);
midi.syncDevice(); //channel to track
Note midiNote;
midiNote.getFrequency().setFrequency(midi.oscillator.oscillate());
Track midiTrack;

midiTrack.recordMidi(midiChannel, midiRegion);


return 1;
}

/*
 1)
 Noun:
 action 1:
 action 2:
 action 3:
 */


/*
 2)
 Noun:
 action 1:
 action 2:
 action 3:
 */

/*
 3)
 Noun:
 action 1:
 action 2:
 action 3:
 */


/*
 4)
 Noun:
 action 1:
 action 2:
 action 3:
 */

/*
 5)
 Noun:
 action 1:
 action 2:
 action 3:
 */


/*
 6)
 Noun:
 action 1:
 action 2:
 action 3:
 */

/*
 7)
 Noun:
 action 1:
 action 2:
 action 3:
 */


/*
 8)
 Noun:
 action 1:
 action 2:
 action 3:
 */

/*
 9)
 Noun:
 action 1:
 action 2:
 action 3:
 */


/*
 10)
 Noun:
 action 1:
 action 2:
 action 3:
 */


// #endif


