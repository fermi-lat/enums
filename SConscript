# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/enums/SConscript,v 1.9 2009/03/11 04:31:26 glastrm Exp $
# Authors: Heather Kelly <heather@milkyway.gsfc.nasa.gov>
# Version: enums-03-00-00
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()

test_enums = progEnv.Program('test_enums',[ 'src/test/test_enums.cxx'])

progEnv.Tool('registerTargets', package = 'enums',
             testAppCxts = [[test_enums,progEnv]],
             includes = listFiles(['enums/*.h']))




