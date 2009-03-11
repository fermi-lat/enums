# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/enums/SConscript,v 1.8 2009/01/23 00:06:57 ecephas Exp $
# Authors: Heather Kelly <heather@milkyway.gsfc.nasa.gov>
# Version: enums-03-00-00
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()

test_enums = progEnv.Program('test_enums',[ 'src/test/test_enums.cxx'])

progEnv.Tool('registerObjects', package = 'enums', testApps = [test_enums], includes = listFiles(['enums/*.h']))




