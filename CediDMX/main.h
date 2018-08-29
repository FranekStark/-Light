// main.h

#ifndef _MAIN_h
#define _MAIN_h
const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>

<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="/theme" type="text/css">
  <title>#Light</title>
</head>

<body>
  <div class="py-5">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <h1 class="display-1" draggable="true">#Light</h1>
        </div>
      </div>
    </div>
  </div>
  <div class="py-5">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <div class="card">
            <div class="card-header"> Lamp</div>
            <div class="card-body">
              <div class="btn-group">
                <a href="?q=L0" class="btn btn-primary">Off</a>
                <a href="?q=LSS" class="btn btn-primary">Strobe Slow</a>
                <a href="?q=LSM" class="btn btn-primary">Strobe Mid</a>
                <a class="btn btn-primary" href="?q=LSF">Strobe Fast</a>
                <a class="btn btn-primary text-light" href="?q=L1">On</a>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="py-5">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <div class="card">
            <div class="card-header"> Color</div>
            <div class="card-body">
              <div class="btn-group">
                <a class="btn btn-primary" href="?q=C0">White</a>
                <a class="btn btn-primary" href="?q=C1">ColorChase1</a>
                <a class="btn btn-primary" href="?q=C2">ColorChase2</a>
                <a class="btn btn-primary" href="?q=R">R</a>
                <a class="btn btn-primary" href="?q=G">G</a>
                <a class="btn btn-primary" href="?q=B">B</a>
              </div>
            </div>
            <div class="card-body">
              <div class="btn-group">
                <a href="?q=Cslow" class="btn btn-outline-primary">Slow</a>
                <a href="?q=CMid" class="btn btn-outline-primary">Mid</a>
                <a class="btn btn-outline-primary" href="?q=CFast">Fast</a>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="py-5">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <div class="card">
            <div class="card-header"> Move</div>
            <div class="card-body">
              <div class="btn-group">
                <a class="btn btn-primary" href="?q=M0">STOP</a>
                <a class="btn btn-primary" href="?q=M1">Pattern1</a>
                <a class="btn btn-primary" href="?q=M2">Pattern2</a>
                <a class="btn btn-primary" href="?q=M3">Pattern3</a>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="py-5">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <p class="">2018 by Franek Stark</p>
        </div>
      </div>
    </div>
  </div>
</body>

</html>

)=====";
#endif

