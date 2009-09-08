# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/enums/SConscript,v 1.10 2009/08/07 00:00:50 jrb Exp $
# Authors: Heather Kelly <heather@milkyway.gsfc.nasa.gov>
# Version: enums-03-00-01
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()

test_enums = progEnv.Program('test_enums',[ 'src/test/test_enums.cxx'])

progEnv.Tool('registerTargets', package = 'enums',
             testAppCxts = [[test_enums,progEnv]],
             includes = listFiles(['enums/*.h']))




