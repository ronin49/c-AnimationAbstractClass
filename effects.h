#define EFFECT(function,duration) if(elapsed < duration) {DURATION=duration;function return true;} else elapsed -= duration;
#define PROGRESS() (elapsed/DURATION)
template <typename T>
struct Effect{
T allTime{};
T elapsed{};
T DURATION{};
void upd(T dt){
allTime += dt;
elapsed = allTime;
if(!continueEffects()){
allTime = T();
continueEffects();
}
}
virtual bool continueEffects() = 0;
};
