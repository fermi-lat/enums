# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/enums/SConscript,v 1.5 2008/08/15 05:30:48 glastrm Exp $
# Authors: Heather Kelly <heather@milkyway.gsfc.nasa.gov>
# Version: enums-02-02-01
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()

test_enums = progEnv.Program('test_enums',[ 'src/test/test_enums.cxx'])

progEnv.Tool('registerObjects', package = 'enums', testApps = [test_enums], includes = listFiles(['enums/*.h']))
