char*	sysimport =
	"package sys\n"
	"type sys._e002 {}\n"
	"type sys.any 24\n"
	"type sys._e003 *sys.any\n"
	"type sys._o214 {_e212 sys._e003}\n"
	"type sys.uint32 6\n"
	"type sys._i216 {_e213 sys.uint32}\n"
	"type sys._e001 (sys._e002 sys._o214 sys._i216)\n"
	"var !sys.mal sys._e001\n"
	"type sys._e005 {}\n"
	"type sys._e006 {}\n"
	"type sys._e007 {}\n"
	"type sys._e004 (sys._e005 sys._e006 sys._e007)\n"
	"var !sys.breakpoint sys._e004\n"
	"type sys._e009 {}\n"
	"type sys._e010 {}\n"
	"type sys.int32 5\n"
	"type sys._i222 {_e221 sys.int32}\n"
	"type sys._e008 (sys._e009 sys._e010 sys._i222)\n"
	"var !sys.panicl sys._e008\n"
	"type sys._e012 {}\n"
	"type sys._e013 {}\n"
	"type sys.bool 12\n"
	"type sys._i227 {_e226 sys.bool}\n"
	"type sys._e011 (sys._e012 sys._e013 sys._i227)\n"
	"var !sys.printbool sys._e011\n"
	"type sys._e015 {}\n"
	"type sys._e016 {}\n"
	"type sys.float64 10\n"
	"type sys._i232 {_e231 sys.float64}\n"
	"type sys._e014 (sys._e015 sys._e016 sys._i232)\n"
	"var !sys.printfloat sys._e014\n"
	"type sys._e018 {}\n"
	"type sys._e019 {}\n"
	"type sys.int64 7\n"
	"type sys._i237 {_e236 sys.int64}\n"
	"type sys._e017 (sys._e018 sys._e019 sys._i237)\n"
	"var !sys.printint sys._e017\n"
	"type sys._e021 {}\n"
	"type sys._e022 {}\n"
	"type sys._e023 25\n"
	"type sys.string *sys._e023\n"
	"type sys._i242 {_e241 sys.string}\n"
	"type sys._e020 (sys._e021 sys._e022 sys._i242)\n"
	"var !sys.printstring sys._e020\n"
	"type sys._e025 {}\n"
	"type sys._e026 {}\n"
	"type sys.uint8 2\n"
	"type sys._e027 *sys.uint8\n"
	"type sys._i247 {_e246 sys._e027}\n"
	"type sys._e024 (sys._e025 sys._e026 sys._i247)\n"
	"var !sys.printpointer sys._e024\n"
	"type sys._e029 {}\n"
	"type sys._o254 {_e251 sys.string}\n"
	"type sys._i256 {_e252 sys.string _e253 sys.string}\n"
	"type sys._e028 (sys._e029 sys._o254 sys._i256)\n"
	"var !sys.catstring sys._e028\n"
	"type sys._e031 {}\n"
	"type sys._o264 {_e261 sys.int32}\n"
	"type sys._i266 {_e262 sys.string _e263 sys.string}\n"
	"type sys._e030 (sys._e031 sys._o264 sys._i266)\n"
	"var !sys.cmpstring sys._e030\n"
	"type sys._e033 {}\n"
	"type sys._o275 {_e271 sys.string}\n"
	"type sys._i277 {_e272 sys.string _e273 sys.int32 _e274 sys.int32}\n"
	"type sys._e032 (sys._e033 sys._o275 sys._i277)\n"
	"var !sys.slicestring sys._e032\n"
	"type sys._e035 {}\n"
	"type sys._o286 {_e283 sys.uint8}\n"
	"type sys._i288 {_e284 sys.string _e285 sys.int32}\n"
	"type sys._e034 (sys._e035 sys._o286 sys._i288)\n"
	"var !sys.indexstring sys._e034\n"
	"type sys._e037 {}\n"
	"type sys._o295 {_e293 sys.string}\n"
	"type sys._i297 {_e294 sys.int64}\n"
	"type sys._e036 (sys._e037 sys._o295 sys._i297)\n"
	"var !sys.intstring sys._e036\n"
	"type sys._e039 {}\n"
	"type sys._o304 {_e301 sys.string}\n"
	"type sys._e040 *sys.uint8\n"
	"type sys._i306 {_e302 sys._e040 _e303 sys.int32}\n"
	"type sys._e038 (sys._e039 sys._o304 sys._i306)\n"
	"var !sys.byteastring sys._e038\n"
	"type sys._e042 {}\n"
	"type sys._e043 <>\n"
	"type sys._o315 {_e311 sys._e043}\n"
	"type sys._e044 *sys.uint8\n"
	"type sys._e045 *sys.uint8\n"
	"type sys._s322 {}\n"
	"type sys._e046 *sys._s322\n"
	"type sys._i317 {_e312 sys._e044 _e313 sys._e045 _e314 sys._e046}\n"
	"type sys._e041 (sys._e042 sys._o315 sys._i317)\n"
	"var !sys.mkiface sys._e041\n"
	"type sys._e048 {}\n"
	"type sys._o326 {_e325 sys.int32}\n"
	"type sys._e049 {}\n"
	"type sys._e047 (sys._e048 sys._o326 sys._e049)\n"
	"var !sys.argc sys._e047\n"
	"type sys._e051 {}\n"
	"type sys._o330 {_e329 sys.int32}\n"
	"type sys._e052 {}\n"
	"type sys._e050 (sys._e051 sys._o330 sys._e052)\n"
	"var !sys.envc sys._e050\n"
	"type sys._e054 {}\n"
	"type sys._o335 {_e333 sys.string}\n"
	"type sys._i337 {_e334 sys.int32}\n"
	"type sys._e053 (sys._e054 sys._o335 sys._i337)\n"
	"var !sys.argv sys._e053\n"
	"type sys._e056 {}\n"
	"type sys._o343 {_e341 sys.string}\n"
	"type sys._i345 {_e342 sys.int32}\n"
	"type sys._e055 (sys._e056 sys._o343 sys._i345)\n"
	"var !sys.envv sys._e055\n"
	"type sys._e058 {}\n"
	"type sys._o352 {_e349 sys.int32 _e350 sys.float64}\n"
	"type sys._i354 {_e351 sys.float64}\n"
	"type sys._e057 (sys._e058 sys._o352 sys._i354)\n"
	"var !sys.frexp sys._e057\n"
	"type sys._e060 {}\n"
	"type sys._o361 {_e358 sys.float64}\n"
	"type sys._i363 {_e359 sys.int32 _e360 sys.float64}\n"
	"type sys._e059 (sys._e060 sys._o361 sys._i363)\n"
	"var !sys.ldexp sys._e059\n"
	"type sys._e062 {}\n"
	"type sys._o371 {_e368 sys.float64 _e369 sys.float64}\n"
	"type sys._i373 {_e370 sys.float64}\n"
	"type sys._e061 (sys._e062 sys._o371 sys._i373)\n"
	"var !sys.modf sys._e061\n"
	"type sys._e064 {}\n"
	"type sys._e066 [sys.any] sys.any\n"
	"type sys._e065 *sys._e066\n"
	"type sys._o377 {hmap sys._e065}\n"
	"type sys._i379 {keysize sys.uint32 valsize sys.uint32 keyalg sys.uint32 valalg sys.uint32 hint sys.uint32}\n"
	"type sys._e063 (sys._e064 sys._o377 sys._i379)\n"
	"var !sys.newmap sys._e063\n"
	"type sys._e068 {}\n"
	"type sys._o387 {val sys.any}\n"
	"type sys._e070 [sys.any] sys.any\n"
	"type sys._e069 *sys._e070\n"
	"type sys._i389 {hmap sys._e069 key sys.any}\n"
	"type sys._e067 (sys._e068 sys._o387 sys._i389)\n"
	"var !sys.mapaccess1 sys._e067\n"
	"type sys._e072 {}\n"
	"type sys._o394 {val sys.any pres sys.bool}\n"
	"type sys._e074 [sys.any] sys.any\n"
	"type sys._e073 *sys._e074\n"
	"type sys._i396 {hmap sys._e073 key sys.any}\n"
	"type sys._e071 (sys._e072 sys._o394 sys._i396)\n"
	"var !sys.mapaccess2 sys._e071\n"
	"type sys._e076 {}\n"
	"type sys._e077 {}\n"
	"type sys._e079 [sys.any] sys.any\n"
	"type sys._e078 *sys._e079\n"
	"type sys._i401 {hmap sys._e078 key sys.any val sys.any}\n"
	"type sys._e075 (sys._e076 sys._e077 sys._i401)\n"
	"var !sys.mapassign1 sys._e075\n"
	"type sys._e081 {}\n"
	"type sys._e082 {}\n"
	"type sys._e084 [sys.any] sys.any\n"
	"type sys._e083 *sys._e084\n"
	"type sys._i407 {hmap sys._e083 key sys.any val sys.any pres sys.bool}\n"
	"type sys._e080 (sys._e081 sys._e082 sys._i407)\n"
	"var !sys.mapassign2 sys._e080\n"
	"type sys._e086 {}\n"
	"type sys._o417 {_e414 sys.string _e415 sys.bool}\n"
	"type sys._i419 {_e416 sys.string}\n"
	"type sys._e085 (sys._e086 sys._o417 sys._i419)\n"
	"var !sys.readfile sys._e085\n"
	"type sys._e088 {}\n"
	"type sys._e089 {}\n"
	"type sys._i424 {_e423 sys.int32}\n"
	"type sys._e087 (sys._e088 sys._e089 sys._i424)\n"
	"var !sys.exit sys._e087\n"
	"))\n"
;
