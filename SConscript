# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/enums/SConscript,v 1.3 2008/07/29 19:30:48 glastrm Exp $
# Authors: Heather Kelly <heather@milkyway.gsfc.nasa.gov>
# Version: enums-02-02-00
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()

test_enums = progEnv.Program('test_enums', 'src/test/test_enums.cxx')

progEnv.Tool('registerObjects', package = 'enums', testApps = [test_enums], includes = listFiles(['enums/*.h']))
