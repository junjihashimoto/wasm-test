Module['preRun'].push(function (){
  ENV['LD_LIBRARY_PATH']='/lib:/usr/lib';
});
Module['locateFile']=function (p){
  var path = require('path');
  var base = path.dirname(process['argv'][1]);
  return path.join(base,p);
};
