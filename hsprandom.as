#uselib "HSPRandom.dll"
#cfunc global rdrnd "rdrnd" 
#cfunc global imrdrnd "imrdrnd" int
#cfunc global irrdrnd "irrdrnd" int,int
#func _dmrdrnd "dmrdrnd" double,var
#func _drrdrnd "drrdrnd" double,double,var
#func global hsprndinit "hsprndinit"
#func global ihsprndinit "ihsprndinit" int
#func _iahsprndinit "iahsprndinit" int,int
#cfunc global mtrnd "mtrnd" 
#cfunc global immtrnd "immtrnd" int
#cfunc global irmtrnd "irmtrnd" int,int
#func _dmmtrnd "dmmtrnd" double,var
#func _drmtrnd "drmtrnd" double,double,var
#module hsprnd
#define global iahsprndinit(%1) _iahsprndinit@ %1,length(%1)
#defcfunc dmrdrnd double max,local ret
	ret=0.0
	_dmrdrnd@ max,ret
	return ret
#defcfunc drrdrnd double min, double max, local ret
	ret=0.0
	_drrdrnd@ min,max,ret
	return ret
#defcfunc dmmtrnd double max,local ret
	ret=0.0
	_dmmtrnd@ max,ret
	return ret
#defcfunc drmtrnd double min, double max, local ret
	ret=0.0
	_drmtrnd@ min,max,ret
	return ret
#global